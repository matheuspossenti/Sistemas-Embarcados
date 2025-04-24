#include <CheapStepper.h>
#include <Servo.h>

CheapStepper stepper;
CheapStepper stepper2 (2, 4, 5, 6);
Servo myservo;

boolean moveClockwise = false;

void setup() {
  myservo.attach(3);
  Serial.begin(9600);
  Serial.println("Ready to start moving!");
}

void loop() {
  for (int s=0; s<4096; s++){
    stepper.step(moveClockwise);
  }

  delay(1000);
  myservo.write(30);

  for (int s=0; s<4096; s++){
    stepper2.step(moveClockwise);
  }

  delay(1000);
  myservo.write(0);

  moveClockwise = !moveClockwise;

  for (int s=0; s<4096; s++){
    stepper.step(moveClockwise);
  }

  delay(1000);
  myservo.write(30);

  for (int s=0; s<4096; s++){
    stepper2.step(moveClockwise);
  }

  delay(1000);
  myservo.write(0);
}


