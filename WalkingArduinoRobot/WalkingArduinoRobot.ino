#include <Servo.h>
#define push 6
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int middle = 90;
int endPoint = 90;
int stepDelay = 400; // Velocidad.
int inicio = 0;
int Actual = 0;
int Anterior = 0;

void setup(){
  servo1.attach(2); 
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  pinMode(push, INPUT);
}
 
void loop() {
Actual = digitalRead(push);
 if(Actual && Anterior == 0){
  inicio = 1-inicio;
  delay(100);
} Anterior = Actual;

//servo2 & servo3 == lado izquierdo
//servo1 & servo4 == lado derecho

  servo1.write(middle);
  servo2.write(middle);
  servo3.write(middle);
  servo4.write(middle);


if(inicio == 1) {  
 servo1.write(middle - endPoint);
 servo4.write(middle - endPoint); 
  delay(stepDelay);
 servo2.write(middle + endPoint);
 servo3.write(middle + endPoint);

 servo1.write(middle);
 servo4.write(middle); 
  delay(stepDelay);

 }
}
