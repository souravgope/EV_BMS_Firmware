#include <cassert>
#include <iostream>
#include "battery.h"
#include "bms.h"

void testSafeBattery() {
    Battery b(3.8, 30.0);
    assert(checkBatterySafety(b));
}

void testUnsafeBattery() {
    Battery b(4.5, 70.0);
    assert(!checkBatterySafety(b));
}

int main() {
    testSafeBattery();
    testUnsafeBattery();

    std::cout << "✅ BMS unit tests passed!" << std::endl;
    return 0;
}
