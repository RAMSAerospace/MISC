#include <Servo.h>

Servo serv;
int pos=0;
int pot=A0;

void setup() {
  pinMode(pot,INPUT);
  Serial.begin(9600);
  serv.attach(6);
}

void loop() {
  int valor=map(analogRead(pot),0,1023,0,180);
  Serial.println(valor);
  serv.write(valor);
}
