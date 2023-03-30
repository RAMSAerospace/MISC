#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4 ,3, 2);
int led=6;

void setup() {
  lcd.begin(16, 2);
  pinMode(led,OUTPUT);
}

void loop() {
  lcd.setCursor(0,0);
  digitalWrite(led,HIGH);
  lcd.print("LED encendido");
  delay(500);
  lcd.setCursor(0,1);
  digitalWrite(led,LOW);
  lcd.print("LED apagado");
  delay(500);
  lcd.clear();
}
