#include <Servo.h>

Servo serv;

void setup() {
  Serial.begin(9600);
  serv.attach(6);
}

void loop() {
  serv.write(180);
}
