#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 1;
static const uint8_t SCL = 2;

// Default SPI will be mapped to Radio
static const uint8_t MISO = 10;
static const uint8_t SCK = 9;
static const uint8_t MOSI = 5;
static const uint8_t SS = 4;

// #define SPI_MOSI                    (11)
// #define SPI_SCK                     (14)
// #define SPI_MISO                    (2)
// #define SPI_CS                      (13)

// #define SDCARD_CS                   SPI_CS

#endif /* Pins_Arduino_h */