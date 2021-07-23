int led[1] = {2,3,4};
int led[2] = {5,6,7};
int led[3] = {8,9,10};
int i;//Variable auxiliar para condicionales
  
void setup() {                
  pinMode(led[1], OUTPUT);//Se inicializa como OUTPUT el pin a usar. Debe ser PWM
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}
 
void loop() {


  for(i=0; i<256; i++){ 
    analogWrite(led[1],i);
    delay(10);
  }

    for(i=0; i<256; i++){ 
    analogWrite(led[2],i);
    delay(10);
  }

    for(i=0; i<256; i++){ 
    analogWrite(led[3],i);
    delay(10);
  }

//------------------------------------------
for(i=255; i>-1; i--){
    analogWrite(led[3],i);
    delay(40);
  }

for(i=255; i>-1; i--){
    analogWrite(led[2],i);
    delay(10);
    }

for(i=255; i>-1; i--){
    analogWrite(led[1],i);
    delay(10);
  }
}
