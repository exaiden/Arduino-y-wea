int Sensor = 2;
int la_wea = 0;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup()
{
 pinMode(Sensor,INPUT); 
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
}


void loop(){
la_wea = digitalRead(Sensor);
if(la_wea == LOW){
  lcd.setCursor(1,0);
  lcd.print("U NO TOUCHING,");
  lcd.setCursor(3,1);
  lcd.print("PLS TOUCH");
  delay(3000);
  lcd.clear();
  delay(500);
 }
if(la_wea == HIGH){
  lcd.setCursor(5,0);
  lcd.print("(OwO)");
  lcd.setCursor(0,1);
  lcd.print("U R TOUCHING IT!");
  delay(3000);
  lcd.clear();
  delay(500);
 }
}
