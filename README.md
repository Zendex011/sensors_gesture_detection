# Interactive Glove with Flex Sensors - Gesture Recognition

## Overview
This project implements an **Arduino-based interactive glove** equipped with 5 flex sensors for real-time hand gesture recognition. The glove detects gestures such as "Open Hand", "Closed Fist", and "Thumbs Up" and displays the recognized gesture on the Serial Monitor (or optionally on an LCD display).

## Tech Stack
- **Hardware:** Arduino Uno, Flex Sensors, Jumper Wires, Breadboard, Glove
- **Software:** Arduino IDE (C++/Wiring)

## Features
- Reads 5 flex sensors (one per finger)
- Calibrates sensor thresholds for accurate detection
- Recognizes multiple hand gestures
- Modular code for easy extension (e.g., LCD, Bluetooth)
- Real-time gesture output via Serial Monitor

## Components Used
- 1 × Arduino Uno
- 5 × Flex Sensors (one for each finger)
- 5 × 10kΩ Resistors (for voltage divider with each flex sensor)
- 1 × Glove (any comfortable glove)
- Jumper wires
- Breadboard
- (Optional) 16x2 LCD Display

## Setup & Wiring
1. **Flex Sensors:**
   - Attach one flex sensor to each finger of the glove.
   - Connect one end of each sensor to 5V, the other to an analog pin (A0-A4) via a voltage divider (10kΩ resistor to GND).
2. **Arduino Connections:**
   - Flex Sensor 1 (Thumb): A0
   - Flex Sensor 2 (Index): A1
   - Flex Sensor 3 (Middle): A2
   - Flex Sensor 4 (Ring): A3
   - Flex Sensor 5 (Pinky): A4
3. **(Optional) LCD:**
   - Connect as per LiquidCrystal library documentation.

![Circuit Diagram](assets/circuit_diagram.png)

## Usage
1. Upload `gesture_glove.ino` to your Arduino Uno using the Arduino IDE.
2. Open the Serial Monitor (baud rate: 9600).
3. Wear the glove and perform gestures. The recognized gesture will be displayed in real time.
4. (Optional) Adjust threshold values in the code for your specific sensors/glove.

## Extending the Project
- **LCD Display:** Add a 16x2 LCD for portable gesture feedback.
- **Bluetooth/WiFi:** Transmit gestures wirelessly to a PC or mobile device.
- **Machine Learning:** Use ML algorithms for more complex gesture recognition.
- **Haptic Feedback:** Add vibration motors for tactile feedback.

## License
MIT License 
