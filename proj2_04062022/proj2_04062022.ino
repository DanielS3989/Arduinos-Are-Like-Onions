/*
   AET Shrek Enclosure
   Team Name: Arduinos Are Like Onions
   Team Members: Jack Alsaffar, Joshua Hale, Daniel Sanchez
   Description: Switch and servo program
*/

#include<Servo.h>

//CONSTANTS
const int stagePin = 8;
const int fionaPin = 12;
const int fionaServoPin = 9;
const int donkeyPin = 11;
const int shrekPin = 10;
const int farqPin = 13;
const int piezoPin = 2;
const int Pin = 1;

//VARIABLES
Servo stageServo;
Servo fionaServo;
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(fionaPin, INPUT);
  pinMode(donkeyPin, INPUT);
  pinMode(shrekPin, INPUT);
  pinMode(farqPin, INPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(Pin, INPUT);
  stageServo.attach(stagePin);
  fionaServo.attach(fionaServoPin);
  Serial.begin(9600);
  stageServo.write(0);
  fionaServo.write(0);
  noTone(piezoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  //if pin etc. then fiona and stage move
  state = stageServo.read();
  if (shrekPin == HIGH && farqPin == HIGH && fionaPin == HIGH && donkeyPin == HIGH) {
    stageMove(0);
    fionaMove(0);
  } else if (fionaPin == HIGH && shrekPin == HIGH && donkeyPin == HIGH) {
    stageMove(0);
    fionaMove(0);
  } else if (farqPin == HIGH && shrekPin == HIGH) {
    stageMove(180);
    fionaMove(180);
    Serial.println("farq & shrek");
  } else if (donkeyPin == HIGH && fionaPin == HIGH) {
    stageMove(0);
    fionaMove(0);
  } else {
    stageMove(0);
    fionaMove(0);
    Serial.println("nothing");
  }
  if (stageServo.read() != state) {
    tone(piezoPin, 1000, 100);
  }
}

void stageMove(int a) {
  //if servo != int a, move servo towards a
  if (stageServo.read() < a) {
    for (int i = stageServo.read(); i < a; i += 5) {
      stageServo.write(i);
      delay(10);
    }
  } else if (stageServo.read() > a) {
    for (int i = stageServo.read(); i > a; i -= 5) {
      stageServo.write(i);
      delay(10);
    }
  }
}

void fionaMove(int a) {
  //if servo != int a, move servo towards a
  if (fionaServo.read() < a) {
    for (int i = fionaServo.read(); i <= a; i += 5) {
      fionaServo.write(i);
      delay(10);
    }
  } else if (fionaServo.read() > a) {
    for (int i = fionaServo.read(); i >= a; i -= 5) {
      fionaServo.write(i);
      delay(10);
    }
  }
}
