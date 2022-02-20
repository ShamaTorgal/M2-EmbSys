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

## Requirements

* High Level Requirements 

|ID|	Description|
| --- | --- |
|HR01	|It should measure soil moisture content accurately and precisely|
|HR02	|It Should be able to sense the Atmospheric and Soil Temperature|
|HR03	|It Should measure Soil pH level|
|HR04	|It Should Display information regarding temp, soil moisture, pH level|
	
* Low Level Requirements

|ID |           Description |          Status|
| --- | --- | --- |
|LH01	| Whenever Soil moisture probes are put into soil |  Display moisture level|
|LH02	| Temperature sensor                 |  Display Atmospheric and soil temp.  |

## Test case

|Test ID |	Description	Exp Output|
| --- | --- |
|T01|	Power ON	Display Welcome in LCD|
|T02	|Soil moisture sensor probes are kept in soil	Display Moisture level of the sample soil|




