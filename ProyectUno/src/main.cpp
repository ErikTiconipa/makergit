#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9,HIGH);
  delay(10);
  digitalWrite(9,LOW);
  delay(10);

  digitalWrite(10,HIGH);
  delay(10);
  digitalWrite(10,LOW);
  delay(10);
  
  digitalWrite(11,HIGH);
  delay(10);
  digitalWrite(11,LOW);
  delay(10);
}