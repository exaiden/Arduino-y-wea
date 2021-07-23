#include <IRremote.h>
int ReceptorIR = 2;
IRrecv irrecv(ReceptorIR);
decode_results Codigo;
IRsend irsend;
int ledRojo = 8;
int ledVerde = 9;
int ledAzul = 10;

void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
pinMode(ledRojo,OUTPUT);
pinMode(ledVerde,OUTPUT);
pinMode(ledAzul,OUTPUT);
}

void loop() {
if (irrecv.decode(& Codigo)){
  Serial.print("0x");
  Serial.println(Codigo.value, HEX);
  irrecv.resume();
   }

if(Codigo.value == 0xC12F827D){  // SECUENCIA 1.
  digitalWrite(ledRojo,HIGH);
   delay(700);
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledVerde,HIGH);
   delay(700);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAzul,HIGH);
   delay(700);
  digitalWrite(ledAzul,LOW);
}

if(Codigo.value == 0xC12F4AB5){ // SECUENCIA 2
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAzul,HIGH);
   delay(700);
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAzul,LOW);
   delay(700);
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAzul,LOW);
   delay(700);
}

if(Codigo.value == 0xC12F1AE5){ // SECUENCIA 3
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAzul,HIGH);
   delay(700);
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAzul,HIGH);
   delay(700);
}

if(Codigo.value == 0xC12FF20D){
  digitalWrite(ledRojo,LOW);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAzul,LOW);
}
if(Codigo.value == 0xC12F728D){
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAzul,HIGH);
 }}
