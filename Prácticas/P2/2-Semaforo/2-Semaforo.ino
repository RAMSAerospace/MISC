int verde=2;
int amarillo=3;
int rojo=4;

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop() {
  digitalWrite(verde,HIGH);
  delay(5000);
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(verde,LOW);
  delay(500);
  digitalWrite(verde,HIGH);
  delay(500);
  digitalWrite(verde,LOW);
  digitalWrite(amarillo,HIGH);
  delay(3000);
  digitalWrite(amarillo,LOW);
  digitalWrite(rojo,HIGH);
  delay(5000);
  digitalWrite(rojo,LOW);
}
