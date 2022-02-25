# Architecture 
### Table of content

    1. Strctural Design
        1.1 Block Diagram
        1.2 Components details
        
    2. Behavioural Design
        2.1 Flow chart
     
     
## 1. Structural Design

  ### Block Diagram

   The Block diagram Contains a Controller, Potentiometer (instead of Soil moisture sensor), Temperature sensor, motor and LCD Display.
   
  
   ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/2_Architecture/Block%20Diagram.png)


The digital soil moisture meter circuit is for monitoring the soil moisture content in irrigation farms, is an electronic device that measures soil moisture content accurately and precisely.
*	This Soil Moisture Meter is used for indicating the moisture content of a given soil sample.
*	Soil Moisture Sensors also enable us to develop smart agricultural systems that respond to environmental conditions automatically.
*	In Agriculture, crop production will be easier when the farmer monitors the requirement of water at different stages and in different amounts. 
*	Time to time measurement of soil moisture is important.
*	It is an electronic device that measures soil moisture content accurately and precisely.

### Components Details

1.	Controller: 
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.


2.	Soil moisture Sensor - Potentiometer
   Soil moisture sensor module is used to detect the moisture of the soil. It measures the volumetric content of water inside the soil and gives us the moisture level as output. The module has both digital and analog outputs and a potentiometer to adjust the threshold level.
   Soil moisture sensor uses the resistive working principle, which makes it susceptible to corrosion over time. 
   

3.	Temperature Sensor
Temperature Sensors are crucial in two key categories of smart agriculture — ambient condition monitoring and mechanical asset monitoring. Ice wine harvesting, for example, is known to occur within the narrow temperature window when ambient temperatures first reach between -10°C and -12°C during a harvesting season.

4. User Interface - Button
The button is used as a user input. It is used when the user wants to supply the water irrespective of soil moisture condition. 

5.	LCD Display
LCD is used to Display the Moisture conditions of the soil.

## 2. Behavioural Design

### Flow Chart
