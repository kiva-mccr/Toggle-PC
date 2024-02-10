#include <Servo.h>

Servo ServoV;  // Create a servo object
Servo ServoH;  // Create a servo object

void setup() {
  ServoV.attach(ADD YOUR OWN PIN NUMBER HERE);  // Vertical servo, with respect to the servo's base.
  ServoH.attach(ADD YOUR OWN PIN NUMBER HERE);  // Horizontal servo, with respect to the servo's base.
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
