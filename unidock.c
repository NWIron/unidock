#include "unidock.h"

/**
 * Init Keyboard Matrix
 */
void matrix_init_kb(void) {
    matrix_init_user();
    led_init_ports();
}

void led_init_ports(void) {
    setPinOutput(F4);
    writePinHigh(F4);
    setPinOutput(F5);
    writePinHigh(F5);
    setPinOutput(F6);
    writePinHigh(F6);
}

/**
 * LED For Num Lock & Caps Lock & Scroll Lock
 */
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        // writePin sets the pin high for 1 and low for 0.
        // In this example the pins are inverted, setting
        // it low/0 turns it on, and high/1 turns the LED off.
        // This behavior depends on whether the LED is between the pin
        // and VCC or the pin and GND.
        writePin(F4, !led_state.num_lock);
        writePin(F5, !led_state.caps_lock);
        writePin(F6, !led_state.scroll_lock);
    }
    
    return res;
}
