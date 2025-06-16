#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define LOWER QK_TRI_LAYER_LOWER
#define RAISE QK_TRI_LAYER_UPPER

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6_2_5(
        KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENTER,
        KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                           KC_LBRC, KC_RBRC,                                              KC_PLUS, KC_EQL,
                                    KC_LWIN, LOWER,   KC_LCTL,                   KC_SPC,  RAISE,   KC_RWIN,
                                             KC_LALT, KC_BSPC,                   KC_DEL,  KC_RALT
    ),

    [_LOWER] = LAYOUT_5x6_2_5(
        KC_F12 , KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, KC_LBRC, KC_RBRC, _______,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ENTER,
        _______, _______, _______, _______, _______, _______,                   _______, KC_MINUS,KC_EQUAL,KC_LCBR, KC_RCBR, KC_PIPE,
                          _______, _______,                                                       _______, _______,
                                   _______, _______, _______,                   _______, _______, _______,
                                            _______, _______,                   _______, _______
    ),

    [_RAISE] = LAYOUT_5x6_2_5(
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_HOME, KC_UP,   KC_END,  _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_BSPC,
        _______, _______, _______, _______, _______, _______,                   KC_PLUS, KC_DELETE, KC_INSERT, KC_LBRC, KC_RBRC, KC_BSLS,
                          _______, _______,                                                       _______, _______,
                                   _______, _______, _______,                   _______, _______, _______,
                                            _______, _______,                   _______, _______
    ),

    [_ADJUST] = LAYOUT_5x6_2_5(
        _______, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT,                   _______, _______, _______, _______, _______, _______,
        _______, _______, KC_BTN2, KC_MS_U, KC_BTN1, KC_BTN3,                   _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
        _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN4,                   _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
        _______, _______, _______, _______, _______, KC_BTN5,                   _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
                          _______, _______,                                                       KC_P0,   _______,
                                   _______, _______, _______,                   _______, _______, _______,
                                            _______, _______,                   _______, _______
    )
};

