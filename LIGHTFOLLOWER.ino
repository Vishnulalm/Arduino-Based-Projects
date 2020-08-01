
int C1A=13;
int C1B=12;
int C2A=8;
int C2B=7;
int IN1=A0;


void setup() {

  
  
  pinMode(IN1,INPUT);

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
 
}

void loop() {
 
  if(analogRead(IN1)>800){
    digitalWrite(C1A,HIGH); //front
    digitalWrite(C1B,LOW);
    digitalWrite(C2A,HIGH);
    digitalWrite(C2B,LOW);
  }
  

    else{
      digitalWrite(C1A,LOW); //stop
     digitalWrite(C1B,LOW);
     digitalWrite(C2A,LOW);
     digitalWrite(C2B,LOW);
    }
}
  
 
