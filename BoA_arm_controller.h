#ifndef BoA_ARMCONTROLL_H_INCLUDE
#define BoA_ARMCONTROLL_H_INCLUDE

#include "ESP_servo.h"

#include "Arduino.h"

class BoA_arm_controller {
  public:
    BoA_arm_controller();
    void init();
    void write(uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6);

  private:
    ESP_servo s1, s2, s3, s4, s5, s6;
};


#endif



