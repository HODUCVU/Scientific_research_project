#include "Loadcell.h"

HX711 scale;

void setupHX711()
{
    scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}

void readData()
{
    /*
    if (scale.wait_ready_timeout(1000)) {
    long reading = scale.read();
    Serial.print("HX711 reading: ");
    Serial.println(reading);
  } else {
    Serial.println("HX711 not found.");
  }
    */
    if (scale.is_ready()) {
        long weight = scale.get_units(10); // Read 10 times to get an average value
        Serial.print("Weight: ");
        Serial.print(weight);
        Serial.println(" grams");
    } else {
        Serial.println("Error: HX711 not found or not ready.");
    }
  delay(1500);
}