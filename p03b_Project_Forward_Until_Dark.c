#pragma config(Sensor, S1,     lightFront,         sensorLightActive)
#pragma config(Sensor, S2,     lightRear,         sensorLightActive)
task main()
{
//Move forward
wait1Msec(222);
motor[motorB] = 25;
motor[motorC] = 25;
//Detect the first line
waitUntil(SensorValue[lightFront] < 50);
//Return to starting line
motor[motorB] = -25;
motor[motorC] = -25;
wait1Msec(1000);
//Back touch sensor will detect the starting line
waitUntil(SensorValue[lightRear] < 50);

//Repeat the process but skip lines that have already been sensed
motor[motorB] = 25;
motor[motorC] = 25;
wait1Msec(2400);
waitUntil(SensorValue[lightFront] < 50);
motor[motorB] = -25;
motor[motorC] = -25;
wait1Msec(2400);
waitUntil(SensorValue[lightRear] < 50);
motor[motorB] = 25;
motor[motorC] = 25;
wait1Msec(4000);
waitUntil(SensorValue[lightFront] < 50);
motor[motorB] = -25;
motor[motorC] = -25;
wait1Msec(4000);
waitUntil(SensorValue[lightRear] < 50);
motor[motorB] = 25;
motor[motorC] = 25;
wait1Msec(5000);
waitUntil(SensorValue[lightFront] < 50);
motor[motorB] = -25;
motor[motorC] = -25;
wait1Msec(4000);
waitUntil(SensorValue[lightRear] < 50);
motor[motorB] = 25;
motor[motorC] = 25;
wait1Msec(4200);
waitUntil(SensorValue[lightFront] < 50);
motor[motorB] = -25;
motor[motorC] = -25;
}
