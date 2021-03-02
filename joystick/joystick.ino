#include<Servo.h>
Servo servo_test;
int angle = 0;
#define JoyX A0
#define JoyY A1
float xValue;
float yValue;
float angle_val;

void setup() {
  Serial.begin(9600);
  float xValue;
  float yValue;
  pinMode(13,OUTPUT);
  servo_test.attach(9);

}

void loop(){
  xValue = analogRead(JoyX);
  yValue = analogRead(JoyY);

  Serial.print(xValue);
  Serial.print("\t");
  Serial.print(yValue);
  
  if (xValue >= 1000){
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  angle_val = xValue / 1000;
  servo_test.write(angle_val*180);
}
