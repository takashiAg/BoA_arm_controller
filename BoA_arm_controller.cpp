#include "BoA_arm_controller.h"
#include "ESP_servo.h"
#include "Arduino.h"

BoA_arm_controller::BoA_arm_controller() {}
void BoA_arm_controller::init() {
  s1.init(23,0);
  s2.init(22,1);
  s3.init(21,2);
  s4.init(19,3);
  s5.init(18,4);
  s6.init(5,5);
}
void BoA_arm_controller::write(uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6) {
  s1.write(v1);
  s2.write(v2);
  s3.write(v3);
  s4.write(v4);
  s5.write(v5);
  s6.write(v6);
}
