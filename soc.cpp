#include "soc.h"

// Simple linear SOC estimation
float calculateSOC(float voltage) {

    if (voltage <= 3.0)
        return 0.0;

    if (voltage >= 4.2)
        return 100.0;

    return ((voltage - 3.0) / (4.2 - 3.0)) * 100.0;
}
