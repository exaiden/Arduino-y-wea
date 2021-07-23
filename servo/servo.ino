#include "Servo.h"

Servo servo1;

void setup() {
  // put your setup code here, to run once:
 servo1.attach(5);
}

void loop() {
int angulo = analogRead(A0);
angulo = map(angulo, 0, 1023, 0, 180);
servo1.write(angulo);
delay(15);

}
