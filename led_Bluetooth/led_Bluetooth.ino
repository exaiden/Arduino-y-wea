//Possible string values:
//   a   (to turn the LED on)
//   b   (to turn the LED off)

char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      delay(500);      
    }else if(inputString == "b"){
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
    }else if(inputString == "c"){
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
    }else if(inputString == "d"){
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
    inputString = "";
  }
}
