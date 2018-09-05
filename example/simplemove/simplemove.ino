#include "BoA_arm_controller.h"

BoA_arm_controller arm;

void setup() {
  Serial.begin(115200);
  arm.init();
}


void loop() {
  for (int pos = 10; pos <= 170; pos += 1) {
    arm.write(pos, pos, pos, pos, pos, pos);
    delay(15);
  }
  for (int pos = 170; pos >= 10; pos -= 1) {
    arm.write(pos, pos, pos, pos, pos, pos);
    delay(15);
  }
}

