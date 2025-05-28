float temperatureCelsius;
float controleAr;
int potValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temperatureCelsius = (analogRead(A1) * 5.0) / 1023 * 100;

  potValue = analogRead(A0);

  controleAr = map(potValue, 0, 1023, 0, 100);

  Serial.print("Controle: ");
  Serial.print(controleAr);

  Serial.print("Temperatura: ");
  Serial.println(temperatureCelsius);

  if (temperatureCelsius >= controleAr) {
    digitalWrite(13, HIGH);
  }

  if (temperatureCelsius < controleAr) {
    digitalWrite(13, LOW);
  }

  delay(100);
}


