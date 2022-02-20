# Case Study 2 – Biometric Attendance System based on Finger Print
## Description

*	This Biometric Attendance system based on finger print is to replace the manual procedure of taking attendance. 
* It saves more time when compared to the manual attendance system.
*	This system will be more reliable and efficient.
*	In this project, fingerprint Module and AVR(atmega32) to record attendance. 
*	By using fingerprint sensor, the system will become more secure for the users. 


## Block Diagram
   The Block diagram Contains A Controller, RTC Module, Finger Print module and LCD.
   
   Here the Fingerprint Sensor module is used to authenticate a person or employee’s identity by taking their finger-print input in the system. There are 4 push buttons to enroll, Delete, Increment and Decrement finger-print data. Fingerprint sensor module captures finger’s print image and then converts it into the equivalent template and saves them into its memory as per selected ID by microcontroller. It has Atmega32 microcontroller for controlling all the process of the project.

## Components Details
1.	Finger Print Module: 
Optical Fingerprint reader Sensor Finger Print Sensor (R305) -TTL UART is a finger print sensor module with TTL UART interface. The user can store the finger print data in the module and can configure it in 1:1 or 1: N mode for identifying the person. The finger print module can directly interface with 3v3 or 5v Microcontroller.
2.	Atmega32
 The AVR micro-Controller is based on the advanced Reduced Instruction Set Computer (RISC) architecture. ATmega32 micro-Controller is a low power CMOS technology based controller. Due to RISC architecture AVR microcontroller can execute 1 million of instructions per second if cycle frequency is 1 MHz provided by crystal oscillator.
3.	16x2 LCD Display
RTC modules are simply TIME and DATE remembering systems which have battery setup which in the absence of external power keeps the module running. This keeps the TIME and DATE up to date. So we can have accurate TIME and DATE from RTC module whenever we want.
4.	LM7805
The LM7805 monolithic 3-terminal positive voltage regulators employ internal current-limiting, thermal shutdown and safe-area compensation, making them essentially indestructible. If adequate heat sinking is provided, they can deliver over 1.0A output current. 
5.	Push Button, Resisters, buzzer etc.
## Requirements

* High Level Requirements 

|ID|	Description|
| --- | --- |
| HR01|It should be able to take input from the user|
|HR02	|It should efficiently detect any finger print|
|  HR03	|It should be able to do functions like Enroll, Detect, Increment and Decrement finger-print data.|
 | HR04|	It should display information whenever a finger print is detected, and buzzer should beep once.|

* Low Level Requirements

|ID	|             Description | 
| --- | --- | 
|LR01	| If the user wants to Enroll press key “1”|
|LR02	| If the user wants to reset or delete data from EEPROM press key “2” |
 | LR03| 	If the user wants to decrement or increment the data press key “3” and “4”|
|LR04|	User may download the attendance data by pressing and holding key 4. |




                                                     
