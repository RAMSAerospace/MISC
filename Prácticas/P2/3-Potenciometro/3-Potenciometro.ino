int led=2;
int pot=A0;
int lecturaPot=0;
int delayPot=0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  lecturaPot=analogRead(pot);
  Serial.print("Potenciometro: ");
  Serial.println(lecturaPot);
  delayPot=lecturaPot*5/1024;
  Serial.print("Delay: ");
  Serial.println(delayPot);
  digitalWrite(led,HIGH);
  delay(delayPot*1000);
  digitalWrite(led,LOW);
  delay(delayPot*1000);
}
