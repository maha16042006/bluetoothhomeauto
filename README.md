#Bluetooth-Controlled Home Automation System 

#Introduction
This project demonstrates the simulation of a Bluetooth-controlled home automation system using Arduino in Tinkercad. The objective is to control two devices, represented by LEDs, using serial input commands. In an actual hardware setup, these commands would be received via a Bluetooth module such as the HC-05. However, due to the limitations of Tinkercad, the serial monitor is used to simulate this functionality. This project is designed as part of an embedded systems learning task to showcase how microcontrollers can automate basic home appliances.

#Components Used
The simulation involves the following components:

Arduino Uno board

Green LED (to represent a light)

Red LED (to represent a fan)

Two 220-ohm resistors

Jumper wires

Virtual breadboard (within Tinkercad)

Serial Monitor (in place of the Bluetooth module)

#Circuit Design
The LEDs are connected to digital pins 8 and 9 on the Arduino Uno board. Each LED is connected in series with a resistor to prevent overcurrent. The components are placed on a virtual breadboard and connected using jumper wires. The circuit design follows standard digital output wiring practices for controlling LEDs.

#Working Principle
The Arduino is programmed to continuously listen for incoming serial data. When a specific character is received, it activates or deactivates the corresponding device:
Sending '1' turns on the light (green LED)
Sending '0' turns off the light
Sending '3' turns on the fan (red LED)
Sending '2' turns off the fan
These characters are entered manually into the serial monitor. In real-world usage, these commands would be sent from a smartphone via a Bluetooth module connected to the Arduino’s RX and TX pins.

#Purpose and Scope
The purpose of this simulation is to provide a basic understanding of how microcontrollers can interact with external commands to control multiple outputs. It also demonstrates how simple conditional logic in Arduino code can automate device control. This system can be expanded to include more devices and sensors, making it suitable for more complex smart home applications.

#Conclusion
This project serves as an introduction to wireless device control using Arduino. Although the serial monitor is used here, the design is compatible with actual Bluetooth modules, requiring minimal changes to implement in physical hardware. This makes the system scalable and adaptable for practical home automation setups. The simulation confirms that the code logic and circuit design work as intended, and the project is ready for further development and hardware testing.
