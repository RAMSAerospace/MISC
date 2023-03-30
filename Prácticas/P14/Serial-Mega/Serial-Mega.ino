void setup() {
  Serial1.begin(9600);
}

void loop() {
  int c;
  for(c=0;c<11;c++){
    Serial1.println(c);
    delay(50);
  }
}
