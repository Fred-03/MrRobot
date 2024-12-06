#include <Servo.h>

Servo servoEye;


void setup() {
  servoEye.attach(7);
  servoEye.write(0);
  delay(4000);
  servoEye.write(90);
  delay(4000);
  servoEye.write(180);
  delay(4000);
  servoEye.write(90);
}

void loop() {
 
}
