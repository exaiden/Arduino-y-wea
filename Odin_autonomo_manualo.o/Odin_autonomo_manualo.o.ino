//Bluetooth
#include <SoftwareSerial.h>
SoftwareSerial tmserial (6, 7); //El pin 10 sera el Rx, y el pin 11 sera el Tx
int Data;
//Motores
int IN1= 2;
int IN2= 3;
int IN3= 4;
int IN4= 5;
//Ultrasonido
#define trigA 13
#define echoA 12
#define trigD 11
#define echoD 10
#define trigI 9
#define echoI 8
#define triga A0
#define echoa A1

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
    //Ultrasonido
    pinMode(trigA,OUTPUT);
    pinMode(echoA,INPUT);
    pinMode(trigD,OUTPUT);
    pinMode(echoD,INPUT);
    pinMode(trigI,OUTPUT);
    pinMode(echoI,INPUT);
    pinMode(triga,OUTPUT);
    pinMode(echoa,INPUT);
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


   //Autonomo
  if(Data=='6'){
  
  //Ultrasonido
  long duracion, distancia,duracion1, distancia1,duracion2, distancia2,duracion3, distancia3;
int limite1= 20;
int limite2= 10;

//ultra adelante
digitalWrite(trigA,LOW); 
delayMicroseconds(2);
digitalWrite(trigA,HIGH);
delayMicroseconds(10);
digitalWrite(trigA,LOW);
duracion = pulseIn(echoA,HIGH);
distancia = duracion/ 2 / 29.1 ;
delay(10);
Serial.println(String(distancia) + "cm.");

//ultra derecha
digitalWrite(trigD,LOW);
delayMicroseconds(2);
digitalWrite(trigD,HIGH);
delayMicroseconds(10);
digitalWrite(trigD,LOW);
duracion1 = pulseIn(echoD,HIGH);
distancia1 = duracion1/ 2 / 29.1 ;
delay(10);
Serial.println(String(distancia1) + "cm1.");

//ultra izquierda
digitalWrite(trigI,LOW);
delayMicroseconds(2);
digitalWrite(trigI,HIGH);
delayMicroseconds(10);
digitalWrite(trigI,LOW);
duracion2 = pulseIn(echoI,HIGH);
distancia2 = duracion2/ 2 / 29.1 ;
delay(10);
Serial.println(String(distancia2) + "cm2.");

//ulra atras
digitalWrite(triga,LOW);
delayMicroseconds(2);
digitalWrite(triga,HIGH);
delayMicroseconds(10);
digitalWrite(triga,LOW);
duracion3 = pulseIn(echoa,HIGH);
distancia3 = duracion3/ 2 / 29.1 ;
delay(10);
Serial.println(String(distancia3) + "cm3.");

  //adelante
if(distancia < limite1){
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);}
else{
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}
//derecha
if(distancia1<limite2){
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}
//izquierda
if(distancia2<limite2){
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}
//datra
if(distancia3<limite1){
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}
  }
}
