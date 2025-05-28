int contador;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    while (digitalRead(2) == HIGH) {
      delay(10);
    }
    for(int i = 0; i <= 254; i++) {
      analogWrite(9, i);
      delay(10);
    }
    
  }

  if (digitalRead(3) == HIGH) {
    while (digitalRead(3) == HIGH) {
      delay(10);
    }
    for(int i = 254; i >= 0; i--) {
      analogWrite(9, i);
      delay(10);
    }
    
  }
}
