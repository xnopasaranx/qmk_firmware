#include QMK_KEYBOARD_H

// Layer Declarations
enum {
    _QWERTY = 0,
    _NUM,
    _NAV,
    _I3,
    _GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT_5x6(
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
    KC_GRV , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
    KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                        KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                        KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_BSLS,
                      KC_LBRC, KC_RBRC,                                                            KC_RALT, KC_EQL ,
                                                 TT(2)  , KC_SPC ,       KC_ENT, TT(1),
                                                 KC_LSFT, KC_HOME,       KC_END, KC_LGUI,
                                                 TO(3), TO(4),           KC_DEL, TO(0)
                                                 ),

	[_NUM] = LAYOUT_5x6(
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC ,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC ,                       KC_RBRC, KC_P7  , KC_P8  , KC_P9  , KC_TRNS, KC_PLUS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_LPRN ,                       KC_RPRN, KC_P4  , KC_P5  , KC_P6  , KC_MINS, KC_PIPE,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END  ,                       KC_TRNS, KC_P1  , KC_P2  , KC_P3  , KC_EQL , KC_UNDS,
                      KC_TRNS, KC_PSCR,                                                   KC_LALT, KC_P0,
                                                 KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                 KC_TRNS, KC_TRNS,      QK_BOOT, KC_TRNS,
                                                 KC_TRNS, KC_TRNS,      EE_CLR, KC_TRNS
                                            ),

	[_NAV] = LAYOUT_5x6(
    KC_F12 , KC_F1   , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                       KC_F6  , KC_F7  , KC_F8  , KC_F9, KC_F10 , KC_F11 ,
    RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO  , KC_NO  , KC_NO  ,                       KC_WH_U, KC_BTN3, KC_WH_D, KC_NO, KC_NO  , KC_MUTE,
    KC_NO  , KC_NO   , KC_NO  , KC_NO  , KC_UP  , KC_NO  ,                       KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO  , KC_VOLU,
    KC_TRNS  , KC_NO   , KC_NO  , KC_LEFT, KC_DOWN, KC_RGHT,                       KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_MNXT, KC_VOLD,
                       KC_TRNS, KC_LOCK,                                                           KC_LALT, KC_MPLY,
                                                  KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,
                                                  KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LSFT|MOD_LGUI), KC_TRNS,
                                                  KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS
                                            ),

	[_I3] = LAYOUT_5x6(
    KC_NO, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3)   , LGUI(KC_4),    LGUI(KC_5),                         LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_NO,
    KC_NO, LGUI(KC_Q), KC_NO,      KC_NO        , KC_NO,         KC_NO,                              KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO,
    KC_NO, KC_NO,      KC_NO,      LGUI(KC_D)   , LGUI(KC_UP),   KC_NO,                              KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO,
    KC_NO, KC_NO,      KC_NO,      LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT),                      KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO     , KC_NO,
                       KC_NO,      KC_NO,                                                                                    KC_NO     , KC_NO,
                                                                 KC_TRNS, KC_TRNS,          LGUI(KC_ENT), KC_TRNS,
                                                                 KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
                                                                 TO(0), KC_TRNS,          KC_TRNS, KC_TRNS
                                              ),

	[_GAME] = LAYOUT_5x6(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_I, KC_6, KC_7, KC_8, KC_9, KC_0,                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_C, KC_GRV, KC_Q, KC_W, KC_E, KC_F,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_M, KC_LSFT, KC_A, KC_S, KC_D, KC_R,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                  KC_LCTL, KC_NO,                                                   KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_SPC,    KC_TRNS, KC_TRNS,
                                            KC_ENT, KC_TRNS,    KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS
                                            )
};


layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _QWERTY:
        rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
      break;
    case _NUM:
        rgblight_mode(RGBLIGHT_MODE_BREATHING + 2);
        rgblight_sethsv(HSV_RED);
      break;
    case _NAV:
        rgblight_mode(RGBLIGHT_MODE_BREATHING + 2);
        rgblight_sethsv(HSV_TEAL);
      break;
    case _I3:
        rgblight_mode(RGBLIGHT_MODE_BREATHING + 2);
        rgblight_sethsv(HSV_PURPLE);
      break;
    case _GAME:
        rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD + 2);
      break;
  }
  return state;
}
