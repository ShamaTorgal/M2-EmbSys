# Case Study 1- Soil Moisture Meter
## Description

*	This Soil Moisture Meter is used for indicating the moisture content of a given soil sample.
*	In Agriculture, crop production will be easier when the farmer monitors the requirement of water at different stages and in different amounts. 
*	Time to time measurement of soil moisture is important.
*	It is an electronic device that measures soil moisture content accurately and precisely.


## Block Diagram
   The Block diagram Contains A Controller, Soil moisture sensor, Temp sensor and LCD Display.
   ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/CaseStudy/Simple_CaseStudy/Soil%20moisture%20meter%20(2).png)


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

| ID |	Description |
| --- | --- |
| HR01 |	It should measure soil moisture content accurately and precisely|
| HR02 |	It Should be able to sense the Atmospheric and Soil Temperature|
| HR03 | It Should measure Soil pH level| 
| HR04 |It Should Display information regarding temp, soil moisture, pH level.|
	
Low Level Requirements
ID	                                           Description                       -   Status
LH01	Whenever Soil moisture probes are put into soil -  Display moisture level
LH02	Temperature sensor                                                  -  Display Atmospheric and soil temp.  

Test case
Test ID	Description	Exp Output
T01	Power ON	Display Welcome in LCD
T02	Soil moisture sensor probes are kept in soil	Display Moisture level of the sample soil



