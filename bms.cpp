#include "bms.h"

bool checkBatterySafety(const Battery& battery) {
    return battery.isVoltageSafe() && battery.isTemperatureSafe();
}
