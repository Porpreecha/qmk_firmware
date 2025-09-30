#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5050
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Custom"
#define PRODUCT         "por_design"

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS { GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP22 }
#define DIODE_DIRECTION COL2ROW

/* WS2812 RGB LED */
#define WS2812_DI_PIN GP0
#define WS2812_PIO_USE_PIO1
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_SLEEP
