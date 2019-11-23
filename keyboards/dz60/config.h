#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x04B3
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0132
#define MANUFACTURER    KBDFans
#define PRODUCT         Reimu KBD
#define DESCRIPTION     Reimu 60% KBD

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B7, D4, B1, B0, B5, B4, D7, D6, B3, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 50


/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 4
#define RGBLIGHT_SAT_STEP 4
#define RGBLIGHT_VAL_STEP 4
#endif

#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_DELAY 16
#define MOUSEKEY_TIME_TO_MAX 20
#define MOUSEKEY_WHEEL_MAX_SPEED 6
#define MOUSEKEY_WHEEL_TIME_TO_MAX 30

#define FORCE_NKRO

/* control combo tapping term default : 200ms*/
#define TAPPING_TERM 100
#define COMBO_TERM 300
#define COMBO_COUNT 1
#define PERMISSIVE_HOLD
//#define COMBO_ALLOW_ACTION_KEYS
#define UNICODE_KEY_WINC KC_LALT
#define UNICODE_KEY_LNX LCTL(LALT(LSFT(KC_U)))

#endif