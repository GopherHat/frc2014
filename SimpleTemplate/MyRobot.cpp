#include "WPILib.h"
#include "math.h"
#include "Singledrive.h"
#include "TankDrive.h"
#include "Buttons.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 


	
class RobotDemo : public SimpleRobot
{
	//declaration and initialisation goes here
	RobotDrive myRobot;
	Joystick JoystickL;
	Joystick JoystickR;

	
public:	
	RobotDemo(void):
		myRobot(1,2),
		JoystickL(1),
		JoystickR(2)
	{
		myRobot.SetExpiration(0.1);
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		
	}

	/**
	 * Runs the motors with arcade steering. 
	 */
	void OperatorControl(void)
	{
		myRobot.SetSafetyEnabled(true);
		while (IsOperatorControl() && IsEnabled() )
		{ 
			joystickbutton(&JoystickL, &JoystickR);
			
			Dueldrive(&myRobot, &JoystickL, &JoystickR );
			
		}
		myRobot.Drive(0,0);		
	}	
	
private:

				
	/**
	 * Runs during test mode
	 */
	//void Test() {}
};

START_ROBOT_CLASS(RobotDemo);

