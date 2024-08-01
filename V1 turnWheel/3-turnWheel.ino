#include "src/Motor.h"
#define DirectionPin 4
#define BaudRate 115200
int RPM_1 = 65;
int RPM_2 = 65;

void setup() {
  // put your setup code here, to run once:
  Motor.begin(BaudRate, DirectionPin, &Serial2);
  Motor.turnWheel(1,LEFT,RPM_1);
  Motor.turnWheel(2,RIGHT,RPM_2);

}

void loop() {

}

