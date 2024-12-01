#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    SE_AA,          SE_ADIA,        SE_OSLH,        KC_P,           KC_Y,           SE_QUES,                                        KC_COMMA,       KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           
    KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_EXLM,                                        KC_DOT,         KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           
    KC_TRANSPARENT, KC_Q,           KC_J,           KC_K,           KC_X,           KC_LEFT_ALT,                                    KC_LEFT_ALT,    KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           
    TG(2),          KC_TRANSPARENT, OSL(3),         MO(1),          OSM(MOD_LSFT),  KC_LEFT_CTRL,                                   KC_RIGHT_CTRL,  OSM(MOD_RSFT),  MO(1),          KC_TRANSPARENT, TG(4),          TT(5),          
                                                    KC_BSPC,        KC_TAB,                                         KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_HASH,        SE_LESS,        SE_LCBR,        SE_RCBR,        SE_GRTR,        SE_TILD,                                        SE_APOS,        SE_DLR,         KC_7,           KC_8,           KC_9,           SE_EQL,         
    SE_MINS,        SE_SLSH,        SE_LPRN,        SE_RPRN,        SE_BSLS,        SE_PIPE,                                        SE_DQUO,        SE_AMPR,        KC_4,           KC_5,           KC_6,           KC_0,           
    SE_PLUS,        SE_ASTR,        SE_LBRC,        SE_RBRC,        SE_AT,          KC_TRANSPARENT,                                 KC_TRANSPARENT, SE_EURO,        KC_1,           KC_2,           KC_3,           KC_PERC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_TRANSPARENT, KC_MS_BTN2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_TRANSPARENT, 
    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        LCTL(KC_END),   LCTL(KC_HOME),  KC_END,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LGUI(KC_PSCR),  LGUI(LSFT(KC_PSCR)),LGUI(KC_P),                                     LGUI(LSFT(KC_C)),KC_F11,         LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        LGUI(KC_W),     LGUI(KC_E),     LGUI(KC_S),                                     LGUI(KC_R),     LGUI(KC_D),     LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     LGUI(KC_0),     
    KC_TRANSPARENT, LGUI(LSFT(KC_Q)),KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_RIGHT), 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_ENTER), LGUI(LSFT(KC_SPACE))
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      SE_SECT,        KC_TRANSPARENT, KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, 
    SE_CIRC,        KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_U)),ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_NUM,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_0,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ENTER,    KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    LSFT(SE_AA),    LSFT(SE_ADIA),  LSFT(SE_OSLH),  LSFT(KC_P),     LSFT(KC_Y),     KC_TRANSPARENT,                                 SE_SCLN,        LSFT(KC_F),     KC_G,           KC_C,           KC_R,           KC_L,           
    LSFT(KC_A),     LSFT(KC_O),     LSFT(KC_E),     LSFT(KC_U),     LSFT(KC_I),     KC_TRANSPARENT,                                 SE_SCLN,        LSFT(KC_D),     KC_H,           KC_T,           KC_N,           KC_S,           
    KC_TRANSPARENT, LSFT(KC_Q),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_X),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_B),     KC_M,           KC_W,           KC_V,           KC_Z,           
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {57,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {57,218,204}, {0,0,0}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {152,255,255}, {208,218,204}, {0,0,0}, {188,255,255}, {188,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {57,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {57,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {152,255,255}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {98,218,204}, {152,255,255}, {152,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {31,218,204}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {31,218,204}, {164,218,204}, {149,218,204}, {74,255,255}, {74,255,255}, {149,218,204}, {164,218,204}, {250,218,204}, {250,218,204}, {74,255,255}, {74,255,255}, {250,218,204}, {139,216,211}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,211}, {139,216,211}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {139,224,190}, {31,218,204}, {31,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {139,216,211}, {31,218,204}, {0,255,255}, {0,255,255}, {0,255,255}, {139,234,215}, {139,216,211}, {139,216,211}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {152,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {211,255,255}, {0,255,255}, {19,255,255}, {152,255,255}, {0,0,0}, {0,251,253}, {213,218,204}, {31,231,230}, {23,216,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {139,163,181}, {139,115,157}, {94,218,204}, {152,255,255}, {139,231,239}, {0,0,0}, {0,0,0}, {44,218,204}, {42,218,204}, {249,218,204}, {249,218,204}, {249,218,204}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {139,216,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,217}, {139,216,217}, {0,0,0}, {0,0,0}, {139,231,239}, {139,176,194}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {139,176,194}, {169,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {139,216,217}, {74,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {74,255,255}, {139,216,217}, {139,216,217}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,217,223}, {139,213,223} },

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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_3)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_D)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



