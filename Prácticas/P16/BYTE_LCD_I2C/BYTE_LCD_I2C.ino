#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x21,16,2);

byte character[]={
  B01010,
  B01010,
  B01010,
  B00000,
  B10001,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(0,character);
  lcd.home();
  lcd.setCursor(8,0);
  lcd.write(0);
}

void loop() {
  
}
