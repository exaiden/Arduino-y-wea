int estado=0;
int estadoB=0;
int estadoANT=0;

int estado1=0;
int estado2=0;
int estado3=0;

int led =5;
void setup() {
  
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,INPUT);

pinMode(led,OUTPUT);
}

void loop() {
  
estado = digitalRead(8);
if((estado==HIGH) && (estadoANT==LOW)){
  estadoB =HIGH - estadoB;
  delay(10);

estado = digitalRead(2);
if((estado1==HIGH) && (estado3==LOW))
  estado2 =HIGH - estado2;
  delay(10);
}
estadoANT = estado;
if(estadoB==1){
  digitalWrite(4,HIGH);

estado3 = estado1;
if(estado2==1)
  digitalWrite(6,HIGH);
}
else{
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}
}
