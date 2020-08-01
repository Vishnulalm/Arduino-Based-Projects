char data=0;
int C1A=9;
int C1B=11;
int C2A=10;
int C2B=12;
void setup() {
  Serial.begin(9600);
  pinMode(C1A,OUTPUT);
  pinMode(C2A,OUTPUT);
  pinMode(C1B,OUTPUT);
  pinMode(C2B,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  { 
     
      data=Serial.read();
      Serial.print(data);
      if(data=='F')
      {
        Serial.print("foewd");
           digitalWrite(C1A,LOW); //front
           digitalWrite(C1B,HIGH);
           digitalWrite(C2A,LOW);
           digitalWrite(C2B,HIGH);
      }

      else if(data=='B')
      {
         digitalWrite(C1A,HIGH); //back
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,HIGH);
         digitalWrite(C2B,LOW);
      }
      else if(data=='L')
      {
         digitalWrite(C1A,LOW); //left
         digitalWrite(C1B,HIGH);
         digitalWrite(C2A,HIGH);
         digitalWrite(C2B,LOW);
      }

      else if(data=='R')
      {
          digitalWrite(C1A,HIGH); //right
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,LOW);
         digitalWrite(C2B,HIGH); 
      }
      else if(data=='S')
      {
         digitalWrite(C1A,LOW); //stop
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,LOW);
         digitalWrite(C2B,LOW);
      }
  }  
  }
