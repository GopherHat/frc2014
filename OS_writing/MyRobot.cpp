//Created By Timothy McDonald and Conner Oswald (with guidence from our mentors) in 2013 as part of the FIRST competition: at Barker College
//This was more or less what we used on the robot

#include "WPILib.h"
#include <math.h>
#include <Timer.h>


//control values
#define PusherExpireTime 3
#define LauncherPrespinningTime 4
#define AutonomousPeriodTime 15
#define AutoFirePower 0.7 //only be used in autonomous part
#define ClimbingPower 0.4

//Ports
#define SHOOTER_MOTOR 3 // spiny wheels
#define PusherRead_PORT 4 //Photo sensor
#define Loaded_PORT 6 //micro switch for frizbee
#define Pusher_PORT 1 //pusher of frizbee
#define CameraYaw_PORT 7

//Flags
bool CanLoad = false;
bool isFirstTime = true;
bool TriggerLocked = false;
bool IsTankDrive = false;

class RobotDemo : public SimpleRobot
{
	RobotDrive myRobot; // robot drive system
	Joystick stick_L,stick_R; // only joystick_L
	Jaguar Launcher; //TODO change the code for the launcher in the functions
	DigitalInput Pusher_Ready,Loaded; //Pusher_Ready is the infrared sensor, Loaded is the reed switch 
	Servo CameraYaw;
	Timer debounceTime;
	DigitalOutput Pusher;
	Timer AutonomousTimer;
	Timer PusherTimer;
	Timer LauncherPrespinningTimer;
	Timer HalfTurnTimer;

public:
	RobotDemo(void):
		myRobot(1, 2),	// these must be initialized in the same order as they are declared above.
		stick_L(1),
		stick_R(2),
		Launcher(SHOOTER_MOTOR),
		Pusher_Ready(1, PusherRead_PORT),
		Loaded(1,Loaded_PORT),
		CameraYaw(CameraYaw_PORT),
		debounceTime(),
		Pusher(Pusher_PORT),
		AutonomousTimer(),
		PusherTimer(),
		LauncherPrespinningTimer()
		{
		//set exiration time for auto power cut off
		shooterOn = false;
		myRobot.SetExpiration(0.1);
		Launcher.SetExpiration(0.1);
		}

	

	void Autonomous(void)
	{
	//	float perfectNumber=2;
		myRobot.SetSafetyEnabled(true);
	//	Launcher.SetSafetyEnabled(true); //do not enable safety feature otherwise autonomous fire won't work 
		if(IsAutonomous() && IsEnabled())
		{
			AutonomousTimer.Start();
			LauncherPrespinningTimer.Start();
			Launcher.SetSpeed(AutoFirePower); //enable launcher
		}
		while(IsAutonomous()&& IsEnabled() && !AutonomousTimer.HasPeriodPassed(AutonomousPeriodTime)) //Autonomous time period 15s
		{
			//printf("time %f \n",AutonomousTimer.Get()); //all printf statements are for debug purpose
			if(LauncherPrespinningTimer.HasPeriodPassed(LauncherPrespinningTime) && frisbeeLoaded())
			{fireFrisbee();}
			
		
		}
		
		//set sys back to stop state once autonomous period has passed
		Pusher.Set(0);
		Launcher.SetSpeed(0);
		LauncherPrespinningTimer.Reset();
		LauncherPrespinningTimer.Stop();
		myRobot.Drive(0.0,0.0);
	}

	//main function for teleop period
	void OperatorControl(void)
	{
		
		myRobot.SetSafetyEnabled(true);//enable motor safety features
		Launcher.SetSafetyEnabled(true);
		while (IsOperatorControl()&& IsEnabled())
		{
			drive();
			JoystickButton();
		}
		myRobot.Drive(0,0); //Stop robot if operator is not in control 
	}
	
	void Test() {
		myRobot.Drive(0,0); //Stop robot if operator is not in control
		//myRobot.SetSafetyEnabled(true);//enable motor safety features
		//Launcher.SetSafetyEnabled(true);
		while (1)//IsOperatorControl()&& IsEnabled())
		{
			printf("\n\n\nWe're  working!\n\n\n");
		}
		myRobot.Drive(0,0); //Stop robot if operator is not in control 
	}
	

private:
	bool shooterOn; //This flag hasn't been used in anylogic check
	//Detect if frisbee pusher has gone full cycle
	
	bool GetPusherVal()	// the photo sensor works inverted
	{
		return !Pusher_Ready.Get();
	}
	
	bool frisbeePusherInStartPos()
	{
			return GetPusherVal();
	}
	//1 light 0 dark
	
	
	//Detect if frisbee is loaded, ready to be shot
	
	bool frisbeeLoaded() //do not use this unless you are pro or the compiler
	{
		return Loaded.Get();
	}

	//function to turn on launcher motor
	void spinUpShooter()
	{
		if(isFirstTime == true)
			{
			isFirstTime = false;
			}
		shooterOn = true;
		setShooterSpeed(((stick_R.GetZ()-1.0)/2.0));//speed according to right joystick analog button
	}
	
	//turn pre spin motor off
	void spinDownShooter()
	{
		shooterOn = false;
		setShooterSpeed(0.0);
	}
	
	//pusher control function, btn 8 on R stick will stop the pusher while it's turning
	void shootingCode()
	{
		drive();
		if(!readJoystick_RButton(8))Pusher.Set(1);
		if(readJoystick_RButton(8))
		{
			Pusher.Set(0);
			//printf("stop the pusher \n");
		}
	}
	
