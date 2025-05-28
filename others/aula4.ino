void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

int i;

void loop() {
  if (digitalRead(2) == HIGH) {
    if (i < 9) {
      i++;
      while (digitalRead(2) == HIGH) {
        delay(10);
      }
      Serial.println("Mostrando número: ");
      Serial.print(i);
    }
  }

  if (digitalRead(3) == HIGH) {
    if (i > 0) {
      i--;
      while (digitalRead(3) == HIGH) {
        delay(10);
      }
      Serial.println("Mostrando número: ");
      Serial.print(i);
    }
  }

  switch (i) {
  case 1:
    one();
    break;
  case 2:
    two();
    break;
  case 3:
    three();
    break;
  case 4:
    four();
    break;
  case 5:
    five();
    break;
  case 6:
    six();
    break;
  case 7:
    seven();
    break;
  case 8:
    eight();
    break;
  case 9:
    nine();
    break;
  default:
    zero();
    break;
  }
}

void reset() {
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
}


void zero() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  reset();
}


void one() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  reset();
}
void two() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  reset();
}
void three() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  reset();
}
void four() {
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  reset();
}
void five() {
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  reset();
}
void six() {
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  reset();
}
void seven() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  reset();
}
void eight() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  reset();
}
void nine() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  reset();
}
