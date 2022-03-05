# Soil Moisture Meter

####  Table of content
    1. Description
    2. Requirements
         1.1 High Level Requirements 
         1.2 Low Level Requirements
    3. Applications
    4. SWOT Analysis
    5. 4 W's and 1 H 
    
    
    
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


## 6. Structural Design

  ### 6.1 Block Diagram
  
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
   
 

### 6.2 Components Details

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

## 7. Behavioural Design

### 7.1 Flow Chart

  ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/2_Architecture/flowChart.png )