	//FCS
	void fireFrisbee()
	{		
			PusherTimer.Start(); //this timmer prevents pusher motor be damaged if launcher has been jammed
			while(frisbeePusherInStartPos() 
					&& !readJoystick_RButton(8) 
					&& !PusherTimer.HasPeriodPassed(PusherExpireTime) 
					&& !TriggerLocked)
			{
				shootingCode();
			}
			while(!frisbeePusherInStartPos() 
					&& !readJoystick_RButton(8) 
					&& !PusherTimer.HasPeriodPassed(PusherExpireTime) 
					&& !TriggerLocked)
			{
				shootingCode();
			}
			if(PusherTimer.HasPeriodPassed(PusherExpireTime)){TriggerLocked = true;} //lock the trigger if jam happends, driver can unlock the trigger by press btn 3 on right joystick
			CanLoad = true;//btn 10 on right joystick enabled
			PusherTimer.Reset();
			PusherTimer.Stop();
			Pusher.Set(0);
	}

	//Changes speed of the launching system to alter the distance
	//that the frisbee flies
	void setShooterSpeed(float newSpeed)
	{
		shooterOn = true;
		if(newSpeed==0){shooterOn=false;}
		//Jaguar.SetSpeed expects -1 to 1
		if(newSpeed > 1)  newSpeed =  1;
		if(newSpeed < -1) newSpeed = -1;
		
		Launcher.SetSpeed(newSpeed);//not sure if works but good luck with dat
		printf("firing power: %f \n",newSpeed);
		
	}
	
	//Read joystick and move
	void drive()
	{
		float y_axisR = stick_R.GetY();
		float y_axisL = stick_L.GetY();
		float z_axisL = (stick_L.GetZ()-1)/2;
		float offset = 0; 
		float leftValue = y_axisL*(z_axisL+offset);//calc speed of motors, y_axis * speed controler
		
		float rightValue = y_axisR*z_axisL;
		leftValue = modulatey(leftValue);
		rightValue = modulatey(rightValue);
		//printf("left motor :%f  right motor:%f \n",leftValue,rightValue);
		myRobot.TankDrive(leftValue, rightValue);
	}
	
	float modulatey(float input) //this de-curves the input to make the inputs linear VITAL
	{
		float x = 1.7;
		float Out;
		
		if(input<-0.1)
		{
			Out = pow(x, 5*input) - 1;
		}
		else if(input>0.1)
		{
			Out = 1 - pow(x, -5*input); 
		}
		else Out = 0;
		
		if(Out > 1) Out = 1;
		if(Out < -1) Out = -1;	
				
		return Out;
	}

	
	
	
	
//go backwards for climbing
	/*void goInReverse()
	{
		while(readJoystick_RButton(2)){myRobot.Drive(-ClimbingPower,0);}
		myRobot.Drive(0,0);
	}*/
	//software solution for missfeeding of first load
	//turn pusher can half revolution
	void LoadStation()
	{
		printf("photo sensor: %d \n",frisbeePusherInStartPos());
		if(CanLoad)
		{
			Pusher.Set(1);
			Wait(0.3);
			Pusher.Set(0);
			CanLoad = false;
		}
	}
	
	
	
	//Button mapping for both joysticks [i] is the button number.
	//Make sure you put it on the correct joystick left or right 
	void JoystickButton()
	{

		if(stick_R.GetRawButton(9)){Pusher.Set(1);} //this will be the final code as well
		if(!stick_R.GetRawButton(9)){Pusher.Set(0);} //right stick btn 9 controls pusher can manually
		if(!readJoystick_LButton(1)){spinDownShooter();} //safety issue for launcher
		
		for(int i=1;i<13;i++) //bad coding!!!  Wiki: software anti pattern
		{
			//Right Joystick mapping
			if(stick_R.GetRawButton(i))
			{
			switch(i)
			{
			case 1:
				printf("fire!! \n");
				fireFrisbee();
				break;
			case 2:
				break;
			case 3:
				TriggerLocked = false;//Unlock the trigger if trigger is locked
				break;
			case 4:
				LoadStation(); //turn pusher to load position prevents misfeeding
				break;
			case 5:
				break;
			case 6:
				//printf("\n\n\n\n\n\n Switch is: %d\n\n\n\n\n", Loaded.Get());
				break;
			case 7:
				break;
			case 8:
				Pusher.Set(0); //manual stop the pusher
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				break;				
				}
			}
			
		}
		
		//Left Joystick mapping
		for(int i=1;i<13;i++)
		{
			if((stick_L).GetRawButton(i))
			{
				switch(i)
				{
					case 1:
						setShooterSpeed(-((stick_R.GetZ()-1.0)/2.0));
						//printf("Firing speed %f \n", -((stick_R.GetZ()-1.0)/2.0));
						break;
					case 2:
						spinDownShooter(); //cut off shooter power 
						break;
					case 3:						
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
					case 9:
						break;
					case 10:
		
						break;
					case 11:
						break;
					case 12:
						break;
				}
			}	
		}		
	}
	
	
	bool readJoystick_LButton(int button)
	{
		return stick_L.GetRawButton(button);
	}
	
	bool readJoystick_RButton(int button)
	{
		return stick_R.GetRawButton(button);
	}
	
	
};

START_ROBOT_CLASS(RobotDemo);
