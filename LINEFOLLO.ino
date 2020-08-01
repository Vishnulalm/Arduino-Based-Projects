int C1A=13;
int C1B=12;
int C2A=8;
int C2B=7;
int IN1=3;
int IN2=4;
void setup() {

  Serial.begin(9600);
  pinMode(IN1,INPUT);
  pinMode(IN2,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  

}

void loop() {
  if(digitalRead(IN1)==LOW && digitalRead(IN2)==LOW)  //white
  {
  digitalWrite(C1A,LOW); //front
  digitalWrite(C1B,HIGH);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,HIGH);
  }

  else if(digitalRead(IN1)==LOW && digitalRead(IN2)==HIGH)
  {
   digitalWrite(C1A,HIGH); //right
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,HIGH);
  }

  else if(digitalRead(IN1)==HIGH && digitalRead(IN2)==LOW)
  {
  digitalWrite(C1A,LOW);  //left turn
  digitalWrite(C1B,HIGH);
  digitalWrite(C2A,HIGH);
  digitalWrite(C2B,LOW);
  }
  else if(digitalRead(IN1)==HIGH && digitalRead(IN2)==HIGH)
  {
   digitalWrite(C1A,LOW); //stop
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,LOW);
  }

  
}
