#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x20,16,4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.home();
  
}

void loop() {
  for(int x=0;x<4;x++){
    lcd.setCursor(0,x);
    lcd.print("Daniel");
    delay(100);
  }

}
