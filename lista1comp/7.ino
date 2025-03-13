float pot1;
float volt1;
float pot2;
float volt2;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  pot1 = analogRead(A0);
  volt1 = pot1 * 255 / 1022;

  pot2 = analogRead(A1);
  volt2 = pot2 * 5 / 1022;

  analogWrite(11, volt1);
}
