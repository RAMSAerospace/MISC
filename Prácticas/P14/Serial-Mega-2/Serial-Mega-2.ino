#include <SoftwareSerial.h>

SoftwareSerial VSerial (37,35);

void setup() {
  VSerial.begin(9600);
}

void loop() {
  int c;
  for(c=0;c<11;c++){
    VSerial.println(c);
    delay(50);
  }
}
