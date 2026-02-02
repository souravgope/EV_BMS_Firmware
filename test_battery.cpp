#include <cassert>
#include <iostream>
#include "battery.h"

void testVoltageSafe() {
    Battery b(3.8, 30.0);
    assert(b.isVoltageSafe());
}

void testVoltageUnsafe() {
    Battery b(4.5, 30.0);
    assert(!b.isVoltageSafe());
}

void testTemperatureSafe() {
    Battery b(3.8, 25.0);
    assert(b.isTemperatureSafe());
}

void testTemperatureUnsafe() {
    Battery b(3.8, 70.0);
    assert(!b.isTemperatureSafe());
}

int main() {
    testVoltageSafe();
    testVoltageUnsafe();
    testTemperatureSafe();
    testTemperatureUnsafe();

    std::cout << "✅ Battery unit tests passed!" << std::endl;
    return 0;
}
