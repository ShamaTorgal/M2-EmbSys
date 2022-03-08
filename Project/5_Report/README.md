# Soil Moisture Meter

####  Table of Content
    1. Description
    2. Requirements
         1.1 High Level Requirements 
         1.2 Low Level Requirements
    3. Applications
    4. SWOT Analysis
    5. 4 W's and 1 H 
    6. Badges
    7. Structural Design
         7.1 Block Diagram
         7.2 Components Details
	       a. Controller
           b. Sensors
               - Soil moisture Sensor ( Potentiometer )
               - Temperature Sensor
           c. Actuators - Motor
           d. GPIO - Button/Switch
           e. LCD Display
    8. Behavioural Design
         7.1 Flow Chart
    9. Implementation
         8.1 Instructions to execute
         8.2 File Details 
    10. Test Plan
         9.1   Table 1 - High level test plan
	     9.2   Table 2 - low level test plan
    11. Output
       -Output in Arduino IDE after verifying code.
       -Schematic Design
       -Displaying 'WELCOME' in LCD after Power-ON.
       -Less moisture is detected and motor is ON.
       -Feild is Wet
       -More moisture is detected and motor is OFF.
       -Feild is Dry
    
## 1. Description
* Soil Moisture Sensors also enable us to develop smart agricultural systems that respond to environmental conditions automatically.
*	This Soil Moisture Meter is used for indicating the moisture content of a given soil sample.
*	In Agriculture, crop production will be easier when the farmer monitors the requirement of water at different stages and in different amounts. 
*	Time to time measurement of soil moisture is important.
*	It is an electronic device that measures soil moisture content accurately and precisely.




## 2. Requirements

### 2.1 High Level Requirements 

|ID|	Description|
| --- | --- |
|HR01	|It shall measure soil moisture content accurately and precisely|
|HR02	|It Shall be able to sense the Atmospheric and Soil Temperature|
|HR03	|It Shall Display information regarding temp, soil moisture in LCD|
|HR04	|It Shall be able to take input from user when the manual water supply is needed|
|HR05   | It shall start supplying water whenever less moisture is detected| 
	
### 2.2 Low Level Requirements

|ID |           Description |        
| --- | --- | 
|LH01	| Whenever Soil moisture probes are put into soil -  Display moisture level |
|LH02	| Temperature sensor is ON - Display Atmospheric and soil temp.  |
|LH03 |If High resistance in potentiometer is detedted ( water content in the soil is less) -  Display Low Moisture ( Dry ) |
|LH04| If low moisture is detected - Motor ON condition |
|LH05 |If low resistance in potentiometer is detedted  ( water content in the soil is more) - Display high Moisture ( wet )  |


## 3. Applications
* Used in Agriculture.
* Landscape irrigation.
* Household Gardening.
* Research and Forecasting.
* Irrigation for Sporting Fields.

## 4. SWOT Analysis

![Swot](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/1_Requirements/Swot%20(2).png)


## 5. 4 W's and 1 H
#### Who
* The Agricutural platforms, farmers, irrigation platform.
#### What
* To get infomation regarding soil moisture level.
#### When
* Whenever there is any necessity to check the soil moisture while irrigation.
#### Where
* Agriculture, irrigtion, gardening.
#### How
* By using the Soil moisture meter and putting the probes of sensor in the sample soil.


## 6. Badges

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f7690c764e604e879e0e8729ed12ace3)](https://www.codacy.com/gh/ShamaTorgal/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ShamaTorgal/M2-EmbSys&amp;utm_campaign=Badge_Grade)


## 7. Structural Design

  ### 7.1 Block Diagram
  
 The Block diagram Contains a Controller, Potentiometer (instead of Soil moisture sensor), Temperature sensor, motor and LCD Display.
* In Soil moisture sensor a electrical current is sent from one probe to the other, which allows the sensor to measure the resistance of the soil between them. Here Potentiometer is used as a Soil moisture sensor. 
* When the water content in the soil is high, it has a higher electrical conductivity (water is a good conductor of electricity). Hence, a lower resistance reading is obtained which indicates high soil moisture. 
* When the water content in the soil is low, it has poorer electrical conductivity. Hence, a higher resistance reading is obtained, which indicates low soil moisture.
  
  
   ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/2_Architecture/Block%20Diagram.png)
   
* This Soil Moisture Meter is used for indicating the moisture content of a given soil sample.
* Soil Moisture Sensors also enable us to develop smart agricultural systems that respond to environmental conditions automatically.
* In Agriculture, crop production will be easier when the farmer monitors the requirement of water at different stages and in different amounts. 
* Time to time measurement of soil moisture is important.
* It is an electronic device that measures soil moisture content accurately and precisely.
   
 

