#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
}


void loop(){
  lcd.setCursor(3,0);
  lcd.print("wena wena");
  lcd.setCursor(2,1);
  lcd.print("xuxetumareee");
  delay(3000);
  lcd.clear();
  delay(500);

  lcd.setCursor(0,0);
  lcd.print("como estai compaaa?");
  lcd.setCursor(0,1);
  lcd.print("cuantas lunas wn?");
  delay(3000);
  lcd.clear();
  delay(500);

  lcd.setCursor(2,0);
  lcd.print("wn cachai ke");
  lcd.setCursor(2,1);
  lcd.print("tengo hambre");
  delay(3000);
  lcd.clear();
  delay(500);
  
  lcd.setCursor(2,0);
  lcd.print("la mea vola");
  lcd.setCursor(3,1);
  lcd.print("bueno,chao");
  delay(3000);
  lcd.clear();
  delay(500);
  
  lcd.setCursor(1,0);
  lcd.print("me voy a comer");
  lcd.setCursor(0,1);
  lcd.print("el meo tocomple");
  delay(3000);
  lcd.clear();
  delay(500);

  lcd.setCursor(2,0);
  lcd.print("vira de aca");
  lcd.setCursor(1,1);
  lcd.print("nomah gil klo");
  delay(3000);
  lcd.clear();
  delay(500);

  lcd.setCursor(2,0);
  lcd.print("no hay ni una");
  lcd.setCursor(1,1);
  lcd.print("wea pa voh aqui");
  delay(3000);
  lcd.clear();
  delay(500);


}
