#include <HCSR04.h>

HCSR04 sensorDistance(2 , 3); //trig e echo

void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(sensorDistance.dist()/100);
  delay(1000);
}
