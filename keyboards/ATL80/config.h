#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x414A
#define PRODUCT_ID      0x0017
#define DEVICE_VER      0x0001
#define MANUFACTURER    ATL80
#define PRODUCT         ATL80
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, D1, D2, D3, F1, F0 }
#define MATRIX_COL_PINS { B2, D0, B3, F4, F5, F6, F7, C7, C6, B6, B5, B4, D7, D6, D5 }
#define UNUSED_PINS

/* encoder pins */
#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B0 }
#define ENCODER_RESOLUTION 4

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define FORCE_NKRO

#define RGB_DI_PIN E6
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS

#define RGBLIGHT_HUE_STEP 8 //NEW
#define RGBLIGHT_SAT_STEP 8 //NEW
#define RGBLIGHT_VAL_STEP 8 //NEW
#define RGBLIGHT_LAYERS //NEW
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF //NEW

#define RGBLED_NUM 130
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LIMIT_VAL 160
#endif

#endif