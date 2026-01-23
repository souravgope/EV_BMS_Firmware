#include <cassert>
#include <iostream>
#include "battery.h"

void testVoltageSafe() {
    Battery b(48.0, 30.0, 80.0);
    assert(b.isVoltageSafe());
}

void testVoltageUnsafe() {
    Battery b(60.0, 30.0, 80.0);
    assert(!b.isVoltageSafe());
}

void testTemperatureSafe() {
    Battery b(48.0, 25.0, 80.0);
    assert(b.isTemperatureSafe());
}

void testTemperatureUnsafe() {
    Battery b(48.0, 70.0, 80.0);
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
