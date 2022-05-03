/*
   AET Shrek Enclosure
   Team Name: Arduinos Are Like Onions
   Team Members: Jack Alsaffar, Joshua Hale, Daniel Sanchez
   Description: Switch and servo program
*/

#include<Servo.h>

//CONSTANTS
const int stagePin = 8;
const int fionaPin = 7;
const int donkeyPin = 5;
const int shrekPin = 4;
const int farqPin = 3;

//VARIABLES
Servo stageServo;
Servo fionaServo;
//int pos;


void setup() {
  // put your setup code here, to run once:
  stageServo.attach(stagePin);
  fionaServo.attach(fionaServo);
  Serial.begin(9600);
  stageServo.write(0);
  fionaServo.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  // if button is pressed, swivel servo 180 degrees
  if (Pin == HIGH && Pin == HIGH) {
    stageServo.write();
    fionaServo.write();
  } else if (Pin = HIGH && Pin == HIGH) {
    stageServo.write();
    fionaServo.write();
  } else if (Pin == HIGH && Pin == HIGH && Pin == HIGH) {
    stageServo.write();
    fionaServo.write();
  } else if (Pin == HIGH && Pin == HIGH && Pin == HIGH && Pin == HIGH) {
    stageServo.write();
    fionaServo.write();
  } else {
    stageServo.write(0);
    fionaServo.write(0);
  }
}

v oid stageMove(int a) {
  for (int i = stageServo.read; i != a; i += 5) {
    stageServo.write(i);
    delay(10);
  }
}

/*
  void stageRotate1{}{
  stageServo.write(
  }
*/
