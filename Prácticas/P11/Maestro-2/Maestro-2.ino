#include <Wire.h>

int pot=A0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  pinMode(pot,INPUT);
}

void loop() {
  int val=map(analogRead(pot),0,1023,0,255);
  Serial.println(val);
  Wire.beginTransmission(9);
  Wire.write(val);
  Wire.endTransmission(9);
}
