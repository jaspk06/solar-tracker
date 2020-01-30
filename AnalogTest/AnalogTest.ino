
float* sensorVals;
int leftPin = A0;
int centerPin = A1;
int rightPin = A2;
//int counter = -1;
//float average = 0;

void setup() {
  // put your setup code here, to run once:
  sensorVals = new float[3];
  Serial.begin(9600);

}

void loop() {
  //counter++;
  // put your main code here, to run repeatedly:
  sensorVals[0] = analogRead(leftPin);
  sensorVals[1] = analogRead(centerPin);
  sensorVals[2] = analogRead(rightPin);
  Serial.print(sensorVals[0]);
  Serial.print(",");
  Serial.print(sensorVals[1]);
  Serial.print(",");
  Serial.println(sensorVals[2]);
  /*
  if ( sensorVals[0] > sensorVals[1] && sensorVals[0] > sensorVals[2] ) {
    max = sensorVals[0];
  } else if ( sensorVals[1] > sensorVals[0] && sensorVals[1] > sensorVals[2] ) {
    max = sensorVals[1];
  } else if ( sensorVals[2] > sensorVals[0] && sensorVals[2] > sensorVals[1] ) {
    max = sensorVals[2];
  } else if ( sensorVals[1] == sensorVals[0] ) {
    max = sensorVals[1];
  } else if ( sensorVals[1] == sensorVals[2] ) {
    max = sensorVals[1];
  } else if ( sensorVals[0] == sensorVals[2] ) {
    max = sensorVals[0];
  } else {
    max = sensorVals[0];
  }*/
   
  /*
   if (counter == 98) {
    average = 0;
    for(int i = 0; i < counter; i++ ) {
      average += sensorValsLeft[i]/counter;
    }
    Serial.print(average);
    Serial.print(",");
    average = 0;
    for(int i = 0; i < counter; i++ ) {
      average += sensorValsMiddle[i]/counter;
    }
    Serial.print(average);
    Serial.print(",");
    average = 0;
    for(int i = 0; i < counter; i++ ) {
      average += sensorValsRight[i]/counter;
    }
    Serial.println(average);
    counter = 0;
  }
  */
  
  delay(50);


}
