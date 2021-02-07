#include QMK_KEYBOARD_H
#define ___0___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /** BASE Layer */
    [0] = LAYOUT_60_ansi(
        KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,
        LCTL_T(KC_ESC),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,                      KC_RSFT,
        KC_LCTL, KC_LGUI, LALT_T(KC_BSLS), LT(1, KC_SPC), KC_RALT, TO(0), TO(2), TO(3)
    ),

    /** FN Layer */
    [1] = LAYOUT_60_ansi(
        _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___0___,
        _______,          KC_HOME, KC_UP,   KC_END,  ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, _______, ___0___,
        _______,          KC_LEFT, KC_DOWN, KC_RGHT, ___0___, ___0___, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___0___, _______,          _______,
        _______,          KC_MUTE, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___,                   _______,
        _______, _______, _______, _______, _______, _______, _______, RESET
    ),

    /** MOUSE Layer */
    [2] = LAYOUT_60_ansi(
        ___0___,          _______, _______, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI, RGB_TOG,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_SPD, RGB_SPI, RGB_MOD,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_HUD, RGB_HUI,          RGB_M_P,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI,                   RGB_RMOD,
        ___0___, _______, _______, ___0___, _______, _______, _______, _______
    ),

    /** NORMAL ANSI LAYER (GAMES) */
    [3] = LAYOUT_60_ansi(
        KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,     KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_ESC,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,     KC_M,    KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, OSM(MOD_RALT), _______, _______, _______
    ),
};
