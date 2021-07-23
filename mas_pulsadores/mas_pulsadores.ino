const int p1 = 2;
const int p2 = 4;
const int p3 = 7;
int estado1 = 0;
int estado2 = 0;
int led1 = 8;
int led2 = 12;
int led3 = 13;

void setup() {
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(p3,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}
void loop() {
 estado1 = digitalRead(p1);
  if(estado1 == HIGH){
    digitalWrite(led1,HIGH);
    }
 estado1 = digitalRead(p2);
  if((estado1 == HIGH) && (led1,HIGH)){
    digitalWrite(led2,HIGH);
    }
 estado1 = digitalRead(p3);
  if(estado1 == HIGH && (led2,HIGH)){
    digitalWrite(led3,HIGH);
  }
 
 estado2 = digitalRead(p1);
  if(estado2 == HIGH){
    digitalWrite(led3,LOW);
   }
 estado2 = digitalRead(p2);
  if(estado2 == HIGH){
    digitalWrite(led2,LOW);
  }
 estado2 = digitalRead(p3);
  if(estado2 == HIGH){
    digitalWrite(led1,LOW);
  }
}
