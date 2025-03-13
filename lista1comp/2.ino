void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  if (digitalRead(2) == HIGH && digitalRead(3) == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    
  } 
  else if (digitalRead(3) == HIGH || digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
  }
}