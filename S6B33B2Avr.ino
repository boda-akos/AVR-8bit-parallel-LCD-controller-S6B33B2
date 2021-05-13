//PORTD data bus RX=0, TX=1, 2,3,4,5,6,7 Arduino Uno pins. A3 is reset but reset on 3.3V seems to work. TFT_WR 10, TFT_RS 9, TFT_CS 8 may be changed in H file.
//Use level shifters if your Arduino is not 3.3V (8Mhz) type.

#include "Adafruit_TFTLCD_8bit_AVR.h" 

Adafruit_TFTLCD_8bit_AVR tft;

int color[]={0xf100,0x07e0,0x001f,0xffff,YELLOW,MAGENTA};  //bl,gn,rd,wh

void setup()
{    
//Serial.begin(9600);

tft.begin();
tft.setRotation(1);
tft.setCursor(10,10); 
tft.setTextColor(WHITE,BLACK);tft.setTextWrap(0); 
tft.fillScreen(BLACK); tft.setTextSize(4); 
tft.setCursor(50,6);tft.print("Test OK"); 
}

void loop()
{
 
}
