#include <Servo.h>
Servo servo;

void setup() {
  servo.attach(9); //The servo is attached to digital pin 9
}

void loop() {
  servo.write(0);
  delay(2000);
  servo.write(179);
  delay(2000);
}
