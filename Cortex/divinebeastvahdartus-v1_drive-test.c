#pragma config(Motor,  port2,           drivea,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           driveb,        tmotorVex393HighSpeed_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive_left(int speed){
	motor(port2)=speed;
}
void drive_right(int speed){
	motor(port3)=speed;
}
task main()
{
	while(true){
		drive_left(vexRT[Ch3]);
		drive_right(vexRT[Ch2]);
	}




}