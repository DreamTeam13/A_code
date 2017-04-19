#pragma config(Sensor, S1,     lightSensor,    sensorLightActive)
#pragma config(Sensor, S2,     touchSensor,    sensorTouch)

task main()
{
	//Go forward until touching box
	while(SensorValue(touchSensor) == 0) {
		motor[motorB] = 40;
		motor[motorC] = 40;
	}
	wait1Msec(100);
	motor[motorB] = -30;
	motor[motorC] = -30;
	wait1Msec(1000);
	motor[motorB] = 20;
	motor[motorC] = -20;
	wait1Msec(850);
	motor[motorB] = 40;
	motor[motorC] = 40;
	wait1Msec(400);
	clearTimer(T1);
	//Line running for 10.5 seconds
	while(time1[T1] < 10500) {
		if (SensorValue(lightSensor) < 50) {
			motor[motorB] = 80;
			motor[motorC] = 0;
		} else {
			motor[motorB] = 0;
			motor[motorC] = 80;
		}
	}
	motor[motorB] = -20;
	motor[motorC] = 20;
	wait1Msec(840);
	motor[motorB] = 40;
	motor[motorC] = 40;
	wait1Msec(1200);
	motor[motorB] = -20;
	motor[motorC] = 20;
	wait1Msec(850);
	motor[motorB] = 40;
	motor[motorC] = 40;
	wait1Msec(7500);
}
