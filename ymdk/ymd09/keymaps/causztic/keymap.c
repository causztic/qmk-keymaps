#include QMK_KEYBOARD_H

// TODO: add 
// https://docs.qmk.fm/#/feature_tap_dance?id=example-5-using-tap-dance-for-advanced-mod-tap-and-layer-tap-keys
// for layer swapping

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(LCTL(LGUI(KC_F7)), LCTL(LGUI(KC_F8)), LCTL(LGUI(KC_F9)),
               LCTL(LGUI(KC_F4)), LCTL(LGUI(KC_F5)), LCTL(LGUI(KC_F6)),
               LCTL(LGUI(KC_F1)), LCTL(LGUI(KC_F2)), LCTL(LGUI(KC_F3))),

  [1] = LAYOUT(RGB_RMOD, RGB_VAI, RGB_MOD,
               RGB_HUI, KC_TRNS, RGB_SAI,
               RGB_HUD, RGB_VAD, RGB_SAD),

};
