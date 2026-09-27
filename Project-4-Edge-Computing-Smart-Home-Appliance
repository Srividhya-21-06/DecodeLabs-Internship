# 🏠 Edge-Computing Smart Home Appliance

## Description

This project implements an edge-computing smart home appliance using ESP32.

A PIR motion sensor is used to control a smart lighting system through a hardware interrupt.

An analog gas/smoke sensor provides a safety override. When the gas level exceeds the defined threshold, the system immediately turns OFF the smart light and activates a red warning LED and buzzer.

## Components Used

- ESP32
- PIR Motion Sensor
- MQ2 Gas/Smoke Sensor
- LED
- Red LED
- Buzzer
- Wokwi Simulator

## Pin Configuration

| Component | ESP32 Pin |
|---|---|
| PIR Sensor | GPIO 27 |
| Gas Sensor | GPIO 34 |
| Smart Light LED | GPIO 25 |
| Red LED | GPIO 26 |
| Buzzer | GPIO 14 |

## Working Principle

The PIR sensor generates a signal when motion is detected.

The ESP32 handles this signal using a hardware interrupt.

When motion is detected, the smart light is turned ON.

The gas/smoke sensor continuously monitors the analog gas level.

If the gas value exceeds the safety threshold, the safety logic overrides the normal operation.

The smart light is turned OFF and the red LED and buzzer are activated.

## Key Concepts

- Hardware Interrupts
- Interrupt Service Routine (ISR)
- Analog Sensor Reading
- Safety Override
- Edge Computing
- Embedded System Safety

## How to Run

1. Open the project in Wokwi.
2. Start the ESP32 simulation.
3. Trigger the PIR sensor to simulate motion.
4. Observe the smart light response.
5. Increase the gas sensor value above the threshold.
6. Observe the red LED and buzzer safety alert.

## Output

The system responds to motion using a hardware interrupt and provides an immediate safety override when gas/smoke levels exceed the threshold.
