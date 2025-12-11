#include "display_nokia5110.h"
#if (LCD_TYPE == LCD_TYPE_NOKIA5110)
Adafruit_PCD8544 nokiaLcd(LCD_PIN_SCLK, LCD_PIN_DIN, LCD_PIN_DC, LCD_PIN_CS, LCD_PIN_RST);
static const uint8_t CHAR_W = 6;
static const uint8_t CHAR_H = 8;
void lcd_init(){ nokiaLcd.begin(); nokiaLcd.setContrast(55); nokiaLcd.clearDisplay(); nokiaLcd.display();}
void lcd_clear(){ nokiaLcd.clearDisplay();}
void lcd_setCursor(uint8_t col,uint8_t row){ nokiaLcd.setCursor(col*CHAR_W,row*CHAR_H);}
void lcd_print(const char*s){ nokiaLcd.setTextColor(BLACK); nokiaLcd.setTextSize(1); nokiaLcd.print(s);}
void lcd_print(const __FlashStringHelper*s){ nokiaLcd.setTextColor(BLACK); nokiaLcd.setTextSize(1); nokiaLcd.print(s);}
void lcd_update(){ nokiaLcd.display();}
#endif
