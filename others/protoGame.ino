float pot;
float volt;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  pot = analogRead(A0);

  volt = map(pot, 0, 1022, 0, 100);

  for(int i = 0; i < volt; i++) {
    Serial.print(" ");
  }

  Serial.println("*");

  // delay(100);
}
