#include <Servo.h>

Servo myservo;
Servo myservo2;

int potpin = A0;
int val;
int cont;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo2.attach(11);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {

  if (digitalRead(2) == HIGH) {
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
    cont++;
    myservo.write(90);
    delay(5000);
    myservo.write(0);
    Serial.println(cont);
  }
}
