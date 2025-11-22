# Sensor-Actuator-Integration-Arduino-

# 🌡️ TMP36 Temperature Sensor With Arduino + LED Alert

This project interfaces a **TMP36 Analog Temperature Sensor** with **Arduino** to measure ambient temperature.  
If the temperature rises **less than threshhold (10°C)**, an LED starts **flickering (blinking fast)** as an alert.

**TMP36 Analog Temperature Sensor**

The **TMP36** is a low-cost, precision analog temperature sensor designed to measure ambient temperature and provide a corresponding voltage output. Structurally, it looks like a small three-pin transistor (TO-92 package) with a flat front surface and a curved back. Its three pins are **power (Vcc)**, **analog output (Vout)**, and **ground (GND)**. Internally, the sensor uses a band-gap temperature measurement circuit that generates a stable voltage proportional to temperature, which makes it highly accurate without requiring external calibration. In operation, the TMP36 outputs **0.5 volts at 0°C**, and this voltage increases by **10 millivolts per degree Celsius**, meaning every additional 1°C adds 0.01V to the output. A microcontroller, like an Arduino, reads this analog voltage and converts it to a temperature value using the formula *(Temperature °C = (Vout − 0.5) × 100)*. Because the output is linear and directly proportional to temperature, the TMP36 is easy to use, highly reliable, and suitable for many temperature-sensing applications.

---

## 🎯 Features
✔ Reads temperature in real-time using **TMP36**  
✔ Displays output on **Serial Monitor**  
✔ LED flickers when temperature **< threshhold (10°C)**  

✅ **What this does**

Reads TMP36 output, converts to voltage then to °C.

Prints temperature to Serial Monitor.

If temperature < 10 °C (threshold) then the LED flickers (ON for 200 ms, OFF for 200 ms).

Else the LED stays OFF.

🔧 **Wiring**

TMP36:

Left pin → +5 V on Arduino

Middle pin → A0 analog input on Arduino

Right pin → GND on Arduino

LED’s anode (+ longer leg) → digital pin e.g. D 13 on Arduino

LED’s cathode (− shorter leg)  → GND




<img width="951" height="528" alt="circuite diagram iitb led project" src="https://github.com/user-attachments/assets/0e0e4573-3d5a-4f5c-ac6b-3e575958cbef" />






