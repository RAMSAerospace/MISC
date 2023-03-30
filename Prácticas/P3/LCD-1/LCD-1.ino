#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4 ,3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hola RAMS");
  lcd.setCursor(0,1);
  lcd.print("Programacion");
  delay(1000);
  lcd.clear();
  delay(1000);
}
