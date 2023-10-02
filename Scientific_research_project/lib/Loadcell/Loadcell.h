#include <HX711.h>
#include <Arduino.h>

const int LOADCELL_DOUT_PIN = 2; // Connect the DOUT pin of HX711 to GPIO2
const int LOADCELL_SCK_PIN = 4;  // Connect the SCK pin of HX711 to GPIO4

void setupHX711();
void readData();