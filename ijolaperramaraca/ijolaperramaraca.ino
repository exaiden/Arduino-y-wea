int led1 =8;
int led2 =9;
int led3 =12;
int led4 =13;
int conta =0;
int input =4;
int estado =0;

void setup() {
 Serial.begin(9600);
pinMode(4,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
 int p1 =digitalRead(input);
  if(p1!=estado){
   if (p1==HIGH)
   {conta++;
    Serial.println(conta);}
  }
estado=p1;
 if(conta==1){            
  digitalWrite(led1,1);   
  }  delay(500);                     
//---------------------- 
 if(conta==2){
  digitalWrite(led1,1);
}delay(500);
 if(conta==3){
  digitalWrite(led2,1);
}delay(500);
//---------------------- 
 if(conta==4){
  digitalWrite(led2,1);
}delay(500);
 if(conta==5){
  digitalWrite(led2,1);
 }delay(500);
  if(conta==6){
  digitalWrite(led3,1);
 }delay(500);
//---------------------- 
 if(conta==7){
  digitalWrite(led3,1);
 }delay(500);
  if(conta==8){
  digitalWrite(led3,1);
 }delay(500);
  if(conta==9){
  digitalWrite(led3,1);
 }delay(500);
  if(conta==10){
  digitalWrite(led4,1);
 }delay(500);
//---------------------- 
 if(conta==11){
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(500);
} conta = 0;
}

