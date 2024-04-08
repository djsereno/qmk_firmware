#include QMK_KEYBOARD_H

#define _QWERTY 0

// joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
//   JOYSTICK_AXIS_IN(F6, 0, 512, 1023),
//   JOYSTICK_AXIS_IN(F5, 0, 512, 1023)
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_QWERTY] = LAYOUT_5x6(
        // KC_ESC , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,
        KC_ESC , KC_F1 , KC_F2 , KC_VOLD , KC_VOLU , KC_F5 ,
        KC_F6  , KC_Q  , KC_W  , KC_E    , KC_R    , KC_T  ,
        KC_F7  , KC_A  , KC_S  , KC_D    , KC_F    , KC_G  ,
        KC_F8  , KC_Z  , KC_X  , KC_C    , KC_V    , KC_B  ,
                         KC_F9 , KC_F10            , KC_LALT,

        KC_UP,   KC_RIGHT ,
        KC_LEFT, KC_DOWN  , KC_SPC
    )
};