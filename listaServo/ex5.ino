/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
Servo myservo1;

int potpin = A0;  // analog pin used to connect the potentiometer
int pot;    // variable to read the value from the analog pin
int val1;
int val2;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the Servo object
  myservo1.attach(10);
}

void loop() {
  pot = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)

  val1 = map(pot, 0, 511, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  val2 = map(pot, 512, 1023, 0, 180);

  myservo.write(val1);
  myservo1.write(val2);

  delay(15);                           // waits for the servo to get there
}
