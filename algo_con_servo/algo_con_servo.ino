#include "Servo.h"
  Servo servo1;
    long distancia;
    long tiempo;
void setup() {
Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  servo1.attach(5);
 }
void loop() {
 digitalWrite(2, LOW);
 delayMicroseconds(5);
 digitalWrite(2, HIGH);
 delayMicroseconds(10);
tiempo=pulseIn(4, HIGH);
distancia= int(0.017*tiempo);
Serial.println("Distancia");
Serial.println(distancia);
Serial.println("cm");
delay(100);
int angulo = digitalRead(4);
if(distancia>=15){
  servo1.write(90); 
  }
if(distancia < 15){
  servo1.write(0);
  delay(1300);
  servo1.write(180);
  delay(1300);
  servo1.write(90);
  }
}
