#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

int button  = 8,Pump = 9;
int Moisture_sensor = A0;
int value , flag = 0;
void setup() {
lcd.begin(16,2);//initialize LCD 16X2
lcd.setCursor(0,0);
lcd.print("    WEL-COME    ");
delay(1000);
pinMode(button , INPUT_PULLUP);//Set input pin
pinMode(Pump , OUTPUT); // set output pin
digitalWrite(Pump , LOW);// set pump OFF
}

void loop() {
  value = analogRead(Moisture_sensor); // Read analog value from the sensor(POT)
  float Moisture_level = ( value / 10.23); // convert it into percentage 
  lcd.clear(); // clear LCD
  lcd.setCursor(0,0);
  lcd.print("Moisture Level");
  lcd.setCursor(0,1);
  lcd.print(String(Moisture_level) +" %"); // Display Moisture status on LCD
  delay(1000);
  // check for field wet 
  if(Moisture_level > 75) // if field is wet more then 75 % set flag 
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("  FIELD IS WET  "); // display field status on LCD
    flag = 1;
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("  FIELD IS DRY  ");
    flag = 0;
  }
  //Check for manual control of the Pump
  if(digitalRead(button)== 0)
  {
    flag != flag; // Toggle state of flag for each press
    delay(1000);
  }
   if(flag == 0)
    {
      digitalWrite(Pump , LOW); // Switch OFF pump
    }
    else
    {
      digitalWrite(Pump , HIGH); // Switch ON Pump
    }
  delay(1000);
}
