#include<Servo.h>

Servo m;
int pos=0;
void setup() {
 m.attach(9); 
}

void loop() {

  for(pos=0;pos<=180;pos++)
  {
      m.write(pos);
      delay(15);
  }
  for(pos=180;pos>=0;pos--)
  {
      m.write(pos);
      delay(15);
  }
  

}
