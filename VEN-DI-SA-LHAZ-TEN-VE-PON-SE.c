#include "JoystickDriver.c"
#pragma DebuggerWindows("joystickSimple")
task main()
{
 if(joy1Btn(5) == 1) //When the right bumper is pushed, move motor A forward
 {
 motor(motorA) = 25;
 }
 else if(joy1Btn(6) == 1) //When the left bumper is pushed, move motor A backwards
 {
 motor(motorA) = -25;
 }
 else
 {
 motor(motorA) =0; // grabber 1
}

  if(joy1Btn(7) == 1) //When the right trigger is pushed, move motor A forward
 {
 motor(motorA) = 25;
 }
 else if(joy1Btn(8) == 1) //When the left trigger is pushed, move motor A backwards
 {
 motor(motorA) = -25;
 }
 else
 {
 motor(motorA) =0; // grabber 2
}

  while(1 == 1) //Repeat code forever
  {
    getJoystickSettings(joystick);

  	if (joystick.joy1_y1 < 5 && joystick.joy1_y1 > -5) //When the left thumbstick is near the middle, stop motor C.
  	{
			motor[motorC]= 0;
  	}
  	else //Else, make motor C's speed equal the y coordinate of the left thumbstick.
  	{
  		motor[motorC] = joystick.joy1_y1 / 2; //kicker
    }

