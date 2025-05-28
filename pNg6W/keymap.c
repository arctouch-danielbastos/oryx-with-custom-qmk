#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MAC_LOCK,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,          
    KC_NO,          MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_NO,          
    KC_NO,          KC_Z,           KC_X,           ALL_T(KC_C),    MEH_T(KC_V),    KC_B,                                           KC_N,           MEH_T(KC_M),    ALL_T(KC_COMMA),KC_DOT,         KC_SLASH,       KC_NO,          
                                                    LT(1, KC_SPACE),LT(2, KC_TAB),                                  LT(3, KC_ENTER),LT(4, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_ESCAPE,      CW_TOGG,        KC_NO,                                          KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_KP_EQUAL,    KC_4,           KC_5,           KC_6,           KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_MEH,         KC_NO,                                          KC_KP_MINUS,    KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_HYPR,        KC_MEH,         KC_NO,                                          LGUI(KC_LEFT),  LALT(KC_LEFT),  LALT(KC_RIGHT), LGUI(KC_RIGHT), KC_NO,          KC_NO,          
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_TOG,        KC_BRIGHTNESS_DOWN,MAC_LOCK,       KC_BRIGHTNESS_UP,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_VAI,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_VAD,        KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          US_AMPR,        US_ASTR,        US_PIPE,        KC_LCBR,        KC_RCBR,                                        KC_NO,          CW_TOGG,        KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          US_DLR,         US_PERC,        KC_UNDS,        KC_LPRN,        KC_RPRN,                                        KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_NO,          
    KC_NO,          US_EXLM,        KC_AT,          US_HASH,        KC_LBRC,        KC_RBRC,                                        KC_NO,          KC_MEH,         KC_HYPR,        KC_NO,          KC_NO,          KC_NO,          
                                                    KC_ESCAPE,      KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {14,218,204}, {14,218,204}, {14,218,204}, {14,218,204}, {129,105,255}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {129,105,255}, {14,218,204}, {14,218,204}, {14,218,204}, {14,218,204}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {129,105,255}, {129,105,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,218,204}, {14,218,204}, {14,218,204}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,218,204}, {14,218,204}, {14,218,204}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {129,105,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,218,204}, {14,218,204}, {14,218,204}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        uint8_t mods = get_mods();

        // Custom Alt key overrides
        if ((mods & MOD_MASK_ALT) && keycode == KC_E) {
            tap_code(KC_LBRC);  // [
            return false;
        }
        if ((mods & MOD_MASK_ALT) && keycode == KC_R) {
            tap_code(KC_RBRC);  // ]
            return false;
        }
        if ((mods & MOD_MASK_ALT) && keycode == KC_D) {
            tap_code16(LSFT(KC_0));  // )
            return false;
        }
        if ((mods & MOD_MASK_ALT) && keycode == KC_F) {
            tap_code16(LSFT(KC_9));  // (
            return false;
        }

        // Your existing logic
        switch (keycode) {
            case MAC_LOCK:
                HCS(0x19E);
                break;  // You were missing this!

            case RGB_SLD:
                rgblight_mode(1);
                return false;
        }
    }

    return true;
}
