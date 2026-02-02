#include <iostream>
#include "battery.h"
#include "bms.h"

int main() {
    Battery battery(3.5, 30.0); // Voltage, Temperature

    std::cout << "BMS Firmware Started" << std::endl;
    std::cout << "Battery Voltage: " << battery.voltage << " V" << std::endl;
    std::cout << "Battery Temperature: " << battery.temperature << " C" << std::endl;
    std::cout << "Battery SOC: " << battery.soc << " %" << std::endl;

    if (checkBatterySafety(battery)) {
        std::cout << "BMS Status: SAFE" << std::endl;
    } else {
        std::cout << "BMS Status: UNSAFE" << std::endl;
    }

    return 0;
}
