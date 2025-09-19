#include "wokwi-api.h"
#include <stdio.h>

void chip_init() {
  printf("ESC init\n");
}

void chip_tick() {
  // read pwm from SIGNAL pin, maybe change some state
}
