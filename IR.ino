int IN1=13;
void setup() {
  Serial.begin(9600);
  pinMode(IN1,INPUT);
}

void loop() {
  Serial.println(digitalRead(13));
  if(digitalRead(IN1)==1)
  {
      Serial.println("Obstacle detected");
  }

}
