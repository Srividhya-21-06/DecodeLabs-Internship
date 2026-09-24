# 🔐 Cloud-Connected Security Node

## Description

This project is an IoT-based security telemetry system developed using ESP32 and an HC-SR04 ultrasonic sensor.

The system measures the distance of a detected object and sends the sensor data to an Adafruit IO cloud dashboard using MQTT.

## Components Used

- ESP32
- HC-SR04 Ultrasonic Sensor
- Wokwi Simulator
- Adafruit IO
- MQTT

## Working Principle

The HC-SR04 ultrasonic sensor measures the distance of an object.

The ESP32 reads the distance value and connects to Wi-Fi using the Wokwi-GUEST network.

The measured distance is published to Adafruit IO using MQTT.

The live distance data is displayed on the Adafruit IO dashboard.

## MQTT Feed

distance

## How to Run

1. Open the project in Wokwi.
2. Add the ESP32 and HC-SR04 sensor.
3. Install the PubSubClient library.
4. Enter the Adafruit IO username and AIO key.
5. Start the simulation.
6. Monitor the distance values in the Serial Monitor.
7. Open the Adafruit IO dashboard to view the live telemetry.

## Output

The system displays the ultrasonic distance in centimeters and sends the value to the cloud dashboard.

## Skills Demonstrated

- ESP32
- Wi-Fi connectivity
- Ultrasonic sensing
- MQTT communication
- Cloud IoT
- Adafruit IO dashboard
- IoT telemetry
