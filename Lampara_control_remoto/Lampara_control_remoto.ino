#include <IRremote.h>
int ReceptorIR = 2;
IRrecv irrecv(ReceptorIR);
decode_results Codigo;
IRsend irsend;
int transistor = 4;
void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
pinMode(transistor,OUTPUT);
}

void loop() {
if (irrecv.decode(& Codigo)){
  Serial.print("0x");
  Serial.println(Codigo.value, HEX);
  irrecv.resume();
   }
if(Codigo.value == 0xE0E036C9){
 digitalWrite(transistor,HIGH);
  }
if(Codigo.value == 0xE0E028D7){
 digitalWrite(transistor,LOW);
  }
}
