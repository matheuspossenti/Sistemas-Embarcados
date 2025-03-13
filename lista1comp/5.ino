float pot;
float volt;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  pot = analogRead(A0);
  
  volt = pot * 5 / 1022;


  Serial.print(pot);
  Serial.print(" ");
  Serial.println(volt, 5);

  if(volt <= 2.5) {
    digitalWrite(13, LOW);
  }

  if(volt >=2.6) {
    digitalWrite(13, HIGH);
  }
}
