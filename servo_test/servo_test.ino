#include <Servo.h>

Servo servo;
//0 == Left == Counterclockwise
//180 == other 


int val = 0;


void setup() {
  servo.attach(9);  
  servo.write(val);
  Serial.begin(9600);
}
int dir = 1;
void loop() {

  servo.write(val += dir);
  if(val >= 180){
      dir = -1;
  }
  else if (val <= 0){
    dir = 1;
  }
  
  Serial.println("Sebastian is Gey");    
  delay(15);                          
}
