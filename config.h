#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER	    0x0001
#define MANUFACTURER    LN Engineering Lab
#define PRODUCT         Unidock
#define DESCRIPTION     Unidock Controller

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* key matrix pins */
#define MATRIX_ROW_PINS { C7 }
#define MATRIX_COL_PINS { C6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Encoders */
#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B5 }
#define ENCODER_RESOLUTION 4