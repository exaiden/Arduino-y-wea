/*  INSTRUCCIONES
       ~SON 4 PULSADORES.
- si PRESIONO SOLO UNO de esos PULSADORES (no importa cual) se debe ECENDER el LED,
   pero si SUELTO el PULSADOR, el LED se debe APAGAR.
- si PRESIONO 2 PULSADORES a la vez, el LED NO ENCIENDE. (obiamente, si SUELTO UNO de esos PULSADORES,
   el LED se va a ENCENDER.)
- si PRESIONO 3 PULSADORES a la vez, el LED SI ENCIENDE.
- si PRESIONO 4 PULSADORES a la vez, el LED NO ENCIENDE.
*/

const int    pulsador1      =    2;
const int    pulsador2      =    4;
const int    pulsador3      =    6;
const int    pulsador4      =    8;

int          estado1        =    0;
int          estado2        =    0;
int          estado3        =    0;
int          estado4        =    0;
int          led            =    13;

void setup() {
 pinMode(pulsador1,INPUT);
 pinMode(pulsador2,INPUT);
 pinMode(pulsador3,INPUT);
 pinMode(pulsador4,INPUT);
 pinMode(led,OUTPUT);
}

void loop() {
 estado1 = digitalRead(pulsador1);
 estado2 = digitalRead(pulsador2);
 estado3 = digitalRead(pulsador3);
 estado4 = digitalRead(pulsador4);

  if((estado1 == LOW) && (estado2 == LOW) && (estado3 == LOW) && (estado4 == LOW));{  // 0
  digitalWrite(led,LOW);}
//-----------------------------------------------------------------------------------( 1=HIGH)(0=LOW)
  if((estado1 == HIGH) && (estado2 == LOW) && (estado3 == LOW) && (estado4 == LOW));{  // 1= 1
  digitalWrite(led,HIGH);}

  if((estado1 == LOW) && (estado2 == HIGH) && (estado3 == LOW) && (estado4 == LOW));{  // 2= 1
  digitalWrite(led,HIGH);}

  if((estado1 == LOW) && (estado2 == LOW) && (estado3 == HIGH) && (estado4 == LOW));{  // 3= 1
  digitalWrite(led,HIGH);}

  if((estado1 == LOW) && (estado2 == LOW) && (estado3 == LOW) && (estado4 == HIGH));{  // 4= 1
  digitalWrite(led,HIGH);}
//------------------------------------------------------------------------------------
  if((estado1 == HIGH) && (estado2 == HIGH) && (estado3 == LOW) && (estado4 == LOW));{  // 1+2= 0
  digitalWrite(led,LOW);}

  if((estado1 == HIGH) && (estado2 == LOW) && (estado3 == HIGH) && (estado4 == LOW));{  // 1+3= 0
  digitalWrite(led,LOW);}

  if((estado1 == HIGH) && (estado2 == LOW) && (estado3 == LOW) && (estado4 == HIGH));{  //1+4= 0
  digitalWrite(led,LOW);}

  if((estado1 == LOW) && (estado2 == HIGH) && (estado3 == HIGH) && (estado4 == LOW));{  //2+3= 0
  digitalWrite(led,LOW);}

  if((estado1 == LOW) && (estado2 == HIGH) && (estado3 == LOW) && (estado4 == HIGH));{  //2+4= 0
  digitalWrite(led,LOW);}
  
  if((estado1 == LOW) && (estado2 == LOW) && (estado3 == HIGH) && (estado4 == HIGH));{  //3+4= 0
  digitalWrite(led,LOW);}
//------------------------------------------------------------------------------------
  if((estado1 == HIGH) && (estado2 == HIGH) && (estado3 == HIGH) && (estado4 == LOW));{  //1+2+3= 1
  digitalWrite(led,HIGH);}

  if((estado1 == HIGH) && (estado2 == HIGH) && (estado3 == LOW) && (estado4 == HIGH));{  //1+2+4= 1
  digitalWrite(led,HIGH);}

  if((estado1 == HIGH) && (estado2 == LOW) && (estado3 == HIGH) && (estado4 == HIGH));{  //1+3+4= 1
  digitalWrite(led,HIGH);}

  if((estado1 == LOW) && (estado2 == HIGH) && (estado3 == HIGH) && (estado4 == HIGH));{  //2+3+4= 1
  digitalWrite(led,HIGH);}
//-------------------------------------------------------------------------------------
  if((estado1 == HIGH) && (estado2 == HIGH) && (estado3 == HIGH) && (estado4 == HIGH));{  //1+2+3+4= 0
  digitalWrite(led,LOW);}
}
