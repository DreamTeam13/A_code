
/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                      - NXT Smooth Tank Drive -                                         *|
|*                                            ROBOTC on NXT                                               *|
|*                                                                                                        *|
|*  This program allows you to drive a robot via remote control using the ROBOTC Debugger.                *|
|*  This particular method uses "Tank Drive" where each side is controlled individually like a tank.      *|
|*  This program also ignores low values that would cause your robot to move when the joysticks fail to   *|
|*  return back to exact center.  You may need to play with the 'threshold' value to get it just right.   *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:                                                                                              *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port B                  motorB              NXT                 Right motor                         *|
|*    Port C                  motorC              NXT                 Left motor                          *|
\*---------------------------------------------------------------------------------------------------4246-*/

#include "JoystickDriver.c"
#pragma DebuggerWindows("joystickSimple")

task main()
{
  int threshold = 20;             /* Int 'threshold' will allow us to ignore low       */
                                  /* readings that keep our robot in perpetual motion. */

  while(true)                            // Infinite loop:
  {
    getJoystickSettings(joystick);
    if(abs(joystick.joy1_y2) > threshold)   // If the right analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[motorB] = joystick.joy1_y2;         // Motor B is assigned a power level equal to the right analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorB] = 0;                        // Motor B is stopped with a power level of 0.
    }


    if(abs(joystick.joy1_y1) > threshold)   // If the left analog stick's Y-axis readings are either above or below the threshold:
    {
      motor[motorC] = joystick.joy1_y1;         // Motor C is assigned a power level equal to the left analog stick's Y-axis reading.
    }
    else                                    // Else if the readings are within the threshold:
    {
      motor[motorC] = 0;                        // Motor C is stopped with a power level of 0.
    }

     if(joy1Btn(7) == 1)
 {
 motor(motorA) = 44;
 }
 else if(joy1Btn(8) == 1)
 {
 motor(motorA) = -44;
 }
 else
 {
 motor(motorA) =0;


 }}
}
