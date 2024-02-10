#include <Servo.h>

Servo ServoV;  // Create a servo object
Servo ServoH;  // Create a servo object

void setup() {
  ServoV.attach(44);  // Vertical servo, with respect to the servo's base.
  ServoH.attach(46);  // Horizontal servo, with respect to the servo's base.
  Serial.begin(9600);
}

void loop() {
  ServoV.write(170);
  ServoH.write(120);
  delay(1000);

  delay(1000);

  ServoV.write(180);
  ServoH.write(65);
  delay(1000);

  ServoV.write(180);
  ServoH.write(90);
  delay(1000);

  while (true) {
    // Do nothing, effectively stopping the loop
  }
}