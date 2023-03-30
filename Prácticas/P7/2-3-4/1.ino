int relay1=3;
int relay2=2;

void setup() {
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
}

void loop() {
  Serial.println("Giro de motor horario");
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,LOW);
  delay(5000);
  Serial.println("Giro de motor anti-horario");
  digitalWrite(relay2,HIGH);
  digitalWrite(relay1,LOW);
  delay(5000);
}
