#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x21,16,2);

byte characterU[]={
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11111,
  B11111,
  B00000
};
byte characterA[]={
  B01110,
  B11011,
  B11011,
  B11011,
  B11111,
  B11011,
  B11011,
  B00000
};
byte characterB[]={
  B11110,
  B11111,
  B11001,
  B11111,
  B11001,
  B11111,
  B11110,
  B00000
};
byte characterC[]={
  B11111,
  B11111,
  B11000,
  B11000,
  B11000,
  B11111,
  B11111,
  B00000
};


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(0,characterU);
  lcd.createChar(1,characterA);
  lcd.createChar(2,characterB);
  lcd.createChar(3,characterC);
  lcd.home();
  lcd.setCursor(5,0);
  lcd.write(0);
  lcd.setCursor(7,0);
  lcd.write(1);
  lcd.setCursor(9,0);
  lcd.write(2);
  lcd.setCursor(11,0);
  lcd.write(3);
}

void loop() {
  
}
