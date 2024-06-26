#include <Ultrasonic.h>
Ultrasonic ultrasonic(12,13);
int distance;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
distance=ultrasonic.read();
Serial.print("Distance in cm: ");
Serial.print(distance);
delay(1000);
}
