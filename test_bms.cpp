#include <cassert>
#include <iostream>
#include "battery.h"
#include "bms.h"

void testSafeBattery() {
    Battery b(48.0, 30.0, 80.0);
    assert(checkBatterySafety(b));
}

void testUnsafeBattery() {
    Battery b(60.0, 70.0, 80.0);
    assert(!checkBatterySafety(b));
}

int main() {
    testSafeBattery();
    testUnsafeBattery();

    std::cout << "✅ BMS unit tests passed!" << std::endl;
    return 0;
}
