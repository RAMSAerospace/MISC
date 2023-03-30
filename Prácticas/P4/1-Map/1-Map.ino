int pot=A0;
int valor=0;

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
}

void loop() {
  valor=map(analogRead(pot),0,1023,0,255);
  Serial.println(valor);
}
