#include <Servo.h>
Servo servo;

int val = 0;

float* sensorVals;

int leftPin = A0;
int centerPin = A1;
int rightPin = A2;

bool moveLeft = true;
bool moveRight = false;

void setup() {
  servo.attach(9);  
  val=90;
  servo.write(val);
  sensorVals = new float[3];
  pinMode(OUTPUT,13);
  digitalWrite(LOW,13);
  Serial.begin(9600);
}

void loop() {
    sensorVals[0] = analogRead(leftPin);
    sensorVals[1] = analogRead(centerPin);
    sensorVals[2] = analogRead(rightPin);
    //Serial.print(sensorVals[0]);
    //Serial.print(",");
    //Serial.print(sensorVals[1]);
    //Serial.print(",");
    //Serial.println(sensorVals[2]);
    if(sensorVals[1] >= sensorVals[0] && sensorVals[1] >= sensorVals[2]){
      return;
    }

    if (sensorVals[2] > sensorVals[0]){
        servo.write(--val); // move right???
        moveRight = true;
        moveLeft = false;
        Serial.println("Tryna go Right");
    }
    else if (sensorVals[2] < sensorVals[0]){
        servo.write(++val); //move left???
        moveRight = false;
        moveLeft = true;
        Serial.println("Tryna go Left");
    }
    else if (sensorVals[2]==sensorVals[1]||sensorVals[1]==sensorVals[0]){
        if (moveRight == true){
            servo.write (++val); //move right??
        }else{
            servo.write (--val); // move left??
        }
    }



    delay(45);                          
}
