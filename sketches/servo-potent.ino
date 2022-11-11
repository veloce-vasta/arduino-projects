/*
    ⚠ NOTICE ⚠
    This is still in progress and I am testing it. Please dont start an issue for this.
*/

#include <Servo.h>

Servo Servo1; 

int sensorValue = 0;
int outputValue = 0;
int servoPin = 9;

void setup()
{
  pinMode(A0, INPUT);
  Servo1.attach(servoPin); 
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  Servo1.write(sensorValue);
  delay(2); // Wait for 2 millisecond(s)
}