#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H,
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL
    )
};

/* Encoder example */
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {  // encoder 1
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {  // encoder 2
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 2) {  // encoder 3
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
}
