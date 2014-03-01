#include "WPILib.h"
#include "math.h"
	
	float decurve(float input) //this de-curves the input to make the inputs linear VITAL
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

	void Dueldrive(RobotDrive* myRobot, Joystick* JoystickL, Joystick* JoystickR)
	{
		float y_axisR = (*JoystickL).GetY();
		float y_axisL = (*JoystickR).GetY(); 
		float z_axisL = ((*JoystickL).GetZ()-1)/2;
		float offset = 0; 
		float leftValue = y_axisL*(z_axisL+offset);//calc speed of motors, y_axis * speed controler
		
		if ( y_axisR <= 0.02 && y_axisR >= -0.02 ) y_axisR = 0;
//		if (  ) y_axisR = 0;
		if ( y_axisL <= 0.02 && y_axisL >= -0.02 ) y_axisL = 0;
//		if ( ) y_axisL = 0;
		
		
		(*myRobot).SetSafetyEnabled(true);
		float rightValue = y_axisR*z_axisL;
		leftValue = decurve(leftValue);
		rightValue = decurve(rightValue);
		//printf("left motor :%f  right motor:%f \n",leftValue,rightValue);
		(*myRobot).TankDrive(leftValue, rightValue);
	}	

	
	
/*void joystickbutton(Joystick JoystickL, Joystick JoystickR, int buttonNumber)
			{
			buttonNumber = 0;
			for (int i=1;i<7;i++){
				if(JoystickL.GetRawButton(i)){
					buttonNumber = i;
					break;
			}
			switch(buttonNumber){
			case 0:
				
				break;
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
			}
			
*/			
