void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

int i;

void loop() {
  if (digitalRead(2) == HIGH) {
  i++;
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
  }

  if (i == 1) {
    digitalWrite(13, HIGH);
    i++;
  }

  if (i == 2) {
    digitalWrite(12, HIGH);
    i++;
  }

  if (i == 3) {
    digitalWrite(11, HIGH);
    i++;
  }

  if (i > 3) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    i = 0;
  }
}
