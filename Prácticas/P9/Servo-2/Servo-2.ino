#include <Servo.h>

Servo serv1;
Servo serv2;
char cmnd;
int pos=0;

void setup() {
  serv1.attach(11);
  serv2.attach(9);
  Serial.begin(9600);
  serv1.write(0);
  serv2.write(0);
}

void loop() {
  Dato_Serial();

  switch(cmnd){
    case 'a':
    serv1.write(pos);
    cmnd=' ';
    break;
    case 'b':
    serv2.write(pos);
    cmnd=' ';
    break;
  }
}

void Dato_Serial(){
  if(Serial.available()>0){
   cmnd=Serial.read();
   pos=Serial.parseInt(); 
  }
  Serial.flush();
}
