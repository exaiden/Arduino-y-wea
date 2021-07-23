 const int    btn       =    A0; 
 int          estado    =    0;
 int          conta     =    0;
 int          led1      =    13;
 int          led2      =    12;
 int          led3      =    11;

void setup() {
  pinMode(btn,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
 int p1 = digitalRead(btn);
  if(p1!=estado){
   if(p1==HIGH){
     conta++;
     Serial.println(conta);}}
 estado=p1;
  if(conta == 1){
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);}

  if (conta == 2){
   digitalWrite(led1,LOW);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,LOW);}

  if (conta == 3){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,HIGH);}

  if (conta == 4){
   digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);}

  if (conta == 5){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);}
  
conta=0;

}
