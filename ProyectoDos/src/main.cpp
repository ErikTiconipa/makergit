#include <Arduino.h>

int boton = 0 ;
const int tiempo = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT_PULLUP);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  boton = digitalRead(7);

  if (boton == 0) {
      digitalWrite(9,HIGH);
      delay(tiempo);
      digitalWrite(9,LOW);
      delay(tiempo);

      digitalWrite(tiempo,HIGH);
      delay(tiempo);
      digitalWrite(tiempo,LOW);
      delay(tiempo);
      
      digitalWrite(11,HIGH);
      delay(tiempo);
      digitalWrite(11,LOW);
      delay(tiempo);
  }


}