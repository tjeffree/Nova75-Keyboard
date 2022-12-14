#include "nova75.h"

enum layers {
  _QWERTY = 0,
  _FUNCTION,
  _LAST
};

#define FN MO(_FUNCTION)
#define LST MO(_LAST)
#define MRSFT MT(MOD_RSFT, KC_ENT)
#define LSLSH LSFT_T(KC_NUBS)
#define RCTLT RCTL_T(KC_SPC)

const uint16_t PROGMEM combo_minus[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM combo_plus[] = {KC_0, KC_BSPC, COMBO_END};

const uint16_t PROGMEM combo_home[] = {KC_BSPC, KC_DEL, COMBO_END};
const uint16_t PROGMEM combo_end[] = {MRSFT, KC_RGHT, COMBO_END};

const uint16_t PROGMEM combo_pgup[] = {KC_DEL, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_pgdn[] = {KC_QUOT, MRSFT, COMBO_END};

const uint16_t PROGMEM combo_bksl[] = {LSLSH, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_hash[] = {KC_SCLN, KC_QUOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_minus, KC_MINS),
    COMBO(combo_plus, KC_EQL),

    COMBO(combo_home, KC_HOME),
    COMBO(combo_end, KC_END),

    COMBO(combo_pgup, KC_PGUP),
    COMBO(combo_pgdn, KC_PGDN),

    COMBO(combo_bksl, KC_NUBS),
    COMBO(combo_hash, KC_NUHS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_ortho_5x15(
      KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PGUP, KC_INS , KC_HOME, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_PGDN, KC_UP  , KC_END , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
      KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT, KC_DOWN, KC_RGHT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      LSLSH,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, FN     , KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MRSFT ,
      KC_LCTL,   OS_SWP,  KC_LGUI, KC_LALT, FN,      KC_SPC,  KC_SPC,  FN     , KC_SPC,  RCTLT,   FN,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

	[_FUNCTION] = LAYOUT_ortho_5x15(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6  , KC_TRNS, KC_TRNS, KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 ,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_NUBS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LST,     KC_TRNS, KC_TRNS, LST,     KC_TRNS, KC_TRNS, LST,     KC_HOME, KC_PGDN, KC_PGUP, KC_END
        ),

	[_LAST] = LAYOUT_ortho_5x15(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, LST,     KC_TRNS, KC_TRNS, LST,     KC_TRNS, KC_TRNS, LST,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),

};
