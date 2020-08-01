int trigPin=10;
int echoPin=9;
int distance;
long duration;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  if(distance<20)
  {  
      digitalWrite(13,HIGH);
  }
  else
  {
      digitalWrite(13,LOW);
  } 
  
  
  
}
