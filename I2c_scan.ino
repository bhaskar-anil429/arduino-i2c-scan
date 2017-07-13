# arduino-i2c-scan
#include <Wire.h>

void setup() {
 Serial.begin (9600);
 Serial.println ();
 
  Serial.println ("I2C scanner. Scanning ...");
  byte count = 0;
  
  Wire.begin();
  for (byte i = 1; i < 120; i++)
  {
    Wire.beginTransmission (i);
    if (Wire.endTransmission () == 0)
      {
      Serial.print ("Found address: ");
      Serial.print (i, DEC);
      Serial.print (" (0x");
      Serial.print (i, HEX);
      Serial.println (")");
      count++;
      delay (1);  
      } 
  } 
  Serial.print ("There is/are ");
  Serial.print (count, DEC);
  Serial.println (" device(s).");
}  

void loop() {
    }
