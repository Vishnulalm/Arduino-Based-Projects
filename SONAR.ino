#include<Wire.h>
#include<LiquidCrystal_I2C.h>

int trigPin=10;
int echoPin=9;
int distance;
long duration;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  lcd.begin();
  lcd.clear();
  lcd.backlight();
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  lcd.setCursor(0,0);
  lcd.print(distance);
  lcd.clear();
}  
  
  
  
  
}
