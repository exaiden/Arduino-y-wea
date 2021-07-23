int led=3;//LEDS
int pulsador = 2;             
int estado   = 0;              
int i;
int n;
int boton = 7;
const int LED=2;

void setup() {
  for (n=3;n<12;n++) {
    pinMode (n, OUTPUT);
    pinMode (pulsador,INPUT);
    pinMode (LED,OUTPUT);
    pinMode (boton,INPUT);
  }
 }

void secuencia() {
  for (n=3;n<12;n++) {       
    digitalWrite (n, HIGH); 
    delay (100); 
   }
}

void loop() {

for  (i=1;i<255; i++){
analogWrite(LED,i);
delay(200);
}

{ secuencia();}
     for(n=3; i<256;i++){
    delay(200);
    analogWrite(led,i);
    delay(2000);
   }
}
  
  
  
 
    


  

