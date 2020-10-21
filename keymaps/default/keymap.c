#include QMK_KEYBOARD_H

/**
 * Keyboard Lays
 * _BL Base Layer
 */
#define _BL 0 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
    * Base Layer
    * ┌────┐
    * │MUTE│
    * └────┘
    */
	[_BL] = LAYOUT_BASE( 
        KC_MUTE 
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* Volume encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  }
}

bool led_update_user(led_t led_state) {

    return true;
}