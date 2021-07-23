#define xpin A0                  // x-axis of the accelerometer
#define ypin A1                  // y-axis
#define zpin A2                  // z-axis (only on 3-axis models)
#define Led1 2
#define Led2 3
#define Led3 4
int x,y,z;

void setup(){
Serial.begin(9600);
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(zpin, INPUT);

  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
}
void loop(){
  x=analogRead(xpin);
  y=analogRead(ypin);
  z=analogRead(zpin);
 Serial.print(" El valor del eje X es: ");
 Serial.println(x);
 Serial.print(" El valor del eje Y es: ");
 Serial.println(y);
 Serial.print(" El valor del eje Z es: ");
 Serial.println(z);
 delay(5000);

if((x<370)&(x>360)){
  digitalWrite(Led1,HIGH);
  delay(500);
  digitalWrite(Led2,HIGH);  
  delay(500);
  digitalWrite(Led3,HIGH);
  delay(500);
}else{  
  digitalWrite(Led1,LOW);
  digitalWrite(Led2,LOW);  
  digitalWrite(Led3,LOW);
}}
/* EN CASO DE EMERGENCIA, PONER ESTO EN EL LOOP :

  Serial.print( analogRead(xpin));
  Serial.print("\t");
  //add a small delay between pin readings.  I read that you should
  //do this but haven't tested the importance
    delay(1); 
  Serial.print( analogRead(ypin));
  Serial.print("\t");
  //add a small delay between pin readings.  I read that you should
  //do this but haven't tested the importance
    delay(1); 
  Serial.print( analogRead(zpin));
  Serial.print("\n");  // delay before next reading:
  delay(sampleDelay);*/
