#include "planck.h"
#include "action_layer.h"
#include "keymap_norwegian.h"
#include "keymap_plover.h"

enum planck_layers {
  _COLEMAK,
  _QWERTY,
  _DCOLEMAK,
  _DQWERTY,
  _PLOVER,
  _RIGHT,
  _LEFT,
  _FN,
  _ADJUST
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DCOLEMAK,
  DQWERTY,
  PLOVER,
  EXT_PLV
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_COLEMAK] = {
	{KC_GESC, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_EQL },
	{KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT},
	{KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
	{KC_LCTL, MO(_FN), KC_LALT, KC_LGUI,MO(_LEFT),KC_LSFT, KC_SPC,MO(_RIGHT),KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
},

[_QWERTY] = {
	{KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL },
	{KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
	{KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
	{KC_LCTL, MO(_FN), KC_LALT, KC_LGUI,MO(_LEFT),KC_LSFT, KC_SPC,MO(_RIGHT),KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
},

[_DCOLEMAK] = {
	{KC_GESC, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    NO_AE,   NO_AA  },
	{KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    NO_OSLH},
	{KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
	{KC_LCTL, MO(_FN), KC_LALT, KC_LGUI,MO(_LEFT),KC_LSFT, KC_SPC,MO(_RIGHT),KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
},

[_DQWERTY] = {
	{KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    NO_AE,   NO_AA  },
	{KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, NO_OSLH},
	{KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
	{KC_LCTL, MO(_FN), KC_LALT, KC_LGUI,MO(_LEFT),KC_LSFT, KC_SPC,MO(_RIGHT),KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY}
},

[_PLOVER] = {
  {KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1   },
  {KC_TRNS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC},
  {KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  {EXT_PLV, KC_TRNS, KC_TRNS, KC_C,    KC_V,    KC_TRNS, KC_TRNS, KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS}
},

[_RIGHT] = {
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_TRNS, KC_TRNS},
	{KC_DEL,  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_DLR,  KC_PERC, KC_CIRC, KC_MINS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_AMPR, KC_ASTR, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},

[_LEFT] = {
	{KC_TILD, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_TRNS},
	{KC_DEL,  KC_LPRN, KC_LCBR, KC_RCBR, KC_RPRN, KC_TRNS, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_UNDS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},

[_FN] = {
	{KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 },
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},

[_ADJUST] = {
	{COLEMAK, QWERTY,  DCOLEMAK,DQWERTY, PLOVER, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
	{KC_NLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET  }
}
};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LEFT, _RIGHT, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case DQWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DQWERTY);
      }
      return false;
      break;
    case DCOLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DCOLEMAK);
      }
      return false;
      break;
    case PLOVER:
      if (record->event.pressed) {
        layer_off(_LEFT);
        layer_off(_RIGHT);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
      }
      return false;
      break;
    case EXT_PLV:
      if (record->event.pressed) {
        layer_off(_PLOVER);
      }
      return false;
      break;
		}
	return true;
}
