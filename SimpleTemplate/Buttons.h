#include "WPILib.h"
#include "math.h"
#include <stdio.h>
	
void joystickbutton(Joystick* JoystickL, Joystick* JoystickR)
			{
			int buttonNumber = 0;
			for (int i=1;i<11;i++){
				if((*JoystickL).GetRawButton(i)){
					buttonNumber = i;
					break;
			}
			switch(buttonNumber){
			case 0:
				
				break;
			case 1:printf("1");
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
				break;	
			case 9:
				break;	
			case 10:
				break;	
			case 11:
				break;	

			}}}			
