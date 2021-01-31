#include QMK_KEYBOARD_H
#define ___0___ KC_NO
#define MS_UP KC_MS_UP          // Mouse Cursor Up
#define MS_DO KC_MS_DOWN        // Mouse Cursor Down
#define MS_LE KC_MS_LEFT        // Mouse Cursor Left
#define MS_RI KC_MS_RIGHT       // Mouse Cursor Right
#define MS_B1 KC_MS_BTN1        // Mouse Button 1
#define MS_B2 KC_MS_BTN2        // Mouse Button 2
#define MS_B3 KC_MS_BTN3        // Mouse Button 3
#define MS_B4 KC_MS_BTN4        // Mouse Button 4
#define MS_B5 KC_MS_BTN5        // Mouse Button 5
#define MS_WU KC_MS_WH_UP       // Mouse Button 4
#define MS_WD KC_MS_WH_DOWN     // Mouse Button 5

// Tap Dance declarations
enum { TD01, TD02, TD03, TD04, TD05, TD06, TD07, TD08, TD09, TD10, TD11, TD12, TDSL, TDPP, TDPR, TDNT };

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD01] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
    [TD02] = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_F2),
    [TD03] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_F3),
    [TD04] = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_F4),
    [TD05] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_F5),
    [TD06] = ACTION_TAP_DANCE_DOUBLE(KC_6, KC_F6),
    [TD07] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_F7),
    [TD08] = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_F8),
    [TD09] = ACTION_TAP_DANCE_DOUBLE(KC_9, KC_F9),
    [TD10] = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_F10),
    [TD11] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_F11),
    [TD12] = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_F12),
    [TDSL] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [TDPP] = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_PSCR),
    [TDPR] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_MPRV, 3),
    [TDNT] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_MNXT, 2)
};

// Add tap dance item in place of a key code


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /** BASE Layer */
    [0] = LAYOUT_60_ansi(
        KC_GRV,    TD(TD01), TD(TD02), TD(TD03), TD(TD04), TD(TD05), TD(TD06),  TD(TD07), TD(TD08), TD(TD09), TD(TD10), TD(TD11), TD(TD12), KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,
        LCTL_T(KC_ESC),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT,  TD(TDSL),                      KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, LT(1, KC_SPC), KC_RALT, TD(TDPR), TD(TDPP), TD(TDNT)
    ),

    /** FN Layer */
    [1] = LAYOUT_60_ansi(
        _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___0___,
        _______,          KC_HOME, KC_UP,   KC_END,  ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, _______, ___0___,
        _______,          KC_LEFT, KC_DOWN, KC_RGHT, ___0___, ___0___, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___0___, _______,          _______,
        _______,          KC_MUTE, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, KC_BSLS,                   _______,
        _______, _______, _______, _______, _______, _______, _______, RESET
    ),

    /** MOUSE Layer */
    [2] = LAYOUT_60_ansi(
        ___0___,          _______, _______, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI, RGB_TOG,
        ___0___,          ___0___, ___0___, MS_UP,   ___0___, ___0___, ___0___, MS_B4,   MS_B5,   ___0___, ___0___, RGB_SPD, RGB_SPI, RGB_MOD,
        ___0___,          ___0___, MS_LE,   MS_DO,   MS_RI,   ___0___, MS_B3,   MS_WD,   MS_WU,   MS_B2,   RGB_HUD, RGB_HUI,          RGB_M_P,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI,                   RGB_RMOD,
        KC_PWR, _______, _______, MS_B1, _______, _______, _______, _______
    ),

    /** NORMAL ANSI LAYER (GAMES) */
    [3] = LAYOUT_60_ansi(
        KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,     KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_ESC,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,     KC_M,    KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, OSM(MOD_RALT), _______, _______, _______
    ),
};
