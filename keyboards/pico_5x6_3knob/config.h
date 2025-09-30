#pragma once

#include "config_common.h"

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

/* Pin config */
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6 }
#define MATRIX_COL_PINS { GP7, GP8, GP9, GP10, GP11, GP12 }
#define DIODE_DIRECTION COL2ROW

/* VIA */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

/* Encoder legacy setup */
#define ENCODERS_PAD_A { GP13, GP15, GP17 }
#define ENCODERS_PAD_B { GP14, GP16, GP18 }
#define ENCODER_RESOLUTION 4
