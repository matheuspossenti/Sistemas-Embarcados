int cont;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    for (cont = 13; cont >= 11; cont--) {
      digitalWrite(cont, HIGH);
      delay(300);
      digitalWrite(cont, LOW);
    }
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
  }

  if (digitalRead(3) == HIGH) {
    for (cont = 11; cont <= 13; cont++) {
      digitalWrite(cont, HIGH);
      delay(300);
      digitalWrite(cont, LOW);
    }
    while (digitalRead(3) == HIGH) {
      delay(10);
    }
  }
}
