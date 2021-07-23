long distancia;
long tiempo;

int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;

void setup() {
Serial.begin(9600);
 pinMode(2,OUTPUT);
 pinMode(4,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT); 
 pinMode(led5,OUTPUT);
}

void loop() {
 digitalWrite(2, LOW);
 delayMicroseconds(5);
 digitalWrite(2, HIGH);
 delayMicroseconds(10);

tiempo=pulseIn(4, HIGH);

distancia= int(0.017*tiempo);

Serial.println("Distancia");
Serial.println(distancia);
Serial.println("cm");
delay(100);



if (distancia < 5){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW );
}

//---------------------------------------------------- led1
if( (distancia >= 5) && (distancia <= 10) ) {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  }
//---------------------------------------------------- led2
if((distancia > 10) && (distancia <= 15)) {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  }
//---------------------------------------------------- led3
if( (distancia > 15) && (distancia <= 20) ) {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  }
//---------------------------------------------------- led4
if ( (distancia > 20) && (distancia <= 30) ) {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  }
//---------------------------------------------------- led5
if( (distancia > 30) && (distancia <= 50) ){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  }
if(distancia > 50){
  digitalWrite(led1,HIGH);     
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  }
}
