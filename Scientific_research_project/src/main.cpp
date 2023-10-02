#include "Optical_modules.h"
#include "Loadcell.h"

void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   //initInfusionRateStd();
}

void loop() {
  initInfusionRateStd("Ringer Lactate");
  delay(1000);
}
