#pragma once
#include "config.h"
#if (LCD_TYPE == LCD_TYPE_NOKIA5110)
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#define LCD_PIN_SCLK 13
#define LCD_PIN_DIN  11
#define LCD_PIN_DC   6
#define LCD_PIN_CS   7
#define LCD_PIN_RST  8
extern Adafruit_PCD8544 nokiaLcd;
void lcd_init();
void lcd_clear();
void lcd_setCursor(uint8_t col, uint8_t row);
void lcd_print(const char *s);
void lcd_print(const __FlashStringHelper *s);
void lcd_update();
#endif
