#include <Servo.h>

Servo servo;
int* sensorVals;

int leftPin = 2;
int centerPin  = 3;
int rightPin = 4;

void setup() {
  // put your setup code here, to run once:
  sensorVals = new int[3];
  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(centerPin, INPUT);
  servo.attach(6);
  Serial.begin(9600);

}

void loop() {
  sensorVals[0] = digitalRead(leftPin);
  sensorVals[2] = digitalRead(rightPin);
  sensorVals[1] = digitalRead(centerPin);
  if(sensorVals[0] == 0) {
    Serial.println("left is low");
  } else {
    Serial.println("left is high");
  }
  if(sensorVals[1] == 0) {
    Serial.println("center is low");
  } else {
    Serial.println("center is high");
  }
  if(sensorVals[2] == 0) {
    Serial.println("right is low");
  } else {
    Serial.println("right is high");
  }
  if(sensorVals[0]){
    servo.write(0);
    Serial.println("Move Left");
    //Move Left
  }
  else if(sensorVals[2]){
    servo.write(180);
    Serial.println("Move Right");
    //Move Right
  }
  else{
    servo.write(90);
    Serial.println("Do Nothing");
    //stop
  }
  Serial.println("Left Val: " + sensorVals[0]);
  Serial.println("Center Val: " + sensorVals[1]);
  Serial.println("Right Val: " + sensorVals[2]);
  
  delay(100);
  
  // put your main code here, to run repeatedly:

}
