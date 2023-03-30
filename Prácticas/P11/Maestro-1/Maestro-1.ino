#include <Wire.h>

int x=0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  Serial.println(x);
  Wire.beginTransmission(9);
  Wire.write(x);
  Wire.endTransmission(9);
  x++;
}
