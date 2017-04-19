task main() {
	motor[motorB] = 20;
	motor[motorC] = 20;
	wait1Msec(3200);
	motor[motorB] = 20;
	motor[motorC] = -20;
	wait1Msec(1800);
	motor[motorB] = 20;
	motor[motorC] = 20;
	wait1Msec(6400);
	motor[motorB] = -20;
	motor[motorC] = 20;
	wait1Msec(1800);
	motor[motorB] = 20;
	motor[motorC] = 20;
	wait1Msec(3200);
	motor[motorB] = -20;
	motor[motorC] = 20;
	wait1Msec(1800);
	motor[motorB] = 20;
	motor[motorC] = 20;
	wait1Msec(3200);

}
