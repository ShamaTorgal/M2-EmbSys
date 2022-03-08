# Test Plan

## Table 1 - High level test plan

| Test ID | Description | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | It shall Display Message in LCD | Power ON | Display Welcome in LCD | Implemented |
| H_02 | It shall measure soil moisture content accurately and precisely | Put sensor probes in soil | Display level of soil moisture| Implemented |
| H_03 | It Shall Display information regarding temp, soil moisture in LCD | Power ON  | Display Temp, soil moisture level | Implemented |
| H_04 | It Shall be able to take input from user when the manual water supply is needed | Use Button / Switch | Turn ON motor | Implemented |
| H_05 | It shall start supplying water whenever less moisture is detected | Less moisture detected | Turn ON motor | Implemented |
| H_06 | It Shall be able to sense the Atmospheric and Soil Temperature | Sense the temperature of soil | Display the temperature | Future |


## Table 2 - low level test plan

| Test ID | Discription | Exp Input | Exp Output | Status (Implemented/Future) |
| --- | --- | --- | --- | --- |
| H_01 | Display moisture status | Whenever Soil moisture probes are put into soil |  Display moisture level | Implemented |
| H_02 | If High resistance in potentiometer is detected |  water content in the soil is less | Display Low Moisture ( Feild is Dry ) | Implemented |
| H_03 | Turn on motor for low moisture level | If low moisture is detected | Motor should be ON  | Implemented |
| H_04 | If low resistance in potentiometer is detected | water content in the soil is more | Display high Moisture ( Feild is wet ) | Implemented |
| H_05 | If low resistance in potentiometer is detected | water content in the soil is more | Motor should be in OFF condition | Implemented |
| H_06 | Turn ON the motor manually for water supply | button/switch should be pressed | Motor ON | Implemented |
| H_07 | Display Temperature | Temperature sensor is ON | Display Atmospheric and soil temp | Future |


