#include <IRremote.h>
int ReceptorIR = 2;
IRrecv irrecv(ReceptorIR);
decode_results Codigo;

void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
}

void loop() {
if (irrecv.decode(& Codigo)){
  Serial.print("0x");
  Serial.println(Codigo.value, HEX);
  delay(50);
  irrecv.resume();
   }
 }
