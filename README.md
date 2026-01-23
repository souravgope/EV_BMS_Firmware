# EV Battery Management System (BMS) Firmware Simulation


## Overview

This project simulates the **Battery Management System (BMS)** of an electric vehicle (EV) using C++.  
The BMS monitors battery voltage, temperature, and state-of-charge (SOC), and ensures that the battery operates safely.  
It also includes **unit tests** to verify the functionality of the Battery and BMS modules, following the **V-Cycle model** used in embedded systems development.

This project demonstrates modular firmware design, test-driven development, and basic embedded engineering concepts.

---

## Features

- Reads battery parameters (voltage, temperature, SOC)
- Monitors battery safety limits:
  - Voltage safe range: 40V – 54V
  - Temperature safe range: 0°C – 60°C
- Calculates **State of Charge (SOC)**
- Generates **fault codes** for unsafe conditions
- Modular design:
  - `battery.cpp` & `battery.h` → Battery module
  - `bms.cpp` & `bms.h` → BMS logic
- Unit tests for:
  - Battery module (`test_battery.cpp`)
  - BMS module (`test_bms.cpp`)

---



## Project Structure

EV_BMS_Firmware/
- main.cpp          # Main program
- battery.h         # Battery module header
- battery.cpp       # Battery module implementation
- bms.h             # BMS module header
- bms.cpp           # BMS module implementation
- test_battery.cpp  # Unit tests for Battery module
- test_bms.cpp      # Unit tests for BMS module
- README.md         # Project description


---

## How to Run

### 1️⃣ Compile main program

```bash
g++ main.cpp battery.cpp bms.cpp -o bms
./bms


2️⃣ Compile and run Battery unit tests
g++ test_battery.cpp battery.cpp -o test_battery
./test_battery


3️⃣ Compile and run BMS unit tests
g++ test_bms.cpp battery.cpp bms.cpp -o test_bms
./test_bms


#---Sample Output
BMS Firmware Started
Battery Voltage: 48 V
Battery Temperature: 30 C
Battery SOC: 80 %
BMS Status: SAFE


#Unit Test Output:

✅ Battery unit tests passed!
✅ BMS unit tests passed!
