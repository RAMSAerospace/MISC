#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x21,16,2);

byte characterU1[]={
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B00000
};
byte characterU2[]={
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11111,
  B11111,
  B00000
};
byte characterA1[]={
  B01110,
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11111,
  B00000
};
byte characterA2[]={
  B11111,
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B11011,
  B00000
};
byte characterB1[]={
  B11110,
  B11111,
  B11001,
  B11001,
  B11001,
  B11001,
  B11110,
  B00000
};
byte characterB2[]={
  B11111,
  B11001,
  B11001,
  B11001,
  B11001,
  B11111,
  B11110,
  B00000
};
byte characterC1[]={
  B11111,
  B11111,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B00000
};
byte characterC2[]={
  B11000,
  B11000,
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
  lcd.createChar(0,characterU1);
  lcd.createChar(1,characterU2);
  lcd.createChar(2,characterA1);
  lcd.createChar(3,characterA2);
  lcd.createChar(4,characterB1);
  lcd.createChar(5,characterB2);
  lcd.createChar(6,characterC1);
  lcd.createChar(7,characterC2);
  lcd.home();
  lcd.setCursor(5,0);
  lcd.write(0);
  lcd.setCursor(5,1);
  lcd.write(1);
  lcd.setCursor(7,0);
  lcd.write(2);
  lcd.setCursor(7,1);
  lcd.write(3);
  lcd.setCursor(9,0);
  lcd.write(4);
  lcd.setCursor(9,1);
  lcd.write(5);
  lcd.setCursor(11,0);
  lcd.write(6);
  lcd.setCursor(11,1);
  lcd.write(7);
}

void loop() {
  lcd.scrollDisplayRight();
  delay(100);
}
