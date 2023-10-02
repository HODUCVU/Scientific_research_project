#include <Arduino.h>

/*
    • Collect the infusion rate and then evaluate whether the infusion rate is at the correct level or not.
    • Send data to the processor to adjust the control valve so that the infusion rate is at the prescribed level.
*/
// Measure the infusion rate
double getInfusionRate();
// Based on speed standards to calculate
// Depends on the infusion rate data sheet
void takeInfusionRateStd();
// send data to motor_modules for adjustment
int sendDataToMotors();