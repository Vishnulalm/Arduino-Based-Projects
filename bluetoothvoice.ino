#include<SoftwareSerial.h> //Header file to support multiple devices to bluetooth
SoftwareSerial mySerial(10,11); //RX TX
char data;
int C1A=13;
int C1B=12;
int C2A=8;
int C2B=7;
char c;
String voice;
void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);
  
  
}

void forward()
{
          Serial.println("forward");
            digitalWrite(C1A,LOW); //front
           digitalWrite(C1B,HIGH);
           digitalWrite(C2A,LOW);
           digitalWrite(C2B,HIGH);
}

void backward()
{
         digitalWrite(C1A,HIGH); //back
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,HIGH);
         digitalWrite(C2B,LOW);
}

void left()
{
         digitalWrite(C1A,LOW); //left
         digitalWrite(C1B,HIGH);
         digitalWrite(C2A,HIGH);
         digitalWrite(C2B,LOW);
}

void right()
{
          digitalWrite(C1A,HIGH); //right
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,LOW);
         digitalWrite(C2B,HIGH);
}

void stop1()
{
          digitalWrite(C1A,LOW); //stop
         digitalWrite(C1B,LOW);
         digitalWrite(C2A,LOW);
         digitalWrite(C2B,LOW);
}
void loop() {

  while(mySerial.available()>0)
  { 
     
      c=mySerial.read();
      delay(10);
      if(c=='#')
        break;
      voice+=c;
  }

     if(voice.length()>0)
     {
        Serial.print(voice);
        if(voice=="*forward")
          {
            forward();}

      
      
      
      else if(voice=="*backward")
      {
          
          backward();
      }
      else if(voice=="*left")
      {
        
        left();
      }

      else if(voice=="*right")
      {
       
        right();
      }
      else if(voice=="*stop")
      {
        
        stop1();
      }
      voice="";
     } 
  }
