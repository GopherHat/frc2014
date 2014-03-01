#include "WPILib.h"
#include <math.h>
#include <Timer.h>
#include "functions.h"

#define debouncing_time 0.5
#define firing_gap 1
#define Prespining_require_time 5`1
#define Pusher_Sensor_Pin 1
#define Loader_Sensor_Pin 2

bool Flag_TankDrive = true;
bool firing = false;

float firingPower = 1;


class RobotDemo : public SimpleRobot
{
	RobotDrive Robot; // robot drive system
	Joystick stick_L;
	Joystick stick_R;
	Jaguar Launcher_Motor;
	DigitalOutput Pusher_Motor;
	Servo CameraServo;

	DigitalInput Pusher_Sensor,Loader_Sensor;

	Timer btn_debouncing_timer;
	Timer timer_firing_gap;
	Timer timer_prespining;

	Counter pusher_counter;
	

public:
	RobotDemo(void):
		Robot(1, 2),	// these must be initialized in the same order
		stick_L(1),
		stick_R(2),
		Launcher_Motor(3),
		Pusher_Motor(1),
		CameraServo(5),
		Pusher_Sensor(Pusher_Sensor_Pin),
		Loader_Sensor(Loader_Sensor_Pin),
		btn_debouncing_timer(),
		timer_firing_gap(),
		timer_prespining(),
		pusher_counter(Pusher_Sensor_Pin)
	{		
		Robot.SetExpiration(0.1);
		btn_debouncing_timer.Start();
		pusher_counter.Start();
		timer_firing_gap.Start();
	}

	
	void Autonomous(void)
	{
		
		//trolololol
		
	}

	
	void OperatorControl(void)
	{
		Robot.SetSafetyEnabled(true);
		
		pusher_counter.SetUpSourceEdge(1,0);
		
		printf("entering operating ctrl \n");
		
		while (IsOperatorControl())
		{
			joystick_Btn(&stick_L,&stick_R,&btn_debouncing_timer);
			Fire();
			if(Flag_TankDrive){TankDrive(&stick_L,&stick_R,&Robot);}
			else{Drive(&stick_R,&Robot);}
		}
		Robot.Drive(0,0);
	}
	
	
	void Test() {

	}
	
	void Limit(float* x, float lower_limit, float uper_limit)
	{
		if(*x<lower_limit){*x = lower_limit;}
		if(*x>uper_limit){*x = uper_limit;}
	}
	
	void Drive(Joystick* stick,RobotDrive* myRobot)
	{
		float x_axis,y_axis,z_axis,r,cosT;
		x_axis = (*stick).GetX();
		y_axis = (*stick).GetY();
		z_axis = ((*stick).GetZ()-1)/2;
		r = sqrt(pow(x_axis,2)+pow(y_axis,2));
		cosT = x_axis/r;
		float speed = z_axis * r;
		Limit(&x_axis,-1,1);
		Limit(&y_axis,-1,1);
		Limit(&z_axis,0,1);
		Limit(&r,-1,1);
		Limit(&cosT,-1,1);
		Limit(&speed,-1,1);
		if(y_axis >=0){(*myRobot).Drive(speed,-cosT);}
		if(y_axis < 0){(*myRobot).Drive(-speed,cosT);}
	}

	void TankDrive(Joystick* stickLeft,Joystick* stickRight,RobotDrive* myRobot)
	{
		float yl,yr,zr;
		yl = (*stickLeft).GetY();
		yr = (*stickRight).GetY();
		zr = ((*stickRight).GetZ() - 1)/2;
		float speedL = yl*zr;
		float speedR = yr*zr;
		if(speedL < 0.05 && speedL > -0.05){speedL = 0;}
		if(speedR < 0.05 && speedR > -0.05){speedR = 0;}
		(*myRobot).TankDrive(speedL,speedR);
		//printf("L motor: %f		R motor: %f \n",speedL,speedR);
	}
	
	void joystick_Btn(Joystick* stick_Left,Joystick* stick_Right,Timer* timer)
	{
		bool btn_Flag;
		if(Flag_TankDrive)
		{
			//tank drive
			for(int i = 1;i < 12;i++)
			{
				btn_Flag = false;
				btn_Flag = (*stick_Left).GetRawButton(i);
				if(btn_Flag == true && (*timer).Get() > debouncing_time)
				{						
					(*timer).Reset();
					switch (i)
					{
						case 1:
							break;
						case 2:
							firingPower-=0.1;
							Limit(&firingPower,0,1);
							printf("FiringPower: %f \n",firingPower);
							break;
						case 3:
							firingPower += 0.1;
							Limit(&firingPower,0,1);
							printf("Firingpower: %f \n",firingPower);
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
							Flag_TankDrive = true;
							printf("TankDrive = true");
							break;
						case 9:
							Flag_TankDrive = false;
							printf("TankDrive = false");
							break;
						case 10:
							break;
						case 11:
							break;
						default:
							break;
					}
					(*timer).Start();
				}
			}
		
			for(int i = 1;i < 12;i++)
			{
				btn_Flag = false;
				btn_Flag = (*stick_Right).GetRawButton(i);
				if(btn_Flag == true && (*timer).Get() > debouncing_time)
				{
					(*timer).Reset();
					switch (i)
					{
						case 1:
							break;
						case 2:
							CameraServo.SetAngle(180);
							printf("btn 2 R");
							break;
						case 3:
							CameraServo.SetAngle(0);
							printf("btn 3 R");
							break;
						case 4:
							
							break;
						case 5:
							CameraServo.SetAngle(90);
							printf("btn 5 R");
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
						default:
							break;
						(*timer).Start();
					}
				}
			}
		}
		
		//not tankdrive
		if(Flag_TankDrive == false)
		{
			for(int i = 1;i < 12;i++)
			{
				btn_Flag = false;
				btn_Flag = (*stick_Left).GetRawButton(i);
				if(btn_Flag == true && (*timer).Get() > debouncing_time)
				{
					(*timer).Reset();
					switch (i)
					{
					case 1:
						break;
					case 2:
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
						Flag_TankDrive = true;
						printf("TankDrive = true");
						break;
					case 9:
						break;
					case 10:
						break;
					case 11:
						break;
					default:
						break;
					}
					(*timer).Start();
				}
		}
	}
	}

	void Fire()
	{
		if(Flag_TankDrive && stick_L.GetRawButton(1)) 
		{
			Launcher_Motor.Set(firingPower,0); 
			printf("Prespinning: %f \n",firingPower);
			timer_prespining.Start();
		}//Prespinning
		
		
		if( (timer_firing_gap.Get() > firing_gap) && stick_R.GetRawButton(1) && Loader_Sensor.Get() && (timer_prespining.Get() > Prespining_require_time) )
		{
			printf("fire \n");
			int countVal = pusher_counter.Get();
			while(countVal == pusher_counter.Get())
			{
				Pusher_Motor.Set(true);
			}
			Pusher_Motor.Set(false);
			timer_firing_gap.Reset();
		}
	}
	
};

START_ROBOT_CLASS(RobotDemo);
