// #include<Arduino.h>
// #include<U8g2lib.h>
// U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(
//   U8G2_R0,
//   21,
//   22,
//   U8X8_PIN_NONE
// );
// void setup() {
//   // put your setup code here, to run once:
//   u8g2.setBusClock(800000);
//   u8g2.begin();
//   u8g2.enableUTF8Print();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   u8g2.clearBuffer();
//   u8g2.setFont(u8g2_font_ncenB12_tr);
//   u8g2.drawStr(0,6,"11111");
//   u8g2.sendBuffer();
// }

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

  Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
void setup(){


  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();

  display.setTextSize(2); //选择字号
  display.setTextColor(WHITE);  //字体颜色
  display.setCursor(0,0);
  display.print("1234567890");
  display.setCursor(0,16);
  display.print("1234567890");
  display.setCursor(0,32);
  display.print("1234567890");
    display.setCursor(0,48);
  display.print("1234567890");
  display.display();


}


void loop(){

  for(int i=0;i<=128-16;i+=2){

    display.clearDisplay();
    display.setCursor(i,0);
    display.print("1");
    display.display();
    if(i<=30&&i>=0||i<=128-16&&i>=128-16-30){
      i+=2;
    }else{
      i+=1;
      delay(5);
    }
    //delay(1);
  }

}