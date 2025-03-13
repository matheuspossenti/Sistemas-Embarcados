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

  if (pot >= 0 and pot < 255) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }

  if (pot >= 256 and pot < 511) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }

  if (pot >= 512 and pot < 765) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }

  if (pot >= 766) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  }

  volt = pot * 5 / 1022;

  Serial.print(pot);
  Serial.print(" ");
  Serial.println(volt, 5); // ,5 determina as casas decimais

}
