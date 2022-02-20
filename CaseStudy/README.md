# Case Study 1- Soil Moisture Meter
## Description

*	This Soil Moisture Meter is used for indicating the moisture content of a given soil sample.
*	In Agriculture, crop production will be easier when the farmer monitors the requirement of water at different stages and in different amounts. 
*	Time to time measurement of soil moisture is important.
*	It is an electronic device that measures soil moisture content accurately and precisely.


## Block Diagram
   The Block diagram Contains A Controller, Soil moisture sensor, Temp sensor and LCD Display.
   
  
   ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/CaseStudy/Simple_Embedded_System/Soil_moisture_meter.png)


The digital soil moisture meter circuit is for monitoring the soil moisture content in irrigation farms, is an electronic device that measures soil moisture content accurately and precisely.

## Components Details

1.	Controller: 
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.


2.	Soil moisture Sensor
Soil moisture sensor module is used to detect the moisture of the soil. It measures the volumetric content of water inside the soil and gives us the moisture level as output. The module has both digital and analog outputs and a potentiometer to adjust the threshold level.
3.	Temperature Sensor
Temperature Sensors are crucial in two key categories of smart agriculture — ambient condition monitoring and mechanical asset monitoring. Ice wine harvesting, for example, is known to occur within the narrow temperature window when ambient temperatures first reach between -10°C and -12°C during a harvesting season.
4.	LCD Display


# Case Study 2 – Biometric Attendance System based on Finger Print
## Description

*	This Biometric Attendance system based on finger print is to replace the manual procedure of taking attendance. 
* It saves more time when compared to the manual attendance system.
*	This system will be more reliable and efficient.
*	In this project, fingerprint Module and AVR(atmega32) to record attendance. 
*	By using fingerprint sensor, the system will become more secure for the users. 


## Block Diagram
   The Block diagram Contains A Controller, RTC Module, Finger Print module and LCD.
   
   ![Block Diagram2](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/CaseStudy/Complex_Embedded_System/AttendanceSym.png)
   
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



                                                     


