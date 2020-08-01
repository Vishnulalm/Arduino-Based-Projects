void setup() {
pinMode(7,OUTPUT);
pinMode(13,INPUT);

}

void loop() {
  
      if(digitalRead(13)==HIGH)
      {
            digitalWrite(7,HIGH);
      
      }
      else
      {
          digitalWrite(7,LOW);
         
      }
    
}
