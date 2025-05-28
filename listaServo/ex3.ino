#include <Servo.h>

Servo myservo;
Servo myservo2;

int potpin = A0;
int val;
int a;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo2.attach(11);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    if (a < 180) a += 10;
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
  }

  if (digitalRead(3) == HIGH) {
    if (a > 10) a -= 10;
    while (digitalRead(3) == HIGH) {
      delay(10);
    }
  }

  myservo.write(a);
}
