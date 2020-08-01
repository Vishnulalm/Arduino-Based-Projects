int IN1=13;
void setup() {
  Serial.begin(9600);
  pinMode(IN1,INPUT);
  pinMode(7,OUTPUT);
}

void loop() {
 
  if(digitalRead(IN1)==0)
  {
     digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }

}
