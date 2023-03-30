#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4 ,3, 2);
int led=6;
int pot=A0;
int valorPot=0;

void setup() {
  lcd.begin(16, 2);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  valorPot=analogRead(pot);
  lcd.println(valorPot);
  Serial.println(valorPot);
  
  lcd.setCursor(0,1);
  if(valorPot>600){
    digitalWrite(led,HIGH);
    lcd.println("ON ");
  }
  else{
    digitalWrite(led,LOW);
    lcd.println("OFF");
  }
}
