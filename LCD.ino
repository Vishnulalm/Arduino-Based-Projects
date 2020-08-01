#include<Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.clear();

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Athul");
  lcd.setCursor(9,0);
  lcd.print("Emil");
  lcd.setCursor(0,1);
  lcd.print("Vishnu");
  lcd.setCursor(8,1);
  lcd.print("Akshay");

}
