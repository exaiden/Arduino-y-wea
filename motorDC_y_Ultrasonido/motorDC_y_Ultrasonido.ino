int trigger = 2;
int echo = 4;
int pinMotor1 = 5;
int pinMotor2 = 6;

long distancia;
long tiempo;


void setup() {
Serial.begin(9600);
 pinMode(echo,OUTPUT);
 pinMode(trigger,OUTPUT);
 pinMode(pinMotor1,OUTPUT);
 pinMode(pinMotor2,OUTPUT);
}

void loop() {
 digitalWrite(trigger, LOW);
 delayMicroseconds(5);
 digitalWrite(trigger, HIGH);
 delayMicroseconds(10);
tiempo=pulseIn(echo, HIGH);
distancia= int(0.017*tiempo);

Serial.println("Distancia");
Serial.println(distancia);
Serial.println("cm");
delay(100);


if(distancia < 5){
  digitalWrite(pinMotor1,LOW);
  digitalWrite(pinMotor2,HIGH);
   }
if(distancia >= 5){
  digitalWrite(pinMotor1,HIGH);
  digitalWrite(pinMotor2,LOW);
   }
}
