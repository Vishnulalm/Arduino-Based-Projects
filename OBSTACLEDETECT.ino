int C1A=13;
int C1B=12;
int C2A=8;
int C2B=7;
int IN1=2;
int IN2=4;


void setup() {

  
 
  pinMode(IN1,INPUT);
  pinMode(IN2,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
 
}

void loop() {
  
   if(digitalRead(IN1)==HIGH && digitalRead(IN2)==HIGH)
   {
      digitalWrite(C1A,LOW); //forward
     digitalWrite(C1B,HIGH);
     digitalWrite(C2A,LOW);
     digitalWrite(C2B,HIGH);
    }
   else if(digitalRead(IN1)==HIGH && digitalRead(IN2)==LOW)
   {
    digitalWrite(C1A,LOW); //left
    digitalWrite(C1B,HIGH);
    digitalWrite(C2A,HIGH);
    digitalWrite(C2B,LOW);
   }
   else if(digitalRead(IN1)==LOW && digitalRead(IN2)==HIGH)
   {
    digitalWrite(C1A,HIGH); //right
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,LOW);
    digitalWrite(C2B,HIGH);
   }

   else if(digitalRead(IN1)==LOW && digitalRead(IN2)==LOW)
   {
    digitalWrite(C1A,LOW); //Stop
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,LOW);
    digitalWrite(C2B,LOW);

    digitalWrite(C1A,HIGH); //revere
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,HIGH);
    digitalWrite(C2B,LOW);

    delay(5000);

    digitalWrite(C1A,LOW); //Stop
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,LOW);
    digitalWrite(C2B,LOW);
    
   }

    
  

 
  
}
