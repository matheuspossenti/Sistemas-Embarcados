#include <Servo.h>

Servo myservo;
Servo myservo2;

int potpin = A0;
int val;
int a;

void setup() {
  myservo.attach(9);
  myservo2.attach(11);''
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);

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

  myservo2.write(a);
}
