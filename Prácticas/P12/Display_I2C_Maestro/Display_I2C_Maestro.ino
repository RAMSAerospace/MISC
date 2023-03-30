#include <Wire.h>

int x=0;

void setup() {
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(9);
  Wire.write(x);
  Wire.endTransmission();
  x++;
  delay(50);
  if (x>255){
    x=0;
  }
}
