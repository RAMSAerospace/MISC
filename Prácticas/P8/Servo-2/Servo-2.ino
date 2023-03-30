#include <Servo.h>

Servo serv;

void setup() {
  Serial.begin(9600);
  serv.attach(6);
}

void loop() {
  serv.write(93);
  delay(2000);
  serv.write(180);
  delay(2000);
  serv.write(93);
  delay(2000);
  serv.write(0);
  delay(2000);
}
