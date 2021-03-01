void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  int u;
}

void loop() {
  int u;
  // put your main code here, to run repeatedly:
   for (u=1; u<=100; u++){
       digitalWrite(13,HIGH);
       delay(100*u);
       digitalWrite(13,LOW);
       delay(100*u);
   }
}
