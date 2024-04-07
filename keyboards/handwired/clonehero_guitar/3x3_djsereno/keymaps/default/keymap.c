#include QMK_KEYBOARD_H

#define _QWERTY 0

// joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
//   JOYSTICK_AXIS_IN(F6, 0, 512, 1023),
//   JOYSTICK_AXIS_IN(F5, 0, 512, 1023)
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_QWERTY] = LAYOUT_3x3(
        KC_A,       KC_S,      KC_J,   
        KC_ENTER,   KC_L,      KC_K,   
        KC_UP,      KC_DOWN,   KC_H   
    )
};