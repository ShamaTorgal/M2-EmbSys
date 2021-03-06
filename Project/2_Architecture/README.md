# Architecture 
### Table of content

    1. Strctural Design
        1.1 Block Diagram
        1.2 Components details
             a. Controller
             b. Sensors
                - Soil moisture Sensor (Potentiometer)
                - Temperature Sensor
             c. Actuators - Motor
             d. GPIO - Button
             e. LCD Display
        
    2. Behavioural Design
        2.1 Flow chart
     
     
## 1. Structural Design

  ### 1.1 Block Diagram
  
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
   
 

### 1.2 Components Details

#### a. Controller: 
Arduino Uno is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.


#### b. Sensors
* Soil moisture Sensor - Potentiometer
   Soil moisture sensor module is used to detect the moisture of the soil. It measures the volumetric content of water inside the soil and gives us the moisture level as output.    The module has both digital and analog outputs and a potentiometer to adjust the threshold level.
   Soil moisture sensor uses the resistive working principle, which makes it susceptible to corrosion over time. 
   

* Temperature Sensor
Temperature Sensors are crucial in two key categories of smart agriculture ??? ambient condition monitoring and mechanical asset monitoring. Ice wine harvesting, for example, is known to occur within the narrow temperature window when ambient temperatures first reach between -10??C and -12??C during a harvesting season.

#### c. Actuators
* Motor - For supplying water whenever soil moisture is less.

#### d. GPIO

* User Interface ( Button / switch ) : The button is used as a user input. It is used when the user wants to supply the water irrespective of soil moisture condition. 

#### e. LCD Display
* LCD is used to Display the Moisture conditions of the soil.

## 2. Behavioural Design

### 2.1 Flow Chart

  ![Block Diagram](https://github.com/ShamaTorgal/M2-EmbSys/blob/main/Project/2_Architecture/flowChart.png )
