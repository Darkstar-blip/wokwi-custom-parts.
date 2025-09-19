#include "wokwi-api.h"
#include <stdio.h>

void chip_init() {
  printf("BLDC motor initialized\n");
}

void chip_tick() {
  // Read Phase A/B/C inputs, optionally simulate rotation
}
