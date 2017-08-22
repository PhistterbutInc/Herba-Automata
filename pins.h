#ifndef PINS_H
#define PINS_H


#if BOARD == 1 //NANO
#define UP_BUTTON A0
#define DOWN_BUTTON A7
#define RIGHT_BUTTON A1
#define LEFT_BUTTON A2
#define SEL_BUTTON A6
#define LIGHT_SENSOR A3
#define DHT_DATA 2
#define HYGRO_DATA 7
#define RELAY_ONE 3
#define RELAY_TWO 4
#define RELAY_THREE 5
#define RELAY_FOUR 6
#define MICRO_MOSI 11
#define MICRO_MISO 12
#define MICRO_SCK 13
#define MICRO_SS 10
#define RTC_SDA A4
#define RTC_SCL A5
#define LCD_SDA A4
#define LCD_SCL A5
#endif

//TODO: add more boards and pins
