#include "battery.h"

// Constructor definition
Battery::Battery(float v, float t, float s) {
    voltage = v;
    temperature = t;
    soc = s;
}

bool Battery::isVoltageSafe() const {
    return (voltage >= 40.0 && voltage <= 54.0);
}

bool Battery::isTemperatureSafe() const {
    return (temperature >= 0.0 && temperature <= 60.0);
}
