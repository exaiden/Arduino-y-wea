//Bluetooth
#include <SoftwareSerial.h>
SoftwareSerial tmserial (6, 7); //El pin 10 sera el Rx, y el pin 11 sera el Tx
int Data;
//Motores
int IN1= 2;
int IN2= 3;
int IN3= 4;
int IN4= 5;
void setup(){
    Serial.begin(9600);
    //Bluetooth
    tmserial.begin(9600);
    tmserial.println(); 
    //Motores
    pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
    pinMode(IN3,OUTPUT);
    pinMode(IN4,OUTPUT);
  }

void loop(){
  //Bluetooth
  Serial.println(Data);
  if (tmserial.available())
  {
     Data=tmserial.read();
     
     if(Data=='1'){   
         digitalWrite(IN1,1);
         digitalWrite(IN2,0);
         digitalWrite(IN3,1);
         digitalWrite(IN4,0);
         tmserial.println("LED D13 = ENCENDIDO ! ");
         tmserial.println(); 
       }else{
         digitalWrite(IN1,0);
         digitalWrite(IN2,0);
         digitalWrite(IN3,0);
         digitalWrite(IN4,0);
         tmserial.println("LED D13 = ENCENDIDO ! ");
         tmserial.println();
  }
  if (Data=='0'){
         digitalWrite(IN1,0);
         digitalWrite(IN2,1);
         digitalWrite(IN3,0);
         digitalWrite(IN4,1);
         tmserial.println("LED D13 = APAGADO ! ");
         tmserial.println(); //Espacio
  }
  if (Data=='7'){
          digitalWrite(IN1,0);
          digitalWrite(IN2,0);
          digitalWrite(IN3,0);
          digitalWrite(IN4,0);
          tmserial.println("LED D13 = APAGADO ! ");
          tmserial.println();
  }
  if (Data=='2'){
          digitalWrite(IN1,0);
          digitalWrite(IN2,1);
          digitalWrite(IN3,1);
          digitalWrite(IN4,0);
          tmserial.println("LED D13 = APAGADO ! ");
          tmserial.println();
  }
  if (Data=='5'){
          digitalWrite(IN1,1);//rued Derecha
          digitalWrite(IN2,0);
          digitalWrite(IN3,0);//rued Izquierda
          digitalWrite(IN4,1);
          tmserial.println("LED D13 = APAGADO ! ");
          tmserial.println();
      }
   }
 }
