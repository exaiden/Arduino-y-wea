void setup() {
pinMode (4,OUTPUT);
pinMode (5,OUTPUT);
pinMode (6,OUTPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
}

void loop() {
digitalWrite (4,HIGH);
delay (500);
digitalWrite (5,HIGH);
delay (500);
digitalWrite (6,HIGH);
delay (500);
digitalWrite (8,HIGH);
delay (500);
digitalWrite (9, HIGH);
delay (500);
digitalWrite (10,HIGH);
delay (500);


digitalWrite (10,LOW);
delay (500);
digitalWrite (9,LOW);
delay (500);
digitalWrite (8,LOW);
delay (500);
digitalWrite (6,LOW);
delay (500);
digitalWrite (5, LOW);
delay (500);
digitalWrite (4,LOW);
delay (500);


digitalWrite (4,HIGH);
digitalWrite (5,HIGH);
delay (500);
digitalWrite (6,HIGH);
digitalWrite (8,HIGH);
delay(500);
digitalWrite (9,HIGH);
digitalWrite (10,HIGH);
delay (500);

digitalWrite (10,LOW);
digitalWrite (9,LOW);
delay (500);
digitalWrite (8,LOW);
digitalWrite (6,LOW);
delay(500);
digitalWrite (5,LOW);
digitalWrite (4,LOW);
delay (500);
}
