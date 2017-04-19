task main() {
	//Move forward
	motor[motorB] = 60;
	motor[motorC] = 60;
	wait1Msec(3000);
	//Left
	motor[motorB] = 40;
	motor[motorC] = -40;
	wait1Msec(850);
	//Forward
	motor[motorB] = 60;
	motor[motorC] = 60;
	wait1Msec(2000);
	//Right
	motor[motorB] = -40;
	motor[motorC] = 40;
	wait1Msec(850);
	//Forward
	motor[motorB] = 60;
	motor[motorC] = 60;
	wait1Msec(2000);
	//Right
	motor[motorB] = -40;
	motor[motorC] = 40;
	wait1Msec(850);
//Forward
	motor[motorB] = 60;
	motor[motorC] = 60;
	wait1Msec(2200);
	//Left
motor[motorB] = 40;
	motor[motorC] = -40;
	wait1Msec(850);
	//Forward
	motor[motorB] = 60;
	motor[motorC] = 60;
	wait1Msec(3000);
}
