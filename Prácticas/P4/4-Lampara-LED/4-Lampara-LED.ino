int relay=13;
int pot=A0;
int led=11;
int valor=0;

void setup() {
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  valor=map(analogRead(pot),0,1023,0,255);
  if(valor<157){
    digitalWrite(relay,HIGH);
    digitalWrite(led,HIGH);
    Serial.print(valor);
    Serial.println(" ON");
  }
  else{
    digitalWrite(relay,LOW);
    digitalWrite(led,LOW);
    Serial.print(valor);
    Serial.println(" OFF");
  }
  
}
