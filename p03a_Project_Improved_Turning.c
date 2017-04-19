task main() {
	//Sync the motors & set turn ratio
	nSyncedMotors = syncBC;
	nSyncedTurnRatio = 30;

	//Move the master motor & the slave motor will move with it
	motor[motorB] = 50;
	wati1Msec(4000);
}
