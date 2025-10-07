/*
Tests string alignment

Normally strings are printed relative to the top left corner but this can be
changed with the setTextDatum() function. The library has #defines for:

TL_DATUM = Top left
TC_DATUM = Top centre
TR_DATUM = Top right
ML_DATUM = Middle left
MC_DATUM = Middle centre
MR_DATUM = Middle right
BL_DATUM = Bottom left
BC_DATUM = Bottom centre
BR_DATUM = Bottom right

 
 Needs fonts 2, 4, 6, 7 and 8

 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
 */

#include <TFT_eSPI.h> // Hardware-specific library
#include <SPI.h>

#define VRX_PIN 39
#define VRY_PIN 36

TFT_eSPI tft = TFT_eSPI();       // Invoke custom library
int valueX = 0;
int valueY = 0;
String result = "";
unsigned long drawTime = 0;

void setup(void) {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextDatum(TL_DATUM);
}

void loop() {
  valueX = analogRead(VRX_PIN);
  valueY = analogRead(VRY_PIN);
  String strValueX = String(valueX);
  String strValueY = String(valueY);
  Serial.println(strValueX);
  Serial.println(strValueY);
  
  result = strValueX + ", " + strValueY;
  tft.drawString(result,0,0,2);
}