int ldr = A0;
int transistor = 4;
int val = 0;

void setup() {
  Serial.begin(9600);
pinMode(transistor,OUTPUT);
pinMode(ldr,INPUT);
}

void loop() {
val = digitalRead(ldr);
Serial.print(val);
Serial.println("val");
delay(500);
if(val <= 0){
  digitalWrite(transistor,LOW);
 }else{
  digitalWrite(transistor,HIGH);
 }
}
