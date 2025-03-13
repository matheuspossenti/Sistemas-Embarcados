void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

int a = 0;

void loop() {
  Serial.println(a);

  if (digitalRead(2) == HIGH) {
    a++;
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
  }
}
