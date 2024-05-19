# Alcohol Detection and Prevention System for Vehicles

## Overview

This project was created for the "Adventure Design" class. The main goal is to address the issue of alcohol-impaired driving, which is a significant problem in South Korea. The system utilizes an Arduino Uno, various sensors, and actuators to prevent a vehicle from shifting out of the parking state if alcohol is detected on the driver's breath.

## Components

### Hardware
- **Arduino Uno**
- **MQ-3 Alcohol Sensor**: Used to detect the presence of alcohol in the driver's breath.
- **Servo Motor**: Controls the shift lever to prevent the vehicle from moving out of the parking state.
- **IOT Module**: Enables communication and monitoring of the system.
- **LED Indicator**: Provides visual feedback on the system's status.
- **Buzzer**: Emits a sound alert if alcohol is detected.

### Software
- Arduino IDE: Used for programming the Arduino Uno.

## Features

- **Alcohol Detection**: The MQ-3 sensor detects alcohol levels in the breath of the driver.
- **Shift Lock Mechanism**: If alcohol is detected, the servo motor locks the shift lever in the parking state, preventing the vehicle from being driven.
- **Real-time Monitoring**: The IOT module allows for real-time monitoring and alerts.
- **Visual and Auditory Alerts**: LED indicators and a buzzer provide immediate feedback to the driver and nearby individuals.

## How It Works

1. **Power On**: When the vehicle is powered on, the system initializes and performs a self-check.
2. **Breath Analysis**: The driver breathes near the MQ-3 sensor. The sensor analyzes the breath for alcohol content.
3. **Detection**: If the sensor detects alcohol levels above a predetermined threshold, the system activates the servo motor.
4. **Shift Lock**: The servo motor locks the shift lever in the parking state, preventing the vehicle from being driven.
5. **Alert**: An LED indicator lights up and the buzzer sounds to alert the driver and others nearby.

## Installation

1. **Set Up Arduino**: Connect the Arduino Uno to your computer and upload the provided code using the Arduino IDE.
2. **Connect Components**: Follow the wiring diagram to connect the MQ-3 sensor, servo motor, IOT module, LED, and buzzer to the Arduino.
3. **Mount System in Vehicle**: Securely mount the MQ-3 sensor where the driver can easily breathe into it and install the servo motor to control the shift lever.

## Code

The code for this project can be found in the `code` directory of this repository. Upload the `AlcoholDetection.ino` file to the Arduino Uno using the Arduino IDE.

## Future Improvements

- **Enhanced Detection Accuracy**: Use additional sensors for more accurate alcohol detection.
- **Integration with Vehicle Systems**: Directly integrate the system with the vehicle's onboard electronics for improved security and reliability.
- **User Interface**: Develop a mobile app for easier monitoring and control.

## Contributing

If you have suggestions or would like to contribute to this project, please feel free to submit a pull request or open an issue.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Acknowledgments

This project was developed as part of the "Adventure Design" class. Special thanks to the course instructors and peers for their support and guidance.

---

Feel free to customize this `README.md` file further based on your specific project details and requirements.
