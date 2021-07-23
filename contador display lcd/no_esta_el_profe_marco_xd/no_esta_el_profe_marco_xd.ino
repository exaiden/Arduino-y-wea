#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);// Set the LCD address to 0x27 for a 16 chars and 2 line display
 const int btn1 = A0; 
 const int btn2 = A1;
 int BTNstate = 0;  
 int led = 7;
 
//lcd.clear();

void setup(){
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
  pinMode(led,OUTPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
}

void loop(){

BTNstate = digitalRead(btn1);
 if (BTNstate == HIGH){
lcd.setCursor(0,0);
lcd.print("0");
delay(1000);

lcd.setCursor(0,0);
lcd.print("1");
delay(1000);

lcd.setCursor(0,0);
lcd.print("2");
delay (1000);

lcd.setCursor(0,0);
lcd.print("3");
delay(1000);

lcd.setCursor(0,0);
lcd.print("4");
delay(1000);

lcd.setCursor(0,0);
lcd.print("5");   digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);

lcd.setCursor(0,0);
lcd.print("6");
delay (1000);

lcd.setCursor(0,0);
lcd.print("7");
delay(1000);

lcd.setCursor(0,0);
lcd.print("8");
delay(1000);

lcd.setCursor(0,0);
lcd.print("9");
delay(1000);
lcd.clear();
 }

//_______________________________________________

BTNstate = digitalRead(btn2);
 if (BTNstate == HIGH){
lcd.setCursor(0,0);
lcd.print("9");
delay(1000);

lcd.setCursor(0,0);
lcd.print("8");
delay(1000);

lcd.setCursor(0,0);
lcd.print("7");
delay (1000);

lcd.setCursor(0,0);
lcd.print("6");
delay(1000);

lcd.setCursor(0,0);
lcd.print("5");   digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);

lcd.setCursor(0,0);
lcd.print("4");
delay(1000);

lcd.setCursor(0,0);
lcd.print("3");
delay (1000);

lcd.setCursor(0,0);
lcd.print("2");
delay(1000);

lcd.setCursor(0,0);
lcd.print("1");
delay(1000);

lcd.setCursor(0,0);
lcd.print("0");
delay(1000);
lcd.clear();
 }
}
