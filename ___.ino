void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<8;i++)
  pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2;i<7;i++)
  {
    digitalWrite(i,HIGH);
    delay(25);
    digitalWrite(i,LOW);
  }
  for(int i=7;i>2;i--)
  {
    digitalWrite(i,HIGH);
    delay(25);
    digitalWrite(i,LOW);
  }

}
