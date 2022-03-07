# Test Plan
## Table 1 - High level test plan
| Test ID | Description | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | It shall measure soil moisture content accurately and precisely | Enter key '1' and type date | Display the day | Implemented |
| H_02 | It Shall be able to sense the Atmospheric and Soil Temperature | Enter key '2' and type month, year | Print the days of month | Implemented |
| H_03 |It Shall Display information regarding temp, soil moisture in LCD |  Enter key '3' and type note | Save the Note | Implemented |
| H_04 |It Shall be able to take input from user when the manual water supply is needed | Press key 's'  | Show the Note | Implemented |
| H_05 | It shall start supplying water whenever less moisture is detected | Press key 'f' | Print the festivals | Future |

## Table 2 - low level test plan
| Test ID | Discription | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | Whenever Soil moisture probes are put into soil -  Display moisture level | Key '1' is pressed  | Find Out the day for given date | Implemented |
| H_02 | Temperature sensor is ON - Display Atmospheric and soil temp. | Key '2' is pressed  | Print all the days according to given month and year | Implemented |
| H_03 |If High resistance in potentiometer is detedted ( water content in the soil is less) -  Display Low Moisture ( Dry )  | Key '3' is pressed  | Add note to the perticular date | Implemented |
| H_04 | If low moisture is detected - Motor ON condition  | Key '4' is pressed  | Exit | Implemented |
| H_05 | Show festivals | Key '5' is pressed  | Show festivals | Future |
| H_06 | If low resistance in potentiometer is detedted  ( water content in the soil is more) - Display high Moisture ( wet ) | Key '6' is pressed  | TO DO list | Future |


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
