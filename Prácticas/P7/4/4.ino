int relay1=3;
int relay2=2;
int c=0;

void setup() {
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
}

void loop() {
  if(c<=5){
  Serial.print("Giro de motor horario - ");
  Serial.println(c);
  c++;
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,LOW);
  delay(1000);
  }
  else if (c<=11){
  Serial.print("Giro de motor anti-horario - ");
  Serial.println(c-6);
  c++;
  digitalWrite(relay2,HIGH);
  digitalWrite(relay1,LOW);
  delay(1000);
  }
  else{
    c=0;
  }
}
