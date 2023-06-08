// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
      KC_ESC, 	 KC_1, 	    KC_2,      KC_3,	   KC_4,     KC_5,  	KC_MPLY,      KC_MPLY,    KC_6,  	 KC_7,   	KC_8,       KC_9,      KC_0,    KC_GRAVE,
      //XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TAB, 	 KC_Q, 	    KC_W,      KC_E,      KC_R,      KC_T,                     		       KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,    KC_MINS,
      KC_LCTL, 	 KC_A, 	    KC_S,       KC_D,      KC_F,    KC_G,                     			   KC_H, 	 KC_J,      KC_K,       KC_L,    KC_SCLN,   KC_QUOT,
      KC_LSFT,   KC_Z, 	    KC_X,      KC_C,      KC_V,       KC_B,     KC_CAPS,       KC_NUM,      KC_N,	KC_M,       KC_COMM,   KC_DOT,    KC_SLSH, KC_RSFT,
                                      KC_LALT,   KC_LGUI,   MO(1), KC_SPC, KC_ENT, MO(2), KC_BSPC, KC_RGUI
),

[1] = LAYOUT(
  KC_ESC,   KC_6,   KC_7,    KC_8,   KC_9,   KC_0,            _______,_______,          KC_6,    KC_7,    KC_8,    KC_9, KC_0, KC_GRAVE,
  KC_F1, KC_F2,   KC_F3,  KC_F4, KC_F5, KC_F6,                         KC_F7,    KC_F8,    KC_F9,    KC_F10, KC_F11, KC_F12,
  _______, KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT,                        KC_CIRCUMFLEX,    KC_AMPERSAND,    KC_ASTERISK,    KC_LEFT_PAREN, KC_RIGHT_PAREN,  KC_PIPE,
  _______, _______, _______,  _______, _______,       _______,  _______, _______, _______,    _______, _______, KC_LBRC, KC_RBRC,_______,
							  _______, _______, _______, _______,       _______, _______, _______, _______
),

[2] = LAYOUT(
	  _______,   _______,     _______,     _______,     _______,     _______,     KC_MUTE,     _______,   _______,   _______,   _______,     _______,   _______,   _______,
     _______,   KC_NUM,   KC_P7,   KC_P8,   KC_P9,   _______,                             KC_INS,    KC_HOME,    KC_PGUP,KC_DEL,   KC_END,   KC_PGDN,
     _______,   KC_CAPS,   KC_P4,   KC_P5,   KC_P6,   _______,                             KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,   KC_BSLS,   _______,
     _______,   KC_P0,   KC_P1,   KC_P2,   KC_P3,   _______,    _______,      _______,   KC_PPLS,   KC_MINUS,   KC_EQUAL,   KC_PSCR,     KC_SCRL,    KC_PAUSE,
            					      TG(3),   _______,   _______,  _______,         _______,  _______,   _______,   QK_BOOT
),

[3] = LAYOUT(
 KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
 XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,                  XXXXXXX, KC_Z, KC_X, KC_RSFT, XXXXXXX, XXXXXXX,
 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 TG(3), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},

};
#endif

//#ifdef OLED_ENABLE
//static void print_status_narrow(void) {
//	// Create OLED content
//    oled_write_P(PSTR("\n"), false);
//	oled_write_P(PSTR(""), false);
//    oled_write_P(PSTR("Lotus -58-"), false);
//	oled_write_P(PSTR("\n"), false);
//
//    // Print current layer
//    oled_write_P(PSTR("Layer"), false);
//    switch (get_highest_layer(layer_state)) {
//        case 0:
//            oled_write_P(PSTR("-DEF\n"), false);
//            break;
//        case 1:
//            oled_write_P(PSTR("-NUM\n"), false);
//            break;
//        case 2:
//            oled_write_P(PSTR("-NAV\n"), false);
//            break;
//        case 3:
//            oled_write_P(PSTR("-RPG\n"), false);
//            break;
//        default:
//            oled_write_P(PSTR("Undef"), false);
//    }
//
//    oled_write_P(PSTR("\n"), false);
//    led_t led_usb_state = host_keyboard_led_state();
//    oled_write_ln_P(PSTR("CPLCK"), led_usb_state.caps_lock);
//    oled_write_ln_P(PSTR("NMLCK"), led_usb_state.num_lock);
//
//}
//
//bool oled_task_user(void) {
//	// Render the OLED
//	if (is_keyboard_left()) {
//		print_status_narrow();
//		//render_logo();
//    } else {
//		print_status_narrow();
//        //render_logo();
//    }
//	return false;
//}
//#endif
