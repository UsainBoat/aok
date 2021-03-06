// -------------- Initalization --------------
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NUMPAD,
  _GAME
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define NUMPAD TG(_NUMPAD)
#define GAME TG(_GAME)



// -------------- Define Layers --------------
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,--------------------------------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | Bksp |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Raise|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  |   \  | PgUp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |    Enter    | PgDn |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |    Shift    |  Up  | Game |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Alt |  GUI |                  Space                  |  GUI | Lower|Numpad| Left | Down |Right |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,    KC_BSPC,   KC_DEL,
    RAISE ,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,    KC_BSLS,   KC_PGUP,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,         KC_ENT,         KC_PGDN,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,            KC_UP, GAME,
    KC_LCTL, KC_LALT, KC_LGUI,                       KC_SPC                        ,KC_LGUI,  LOWER, NUMPAD,   KC_LEFT,    KC_DOWN,   KC_RGHT
),

/* Lower
* ,--------------------------------------------------------------------------------------------------------.
* |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |      |      | Home |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |             | End  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |             | Vol+ |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |                                         |      |      |      | Back | Vol- | Next |
* `--------------------------------------------------------------------------------------------------------'
*/
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     KC_END,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     KC_VOLU, _______,
  _______, _______, _______,                       _______                       , _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
),

/* Raise
* ,--------------------------------------------------------------------------------------------------------.
* |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |      |      | Home |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |             | End  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |      | Vol+ |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |                                         |      |      |      | Pause| Vol- | Play |
* `--------------------------------------------------------------------------------------------------------'
*/
[_RAISE] = LAYOUT(
  KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     KC_END,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,    KC_VOLU, _______,
  _______, _______, _______,                       _______                       , _______, _______, _______, KC_PAUS, KC_VOLD, KC_MPLY
),

/* Adjust (Lower + Raise)
* ,--------------------------------------------------------------------------------------------------------.
* | Reset| Debug|      |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |             |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |             |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |                                         |      |      |      |      |      |      |
* `--------------------------------------------------------------------------------------------------------'
*/
[_ADJUST] = LAYOUT(
  RESET,     DEBUG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
  _______,   RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______, _______,
  _______, _______, _______,                       _______                       , _______, _______, _______, _______, _______, _______
),

/* Numpad
* ,--------------------------------------------------------------------------------------------------------.
* |      |      |      |      |      |      |      |      |      |  /   |  *   |  -   |  =   |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |  7   |  8   |  9   |  +   |      |      |  +   |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |  4   |  5   |  6   |  -   |             |  -   |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |  1   |  2   |  3   |    Enter    |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |                                         |  0   |  .   |      |      |      |      |
* `--------------------------------------------------------------------------------------------------------'
*/
[_NUMPAD] = LAYOUT(
  _______,   _______, _______, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, KC_PEQL, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______,   KC_P7,   KC_P8,   KC_P9, KC_PPLS, _______, _______, KC_PPLS,
  _______, _______, _______, _______, _______, _______, _______, _______,   KC_P4,   KC_P5,   KC_P6, KC_PMNS,      _______,     KC_PMNS,
  _______, _______, _______, _______, _______, _______, _______, _______,   KC_P1,   KC_P2,   KC_P3,      KC_PENT,     _______, _______,
  _______, _______, _______,                       _______                       ,   KC_P0, KC_PDOT, _______, _______, _______, _______
),

/* Game
 * ,--------------------------------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | Bksp |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Raise|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  |   \  | PgUp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |    Enter    | PgDn |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |    Shift    |  Up  | Game |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Alt |      |                  Space                  |      | Lower|Numpad| Left | Down |Right |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_GAME] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,    KC_BSPC,   KC_DEL,
    RAISE ,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,    KC_BSLS,   KC_PGUP,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,         KC_ENT,         KC_PGDN,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,            KC_UP, _______,
    KC_LCTL, KC_LALT, KC_NO,                       KC_SPC                        ,KC_NO,  LOWER, NUMPAD,   KC_LEFT,    KC_DOWN,   KC_RGHT
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
