7 seg 10 counter

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // 0
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(1000);

  // 1
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(1000);

  // 2
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(1000);

  //3
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  delay(1000);

  // 4
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  
  // 5
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(1000);

  // 6
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);

  // 7
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(1000);

  // 8
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);

  // 9
  digitalWrite(9, LOW);
  delay(1000);
}