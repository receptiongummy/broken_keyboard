
#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    SHAHNETWORK
#define PRODUCT         Broken_Keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins left and right */
#define MATRIX_ROW_PINS { B15, B14, B13, B12, A14 }
#define MATRIX_COL_PINS { A8, C9, C8, C7, C6, C13, C14 }
#define MATRIX_ROW_PINS_RIGHT { B13, B14, B15, C6, C7 }
#define MATRIX_COL_PINS_RIGHT { B4, B3, D2, A8, C9, C8, B12 }

#define DIODE_DIRECTION COL2ROW

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

#define EE_HANDS
// #define MASTER_LEFT // default
 //#define MASTER_RIGHT


/* split communication using serial USART */
#define SERIAL_USART_FULL_DUPLEX   
#define SERIAL_USART_TX_PIN A9    
#define SERIAL_USART_RX_PIN A10   
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud
#define SERIAL_USART_DRIVER SD1    
#define SERIAL_USART_TX_PAL_MODE 7 
#define SERIAL_USART_RX_PAL_MODE 7 
#define SERIAL_USART_TIMEOUT 20   

/* OLED */
#ifdef OLED_ENABLE
#define I2C1_SCL_PIN        B6
#define I2C1_SDA_PIN        B7
#define OLED_BRIGHTNESS 32 // 128 default?
#define OLED_TIMEOUT 500 //ms
#endif
