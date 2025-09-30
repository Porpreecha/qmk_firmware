#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER "YourName"
#define PRODUCT      "POR_QA"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* Pin mapping */
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20 }

#define DIODE_DIRECTION COL2ROW

/* WS2812 RGB */
#define WS2812_DI_PIN GP21
#define RGBLIGHT_LED_COUNT 90
