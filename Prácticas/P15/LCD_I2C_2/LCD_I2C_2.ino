#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x21,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(8,0);
  lcd.print("RAMS PROGRAMACION");
  lcd.setCursor(1,1);
  lcd.print("ING AEROESPACIAL");
}

void loop() {
  lcd.scrollDisplayRight();
  delay(100);
}
