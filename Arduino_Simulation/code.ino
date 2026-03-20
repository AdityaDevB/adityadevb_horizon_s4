#include <Servo.h>
Servo servo1;
int servopin=9;
void setup(){
  servo1.attach(servopin);
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);
}
void loop(){
  int sensorvalue = analogRead(A0);
  int angle = map(sensorvalue,0,1023,0,180);
  if(angle<=68){
    digitalWrite(12,LOW);
    servo1.write(angle);
  }
  else{
    digitalWrite(12,HIGH);
    servo1.write(68);
  }
  delay(10);
}
