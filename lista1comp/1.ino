int cont;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(3) == HIGH) {
    if (cont < 3) {
      cont++;
      while (digitalRead(3) == HIGH) {
        delay(10);
      }
    }
  }

  if (digitalRead(2) == HIGH) {
    if (cont > 0) {
      cont--;
      while (digitalRead(2) == HIGH) {
        delay(10);
      }
    }
  }

  if(cont == 0) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }

  if(cont == 1) {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }

  if(cont == 2) {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }

  if(cont == 3) {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
}