### 7.2 Components Details

#### Controller: 
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.


#### Sensors
* Soil moisture Sensor - Potentiometer
   Soil moisture sensor module is used to detect the moisture of the soil. It measures the volumetric content of water inside the soil and gives us the moisture level as output.    The module has both digital and analog outputs and a potentiometer to adjust the threshold level.
   Soil moisture sensor uses the resistive working principle, which makes it susceptible to corrosion over time. 
   

* Temperature Sensor
Temperature Sensors are crucial in two key categories of smart agriculture — ambient condition monitoring and mechanical asset monitoring. Ice wine harvesting, for example, is known to occur within the narrow temperature window when ambient temperatures first reach between -10°C and -12°C during a harvesting season.

#### Actuators
* Motor - For supplying water whenever soil moisture is less.

#### GPIO

* User Interface - Button
The button is used as a user input. It is used when the user wants to supply the water irrespective of soil moisture condition. 

#### LCD Display
* LCD is used to Display the Moisture conditions of the soil.

## 8. Behavioural Design

### 8.1 Flow Chart

  ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/2_Architecture/flowChart.png )

## 9. Implementation

This folder conatins all the coding files for proper execution of program.

### 9.1 Instructions to execute
* Clone my repository.
* Go to 3_Implementation folder.
* Download the .ino, simulation, .elf and .hex files.
* Make sure your system meets all software requirements.
* Open .ino file with Arduino IDE. Turn on compatibility and verify the code.
* After this we will get a path where we can get .hex and .elf files.
* Open simulation file with SimulIDE.
* Right click on the circuit and select load firmware. 
* To load the firmware select .hex file which was generated.
* Save the circuit and run. 

### 9.2 File Details : 

| File name | File Extension | Description |
| --- | --- | --- |
| soil_moisture_meter | .ino | Main code of the project. ( Open with Arduino IDE )| 
| soil_moisture_meter.ino | .hex |Hex file that needs to be loaded in Simulation circuit | 
|soil_moisture_meter_simulation|.simu | this Contains the simulation schematic circuit. ( open with SimulIDE ) |


## 10. Test Plan


### 10.1 Table 1 - High level test plan

| Test ID | Description | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | It shall Display Message in LCD | Power ON | Display Welcome in LCD | Implemented |
| H_02 | It shall measure soil moisture content accurately and precisely | Put sensor probes in soil | Display level of soil moisture| Implemented |
| H_03 | It Shall Display information regarding temp, soil moisture in LCD | Power ON  | Display Temp, soil moisture level | Implemented |
| H_04 | It Shall be able to take input from user when the manual water supply is needed | Use Button / Switch | Turn ON motor | Implemented |
| H_05 | It shall start supplying water whenever less moisture is detected | Less moisture detected | Turn ON motor | Implemented |
| H_06 | It Shall be able to sense the Atmospheric and Soil Temperature | Sense the temperature of soil | Display the temperature | Future |


### 10.2 Table 2 - low level test plan

| Test ID | Discription | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | Display moisture status | Whenever Soil moisture probes are put into soil |  Display moisture level | Implemented |
| H_02 | If High resistance in potentiometer is detected |  water content in the soil is less | Display Low Moisture ( Feild is Dry ) | Implemented |
| H_03 | Turn on motor for low moisture level | If low moisture is detected | Motor ON  | Implemented |
| H_04 | If low resistance in potentiometer is detected | water content in the soil is more | Display high Moisture ( Feild is wet ) | Implemented |
| H_05 | If low resistance in potentiometer is detected | water content in the soil is more | Motor should be in OFF condition | Implemented |
| H_06 | Turn ON the motor manually for water supply | button/switch should be pressed | Motor ON | Implemented |
| H_07 | Display Temperature | Temperature sensor is ON | Display Atmospheric and soil temp | Future |




## 11. Output

### Output in Arduino IDE after verifying code.

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Output%20in%20arduino%20IDE.png)  

### Schematic Design

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Schematic.png)  

### Displaying 'WELCOME' in LCD after Power-ON.

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Display%20welcome.png)  

### Less moisture is detected and motor is ON.

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/low%20moisture%20level.png)  

### Feild is Wet

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Feild%20is%20dry.png)  

### More moisture is detected and motor is OFF.

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/high%20moisture%20level.png)  

### Feild is Dry

![MakeRun](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Field%20is%20wet.png)  

