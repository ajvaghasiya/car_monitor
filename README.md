# car_monitor
The system will store data in the SPI flash memory for future reference.
The purpose of this project is to design and implement an automotive software system that can control various functionalities of a car such as engine control, dashboard display, communication with external devices, etc. The software will be implemented using embedded C programming language, microprocessors, RTOS, SPI, CAN, and Ethernet.
System Architecture: The system architecture will be divided into three main parts:
The engine control system, which will control the engine and other related functionalities.
The dashboard system, which will display various information about the car such as speed, fuel level, temperature, etc.
The communication system, which will enable communication with external devices such as sensors, GPS, and other cars.
Hardware Requirements:
Microprocessor: STM32F407VG
CAN Transceiver: MCP2515
Ethernet Controller: ENC28J60
SPI Flash Memory: W25Q64
LCD Display: 7-segment display
Software Requirements:
Keil uVision IDE
RTOS: FreeRTOS
Compiler: ARM GCC
Engine Control System: The engine control system will be responsible for controlling the engine and other related functionalities. The system will use a PID algorithm to control the engine's speed and a closed-loop control system to control the fuel injection. The system will communicate with the dashboard system to display information about the engine's status.
Dashboard System: The dashboard system will be responsible for displaying various information about the car. The system will use a 7-segment display to display the speed, fuel level, temperature, and other related information. The system will communicate with the engine control system to retrieve information about the engine's status.
Communication System: The communication system will be responsible for enabling communication with external devices. The system will use CAN and Ethernet protocols to communicate with sensors, GPS, and other cars. The system will store data in the SPI flash memory for future reference.
Conclusion: In conclusion, this project has successfully implemented an automotive software system that can control various functionalities of a car using embedded C programming language, microprocessors, RTOS, SPI, CAN, and Ethernet protocols. The system is divided into three main parts: engine control system, dashboard system, and communication system. The system is designed to be efficient, reliable, and easy to maintain.
