#include <TimerOne.h>

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), timer, RISING);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

void timer() {
  digitalWrite(12, !digitalRead(12));
}