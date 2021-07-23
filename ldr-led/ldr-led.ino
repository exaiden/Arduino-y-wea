#define LED 9
#define LDR 0
int luz = 0;
int valor_sensor = 0;

void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(LDR,INPUT);
}

void loop() {
valor_sensor = analogRead(LDR);
luz = (5.0*valor_sensor*100.0)/1024.0;
Serial.print(luz);
Serial.println(" luz");
delay(300);

if(luz <= 390){
  digitalWrite(LED,LOW);
  }
if(luz > 390){
  digitalWrite(LED,HIGH);
  }
}
