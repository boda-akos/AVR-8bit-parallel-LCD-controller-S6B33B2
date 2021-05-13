
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
