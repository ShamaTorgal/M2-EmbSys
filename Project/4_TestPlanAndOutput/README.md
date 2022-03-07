# Test Plan

## Table 1 - High level test plan

| Test ID | Description | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | It shall Display Message in LCD | Power ON | Display Welcome in LCD | Implemented |
| H_01 | It shall measure soil moisture content accurately and precisely | Put sensor probes in soil | Display Status of soil temp. | Implemented |
| H_02 | It Shall Display information regarding temp, soil moisture in LCD | Power ON  | Display Temp, soil moisture level | Implemented |
| H_03 | It Shall be able to take input from user when the manual water supply is needed | Use Button / Switch | Turn ON motor | Implemented |
| H_04 | It shall start supplying water whenever less moisture is detected | Less moisture detected | Turn ON motor | Implemented |
| H_05 | It Shall be able to sense the Atmospheric and Soil Temperature | Sense the temperature of soil | Display the temperature | Future |


## Table 2 - low level test plan
| Test ID | Discription | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | Display moisture status | Whenever Soil moisture probes are put into soil |  Display moisture level | Implemented |
| H_02 | Temperature sensor is ON - Display Atmospheric and soil temp. | Key '2' is pressed  | Print all the days according to given month and year | Implemented |
| H_03 | If High resistance in potentiometer is detedted |  water content in the soil is less | Display Low Moisture ( Dry ) | Implemented |
| H_04 | Turn on motor for low moisture level | If low moisture is detected | Motor ON  | Implemented |
| H_06 | If low resistance in potentiometer is detedted | water content in the soil is more | Display high Moisture ( wet ) | Future |


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
