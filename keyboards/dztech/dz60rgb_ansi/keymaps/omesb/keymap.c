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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /** BASE Layer
     */

    [0] = LAYOUT_60_ansi(
        KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,     KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        LCTL_T(KC_ESC),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,     KC_M,    KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, LT(1, KC_SPC), OSM(MOD_RALT), MO(3), TO(2), KC_RCTL
        ),

    /** FN Layer
     */

    [1] = LAYOUT_60_ansi(
        _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
        _______,          KC_VOLU, KC_HOME, KC_UP,   KC_END,  KC_PGUP, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, _______, KC_INS,
        _______,          KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___0___, _______,          _______,
        _______,          KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, KC_CALC, ___0___, ___0___, ___0___, ___0___, KC_BSLS,                   _______,
        _______, _______, _______, _______, _______, _______, _______, RESET
        ),

    /** MOUSE Layer
        */

    [2] = LAYOUT_60_ansi(
        ___0___,          TO(0)  , TO(1)  , TO(3)  , TO(4)  , ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___,          ___0___,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___,                   ___0___,
        ___0___, _______, _______, ___0___, _______, _______, _______, _______
        ),

    /** MOUSE Layer
     */

    [3] = LAYOUT_60_ansi(
        ___0___,          _______, _______, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI, RGB_TOG,
        ___0___,          ___0___, ___0___, MS_UP,   ___0___, ___0___, ___0___, MS_B4,   MS_B5,   ___0___, ___0___, RGB_SPD, RGB_SPI, RGB_MOD,
        ___0___,          ___0___, MS_LE,   MS_DO,   MS_RI,   ___0___, MS_B3,   MS_WD,   MS_WU,   MS_B2,   RGB_HUD, RGB_HUI,          RGB_M_P,
        ___0___,          ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, ___0___, RGB_VAD, RGB_VAI,                   RGB_RMOD,
        KC_PWR, _______, _______, MS_B1, _______, _______, _______, _______
        ),

    /** NORMAL ANSI LAYER (GAMES)
    */

    [4] = LAYOUT_60_ansi(
        KC_ESC,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,     KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_ESC,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,     KC_M,    KC_COMM, KC_DOT, KC_SLSH,                   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, OSM(MOD_RALT), _______, _______, KC_RCTL
        ),
};

/* 
void rgb_matrix_layer_helper (uint8_t red, uint8_t green, uint8_t blue, bool default_layer) {
 for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
   if (HAS_FLAGS(g_led_config.flags[i], LED_FLAG_MODIFIER)) {
       rgb_matrix_set_color( i, red, green, blue );
   }
 }
}

void rgb_matrix_indicators_user(void) {
     uint8_t this_led = host_keyboard_leds();
     if (!g_suspend_state) {
       switch (biton32(layer_state)) {
         case 1:
           rgb_matrix_layer_helper(0x00, 0xFF, 0x00, false); break;
         case 2:
           rgb_matrix_layer_helper(0xFF, 0x00, 0x00, false); break;
         case 3:
           rgb_matrix_layer_helper(0x00, 0x00, 0xFF, false); break;
         case 4:
           rgb_matrix_layer_helper(0xFF, 0xFF, 0x00, false); break;
                                     }
                           }
     if ( this_led & (1<<USB_LED_CAPS_LOCK)) {
           rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
     }

} */

/* void matrix_init_user(void) {
 //user initialization
}

void matrix_scan_user(void) {
 //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
 return true;
} */
