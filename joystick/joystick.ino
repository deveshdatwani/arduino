#define JoyX A0
#define JoyY A1
float xValue;
float yValue;

void setup() {
  Serial.begin(9600);
  float xValue;
  float yValue;
}

void loop(){
  xValue = analogRead(JoyX);
  yValue = analogRead(JoyY);

  Serial.print(xValue);
  Serial.print("\t");
  Serial.print(yValue);
  delay(1000);
}
