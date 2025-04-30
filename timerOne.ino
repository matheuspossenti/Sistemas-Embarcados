#include <TimerOne.h>

int geral, agora, anterior, dif;

void setup(void) {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  Timer1.initialize(1000000);  //microsegundos
  Timer1.attachInterrupt(timer);
  Serial.begin(9600);
}
void loop() {
  Serial.print(geral);
  Serial.print("  ");
  Serial.println(dif);

  if (digitalRead(2) == HIGH) {
    dif = agora - anterior;
    agora = anterior;
    
    while (digitalRead(2) == HIGH) delay(10);
  }
}

void timer() {
  digitalWrite(13, !digitalRead(13));
  agora++;
  geral++;
}