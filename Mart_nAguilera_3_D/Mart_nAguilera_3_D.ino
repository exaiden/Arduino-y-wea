const int pinPot = 1;
const int pinA = 5;
const int pinB = 6;
long distancia;
long tiempo;

void setup() {
 pinMode(pinA,OUTPUT);
 pinMode(pinB,OUTPUT);

 digitalWrite(pinA, LOW);
 digitalWrite(pinB, LOW);
}

void loop() {
  distancia = analogRead(pinPot);
  if(distancia >= 512) {
 digitalWrite(pinA, HIGH);
 digitalWrite(pinB, LOW);  
}else{
 digitalWrite(pinA, LOW);
 digitalWrite(pinB, HIGH);
}
}
