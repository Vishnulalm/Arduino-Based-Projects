int C1A=11;
int C1B=12;
int C2A=10;
int C2B=9;
void setup() {

  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  

}

void loop() {
  digitalWrite(C1A,HIGH); //reverse
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,HIGH);
  digitalWrite(C2B,LOW);
  delay(5000);
  digitalWrite(C1A,LOW); //stop
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,LOW);
  delay(1000);
  digitalWrite(C1A,LOW); //front
  digitalWrite(C1B,HIGH);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,HIGH);
  delay(5000);
  digitalWrite(C1A,LOW); //stop
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,LOW);
  delay(1000);

  digitalWrite(C1A,LOW);  //right turn
  digitalWrite(C1B,HIGH);
  digitalWrite(C2A,HIGH);
  digitalWrite(C2B,LOW);
  delay(1000);

  digitalWrite(C1A,LOW); //stop
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,LOW);
  delay(1000);

  digitalWrite(C1A,HIGH); //left turn
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,HIGH);
  delay(1000);

  digitalWrite(C1A,LOW); //stop
  digitalWrite(C1B,LOW);
  digitalWrite(C2A,LOW);
  digitalWrite(C2B,LOW);
  delay(1000);

  

}
