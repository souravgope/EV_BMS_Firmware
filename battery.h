#ifndef BATTERY_H
#define BATTERY_H

struct Battery {
    float voltage;
    float temperature;
    float soc;

    // Constructor
    Battery(float v, float t, float s);

    bool isVoltageSafe() const;
    bool isTemperatureSafe() const;
};

#endif
