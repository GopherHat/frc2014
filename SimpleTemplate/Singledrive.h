
#include "WPILib.h"
#include "math.h"

	void onejostick(RobotDrive* myRobot, Joystick* JoystickL)
	{
		float yaxis = (*JoystickL).GetY();
		float xaxis = (*JoystickL).GetX();
		float multiplier = ((*JoystickL).GetThrottle()-1)/2;
	    
		float z = sqrt(pow(xaxis,2)+pow(yaxis,2));
		float curve = (xaxis/z);
		
		if ( xaxis <= 0.02 ) xaxis = 0;
		if ( xaxis >= -0.02 ) xaxis = 0;
		//if ( yaxis <= 0.01 ) yaxis = 0;
		if ( yaxis >= -0.02 ) yaxis = 0;
		
		if (z > 1){ z = 1;}
		if (z < -1){ z = -1;}
		
		if (yaxis < 0){ z = -z;}
		
		float speed = (z*multiplier);
		(*myRobot).SetSafetyEnabled(true);
		if (speed < 0) {curve = -curve;}
		(*myRobot).Drive(speed, curve);
	}	

	
			
			

