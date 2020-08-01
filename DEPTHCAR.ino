

int C1A=13;
int C1B=12;
int C2A=8;
int C2B=7;
int trig=10;
int echo=9;
long distance;
long duration;


void setup() {

  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
 
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  

      if(distance<=5)
    {
     
      digitalWrite(C1A,HIGH); //back
     digitalWrite(C1B,LOW);
     digitalWrite(C2A,HIGH);
     digitalWrite(C2B,LOW);
    }
   else
   {
    digitalWrite(C1A,LOW); //stop
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,LOW);
    digitalWrite(C2B,LOW);
   } 
  

 
  
}
