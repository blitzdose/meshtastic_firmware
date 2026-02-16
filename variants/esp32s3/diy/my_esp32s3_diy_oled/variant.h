#define HAS_GPS 0
#define GPS_RX_PIN 44
#define GPS_TX_PIN 43

#define HAS_SCREEN 0
// #define HAS_SDCARD
// #define SDCARD_USE_SPI1

#define USE_SSD1306

#define I2C_SDA 2 // 1 // I2C pins for this board
#define I2C_SCL 1 // 2

// #define LED_PIN 38     // This is a RGB LED not a standard LED
#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 48                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

#define BUTTON_PIN 13 // This is the BOOT button
#define BUTTON_NEED_PULLUP

#define BATTERY_PIN 3 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
#define ADC_CHANNEL ADC1_GPIO3_CHANNEL
#define BATTERY_SENSE_SAMPLES 30 // Set the number of samples, It has an effect of increasing sensitivity.
#define ADC_MULTIPLIER 2.14588
#define CELL_TYPE_LION // same curve for liion/lipo
#define NUM_CELLS 1

// #define USE_RF95 // RFM95/SX127x
// #define USE_SX1262
#define USE_SX1262

#define LORA_MISO 10
#define LORA_SCK 11
#define LORA_MOSI 5
#define LORA_CS 4

#define LORA_RESET 12
#define LORA_DIO1 6

#ifdef USE_SX1262
#define SX126X_CS LORA_CS // FIXME - we really should define LORA_CS instead
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 9
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN 7
#define SX126X_TXEN 8
#endif

#ifdef USE_SX1280
#define SX128X_CS LORA_CS
#define SX128X_DIO1 LORA_DIO1
#define SX128X_BUSY 15
#define SX128X_RESET LORA_RESET
#endif

// #define USE_EINK
/*
 * eink display pins
 */
// #define PIN_EINK_CS     13
// #define PIN_EINK_BUSY   2
// #define PIN_EINK_DC     1
// #define PIN_EINK_RES    (-1)
// #define PIN_EINK_SCLK   5
// #define PIN_EINK_MOSI   6