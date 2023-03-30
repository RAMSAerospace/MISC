int pot=A0;
int valor=0;
int led=11;

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  valor=map(analogRead(pot),0,1023,0,255);
  Serial.println(valor);
  digitalWrite(led, HIGH);
  delay(valor);
  digitalWrite(led, LOW);
  delay(valor);
  //analogWrite(led, valor);
}
