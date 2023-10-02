#include <Arduino.h>
/*
    • Collect the infusion rate and then evaluate whether the infusion rate is at the correct level or not.
    • Send data to the processor to adjust the control valve so that the infusion rate is at the prescribed level.
*/
// Initialization medicine
void initInfusionRateStd(String medicine_name);
// Calculate hours about infusion process
double getInfusionTimehours(double V, double rateDrops, int sd);
// Measure the infusion rate
double getInfusionRate();
// Based on speed standards to calculate
// Depends on the infusion rate data sheet
void takeInfusionRateStd();
// Send data to motor_modules for adjustment
int sendDataToMotors();
// Get time of infusion 
double getInfusionTimehours();