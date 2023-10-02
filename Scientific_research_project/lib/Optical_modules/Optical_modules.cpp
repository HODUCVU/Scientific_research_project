#include "Optical_modules.h"
#include "DataSheets.h"
//Calculate hours about infusion process
double getInfusionTimehours(double V, double rateDrops, int sd = 20)
{
    //Volume is ml
    return (V * sd) /(rateDrops * 60);
}
// Initialization medicine
void initInfusionRateStd(String medicine_name)
{
    //Choose mediciens from DataSheet
    Medicine medicien;
    int length = sizeof(DataSheetOfMedicines) / sizeof(DataSheetOfMedicines[0]);
    for(int i = 0; i < length; i++)
    {
        if(DataSheetOfMedicines[i].getName() == medicine_name)
        {
            medicien = DataSheetOfMedicines[i];
        }
    }
    Serial.println(medicien.getRateDrops());
    Serial.println(medicien.getInfusionRateStd());
    Serial.println(getInfusionTimehours(30,medicien.getRateDrops()));
}
// Measure the infusion rate
double getInfusionRate()
{
    //PIN
    // ON
    // OFF
    return 0.0;
}
// Based on speed standards to calculate
// Depends on the infusion rate data sheet
double timeBetweenTwoDrops()
{
    
}
void takeInfusionRateStd()
{
    //here is to use for compare std rate vs rate from optical sensors
}
// send data to motor_modules for adjustment
int sendDataToMotors()
{

    return 0;
}