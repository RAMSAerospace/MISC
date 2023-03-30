#include <Servo.h>

Servo serv;
int pos=0;

void setup() {
  Serial.begin(9600);
  serv.attach(6);
}

void loop() {
  for(pos=0; pos<=180; pos++){
    serv.write(pos);
    delay(15);
    Serial.println(pos);
  }
  for(pos=180; pos>=0; pos--){
    serv.write(pos);
    delay(15);
    Serial.println(pos);
  }
}
