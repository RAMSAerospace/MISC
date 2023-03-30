#include <Wire.h>

int relay1=2;
int relay2=6;
int dato;
int val;

void setup() {
  Serial.begin(9600);
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
}

void loop() {
  dato=map(val,1,255,50,2000);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,LOW);
  delay(dato);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay1,LOW);
  delay(dato);
  Serial.println(dato);
}

void receiveEvent(int bytes){
  val=Wire.read();
}
