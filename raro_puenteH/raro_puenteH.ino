// Motor A
int ENA = 10;
int IN1 = 9;
int IN2 = 8;

// Motor B
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

void setup ()
{
 // Declaramos todos los pines como salidas
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}
/*Y ahora vamos a crear las funciones
para mover los motores. Primero para
moverlos hacia delante a plena potencia: */

void Adelante (){
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite  (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite  (ENB, 255); //Velocidad motor B
}
/*Y ahora para moverse en el sentido
contrario a la mitad de potencia: */

void Atras (){
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite  (ENA, 128); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite  (ENB, 128); //Velocidad motor B
}
//Y ahora vamos a girar cada motor en un sentido, cada uno con una velocidad además:

void Derecha (){
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite  (ENA, 200); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite  (ENB, 100); //Velocidad motor A
}

void Izquierda (){
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite  (ENA, 50); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite  (ENB, 150); //Velocidad motor A
}
//Y una función más para pararlos:

void Parar (){
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 analogWrite  (ENA, 0); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
 analogWrite  (ENB, 0); //Velocidad motor A
}
/*Vamos a  combinar estas funciones en
el loop, haciendo que cada una se ejecute
durante un periodo de tiempo: */

void loop(){
 Adelante ();
 delay (5000);
 Atras ();
 delay (3000);
 Derecha ();
 delay (2000);
 Izquierda ();
 delay (2000);
 Parar ();
 delay (4000);
}
