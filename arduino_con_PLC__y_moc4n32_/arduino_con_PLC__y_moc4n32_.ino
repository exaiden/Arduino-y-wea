int  var   =  A0;  //entrada señal analogica
int  val   =  0;  //valores variables de la señal analogica
int  out1  =  13;  //salida 1 de señal digital hacia el moc
int  out2  =  12;  //salida 2 de señal digital hacia el moc
int  out3  =  11;  //salida 3 de señal digital hacia el moc

void setup() {
Serial.begin(9600);
 pinMode   (var,INPUT);
 pinMode (out1,OUTPUT);
 }
void loop() {
 val = analogRead(var);
 Serial.println(val);

  if(val=0 && val<=100){
    digitalWrite(out1,LOW);
    digitalWrite(out2,LOW);
    digitalWrite(out3,LOW);
  }
  if(val<=342){
    digitalWrite(out1,HIGH);
    digitalWrite(out2,LOW);
    digitalWrite(out3,LOW);
  }
  if(val>342 && val<=684){
    digitalWrite(out1,LOW);
    digitalWrite(out2,HIGH);
    digitalWrite(out3,LOW);
  }
  if(val>684 && val<=1023){
    digitalWrite(out1,LOW);
    digitalWrite(out2,LOW);
    digitalWrite(out3,HIGH);
  }
}
