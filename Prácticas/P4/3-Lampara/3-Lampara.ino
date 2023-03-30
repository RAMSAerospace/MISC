int relay=13;

void setup() {
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
}

void loop() {
  digitalWrite(relay,HIGH);
  Serial.println("ON");
  delay(500);
  digitalWrite(relay,LOW);
  Serial.println("OFF");
  delay(500);
}
