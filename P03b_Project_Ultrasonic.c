#pragma config(Sensor, S1,     sonarSensor,    sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*--------------------------------------------------------------------------------------------------------*\
|*                                                                                                        *|
|*                                          - Go until Push -                                             *|
|*                                            ROBOTC on NXT                                               *|
|*                                                                                                        *|
|*  This program allows your taskbot to move forward indefinately while monitoring a Touch Sensor.        *|
|*  If the Touch Sensor is bumped, the robot will reverse and stop.                                       *|
|*                                                                                                        *|
|*                                        ROBOT CONFIGURATION                                             *|
|*    NOTES:                                                                                              *|
|*    1)  The Touch Sensor should be mounted on the front.                                                *|
|*                                                                                                        *|
|*    MOTORS & SENSORS:                                                                                   *|
|*    [I/O Port]              [Name]              [Type]              [Description]                       *|
|*    Port B                  motorB              NXT                 Right motor                         *|
|*    Port C                  motorC              NXT                 Left motor                          *|
|*    Port 1                  touchSensor         Touch Sensor        Front mounted                       *|
\*---------------------------------------------------------------------------------------------------4246-*/
int y;
Int y= 0;

task main()
{
	while(y < 20) {
	  while(SensorValue(sonarSensor) > 10)    // While the Touch Sensor is inactive (hasn't been pressed):
	  {
	    motor[motorB] = 50;                        /* Run motors B and C forward */
	    motor[motorC] = 50;                        /* with a power level of 100. */
	  }

	  motor[motorB] = -20;
	  motor[motorC] = 20;
	  wait1Msec(840);

	  y = y + 1;
	}
	motor[motorB] = 50;
	motor[motorC] = 50;
	wait1Msec(1500);
}