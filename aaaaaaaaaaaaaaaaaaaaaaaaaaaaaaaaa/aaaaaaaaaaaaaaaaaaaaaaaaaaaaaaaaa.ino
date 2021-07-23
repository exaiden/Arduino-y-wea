int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;
//------------------------------
int input1 = 12;  //pulsador 1
int input2 = 13; //pulsador 2
int conta = 0;  //contador
int estado = 0;//valor de inicio
void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
pinMode(input1,INPUT);
pinMode(input2,INPUT);
}
void loop() {
int pl = digitalRead(input1);
  if(pl != estado){
   if (pl == HIGH)
   {conta ++ ;
    Serial.println(conta);}
  }
  estado = pl;
if(conta==2){
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
       delay (1000);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,HIGH);
 digitalWrite(led6,HIGH);
 digitalWrite(led7,HIGH);
       delay (1000);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);
 digitalWrite(led7,LOW);
 digitalWrite(led8,HIGH);
 digitalWrite(led9,HIGH);
 digitalWrite(led10,HIGH);
       delay (1000);
 digitalWrite(led8,LOW);
 digitalWrite(led9,LOW);           
 digitalWrite(led10,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);
 digitalWrite(led7,LOW);
       delay (1000);
}
if(conta>=3){
  
  digitalWrite(led8,LOW);
 digitalWrite(led9,LOW);           
 digitalWrite(led10,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);
 digitalWrite(led7,LOW);
}
}
