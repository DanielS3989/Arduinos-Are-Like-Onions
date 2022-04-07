/*
   AET Shrek Enclosure
   Team Name: Arduinos Are Like Onions
   Team Members: Jack Alsaffar, Joshua Hale, Daniel Sanchez
   Description: Switch and servo program
*/

#include<Servo.h>;

//VARIABLES
Servo myServo;
const int buttonPin = 7;


void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
