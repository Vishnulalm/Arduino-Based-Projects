
int sensorPin=A0;
int sensorValue=0;

void setup() {
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
 
 sensorValue=analogRead(sensorPin);

 if(sensorValue>300)
 {
    digitalWrite(13,LOW);
 }
 else
 {
    digitalWrite(13,HIGH);
 }
} 
 
