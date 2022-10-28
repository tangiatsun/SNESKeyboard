#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ ^ │ L │ R │ X │
     * ├───┼───┼───┼───┤
     * │ < │ > │ Y │ A │
     * ├───┼───┼───┼───┤
     * │ v │ T │ E │ B │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x4(KC_UP, KC_L, KC_R, KC_X, KC_LEFT, KC_RIGHT, KC_Y, KC_A, KC_DOWN, KC_T, KC_E, KC_B)};
