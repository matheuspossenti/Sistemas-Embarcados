void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

  

int i = 0;

void loop() {
  if (i == 1) {
    digitalWrite(13, HIGH);
    i + 1;
  }

  if (i == 2) {
    digitalWrite(12, HIGH);
    i + 1;
  }

  if (i == 3) {
    digitalWrite(11, HIGH);
    i + 1;
  }

  if (i > 3) {
    i = 0;
  }
}



# Flip Flop

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





