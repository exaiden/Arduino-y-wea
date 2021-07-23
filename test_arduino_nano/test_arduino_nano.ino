int led1 = 2;
int led2 = 4;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT); }

void loop(){
 digitalWrite(led2,HIGH);
 delay(4000);
 digitalWrite(led2,LOW);
 delay (500);
   digitalWrite(led2,HIGH);
   delay(400);
   digitalWrite(led2,LOW);
   delay(400);
   digitalWrite(led2,HIGH);
   delay(400);
   digitalWrite(led2,LOW);
   delay(400);
   digitalWrite(led2,HIGH);
   delay(400);
   digitalWrite(led2,LOW);
   delay(400);
   digitalWrite(led2,HIGH);
   delay(400);
   digitalWrite(led2,LOW);
   delay(400);
   digitalWrite(led2,HIGH);
   delay(400);
   digitalWrite(led2,LOW);
   delay(400);
 digitalWrite(led1,HIGH);  
 delay(4000);
 digitalWrite(led1,LOW);
}
