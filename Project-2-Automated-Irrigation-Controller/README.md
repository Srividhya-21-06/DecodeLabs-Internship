# 💧 Automated Irrigation Controller

## 📌 Description

This project is an Automated Irrigation Controller that monitors soil moisture and controls a water pump based on a predefined moisture threshold.

A potentiometer is used in the Wokwi simulation to represent the analog output of a soil moisture sensor. Arduino Uno reads the analog value and compares it with the threshold.

When the moisture value is below 500, the soil is considered dry and the relay is turned ON to simulate the water pump. When the value is 500 or above, the relay is turned OFF.

## ▶️ How to Run

1. 💻 Open the project in Wokwi.
2. ▶️ Start the simulation.
3. 📊 Open the Serial Monitor.
4. 🎛️ Adjust the potentiometer to change the simulated soil moisture value.
5. 👀 Observe the soil condition and water pump status in the Serial Monitor.

## 📊 Output

Example:

Soil Moisture: 436
Soil is DRY - Water Pump ON

Soil Moisture: 700
Soil is WET - Water Pump OFF

## 🛠️ Components Used

- 🔌 Arduino Uno
- 🎛️ Potentiometer
- 🔄 5V Relay Module
- 💻 Wokwi Simulator

## 🎯 Project Type

**IoT / Embedded Systems**
