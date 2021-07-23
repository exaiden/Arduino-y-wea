#include "Servo.h"
Servo servo1;
#define LDR 0
int luz = 0;
int valor_sensor = 0;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
 
 servo1.attach(5);

Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(LDR,INPUT);
}

void loop() {
int angulo = analogRead(A0);
angulo = map(angulo, 0, 400, 0, 180);
servo1.write(angulo);
delay(15);

if(luz <= 390){
  digitalWrite(LED,LOW);
  }
if(luz > 390){
  digitalWrite(LED,HIGH);
}
