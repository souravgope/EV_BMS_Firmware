#include "battery.h"
#include "soc.h"

// Constructor definition
Battery::Battery(float v, float t) {
    voltage = v;
    temperature = t;
    soc = calculateSOC(voltage);
}

bool Battery::isVoltageSafe() const {
    return (voltage >= 3.0 && voltage <= 4.2);
}

bool Battery::isTemperatureSafe() const {
    return (temperature >= 0.0 && temperature <= 60.0);
}
