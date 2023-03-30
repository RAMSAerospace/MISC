#include <Wire.h>

int led=8;
int dato;
int val;

void setup() {
  Serial.begin(9600);
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
  pinMode(led,OUTPUT);
}

void loop() {
  dato=map(val,0,255,50,2000);
  digitalWrite(led,HIGH);
  delay(dato);
  digitalWrite(led,LOW);
  delay(dato);
  Serial.println(dato);
}

void receiveEvent(int bytes){
  val=Wire.read();
}
