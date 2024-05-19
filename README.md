# Alcohol Detection and Prevention System for Vehicles

## Overview

The main goal is to address the issue of alcohol-impaired driving, which is a significant problem in South Korea. 

The system utilizes an Arduino Uno, various sensors, and actuators to prevent a vehicle from shifting out of the parking state if alcohol is detected on the driver's breath.

## Components

### Hardware
- **Arduino Uno**
- **MQ-3 Alcohol Sensor**: Used to detect the presence of alcohol in the driver's breath.
- **Linear actuator**: Controls the shift lever to prevent the vehicle from moving out of the parking state. Have three states. (Forward,stop, Backward)
- **humidity sensor **: Used to detect driver's breath and support alcohol sensor to get better result.
- **2-channel Relay Module**: Performs Linear actuator state exchangement via decision of detection.
- **Buzzer**: Emits a sound alert if alcohol is detected.
- **VL6180X razer sensor**: Emit razer and check the state of shift lever.
  
### Software
- Arduino IDE: Used for programming the Arduino Uno.

## Features

- **Alcohol Detection**: The MQ-3 sensor detects alcohol levels[ppm] in the breath of the driver.
- **Shift Lock Mechanism**: If alcohol is detected, the linear actuator locks the shift lever in the parking state, preventing the vehicle from being driven.
- **Visual and Auditory Alerts**: LED indicators and a buzzer provide immediate feedback to the driver and nearby individuals.
- **Monitoring Loop**: VL6180X razer sensor detects delay time for razer to be returned to check the state of car. 
## How It Works

1. **Power On**: When the vehicle is powered on, the system initializes and performs a self-check.
2. **Breath Analysis**: The driver breathes near the humidity sensor. The sensor first check the humidity differences for double checking whether breathe is well detected.
3. **Alcohol Analysis**: The MQ-3 sensor analyzes the breath for alcohol content.
4. **Detection**: If the sensor detects alcohol levels above a predetermined threshold, the system activates the linear actuator.
5. **Shift Lock**: The Linear Actuator locks the shift lever in the parking state, preventing the vehicle from being driven.
6. **Alert**: The buzzer sounds to alert the driver and others nearby.
7. **Monitoring**: VL6180X razer sensor monitors the state of shift lever for each given certain time period and if shift lever is in parking mode, controls linear actuator to lock shift lever. 

## Installation

1. **Set Up Arduino**: Connect the Arduino Uno to your computer and upload the provided code using the Arduino IDE.
2. **Connect Components**: Follow the wiring diagram to connect the MQ-3 sensor, Linear actuator, 2 channel relay module, VL6180X, and buzzer to the Arduino.
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

This project was developed as part of the "Adventure Design" class. Special thanks to the peers in class for their support and guidance.

---

Feel free to customize this `README.md` file further based on your specific project details and requirements.
