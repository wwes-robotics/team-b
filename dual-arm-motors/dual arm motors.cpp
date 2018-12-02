#pragma config(Motor,  motor1,          LeftMotor,     tmotorVexIQ, PIDControl, reversed, driveLeft, encoder)
#pragma config(Motor,  motor4,          LeftArm,       tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor7,          RightMotor,    tmotorVexIQ, PIDControl, driveRight, encoder)
#pragma config(Motor,  motor10,         RightArm,      tmotorVexIQ, PIDControl, reversed, encoder)

void controlArm(int speed) {
  armControl(LeftArm, BtnLDown, BtnLUp, speed);
  armControl(RightArm, BtnLDown, BtnLUp, speed);
}

task main() {
  repeat(forever) {
    tankControl(ChD, ChA, 20);
    controlArm(60);
  }
}
