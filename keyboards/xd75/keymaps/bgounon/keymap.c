#include "keymap_french.c"
#include QMK_KEYBOARD_H


// Layer shorthand
#define _AZ 0
#define _FN 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_AZ] = { // AZERTY
  { FR_ESC,     FR_AMP,         FR_EACU,        FR_QUOT,        FR_APOS,        FR_LPAR,        FR_RPAR,        FR_EQUA,        FR_DLR,        FR_MINS,        FR_EGRV,        FR_UNDS,        FR_CCED,        FR_AGRV,        MO(_FN) },
  { FR_TAB,     FR_A,           FR_Z,           FR_E,           FR_R,           FR_T,           FR_HAT,         FR_UGRV,        FR_AST,        FR_Y,           FR_U,           FR_I,           FR_O,           FR_P,           FR_BSPC },
  { FR_CAPL,    FR_Q,           FR_S,           FR_D,           FR_F,           FR_G,           FR_HOME,        FR_ENTR,        FR_PGUP,       FR_H,           FR_J,           FR_K,           FR_L,           FR_M,           FR_DEL },
  { FR_LSFT,    FR_W,           FR_X,           FR_C,           FR_V,           FR_B,           FR_END,         FR_UP,          FR_PGDN,       FR_N,           FR_COMM,        FR_SCLN,        FR_COLN,        FR_EXCL,        FR_LSFT  },
  { FR_LCTR,    FR_LESS,        ALGR(FR_AGRV),  FR_LALT,        FR_SPAC,        FR_SPAC,        FR_LEFT,        FR_DOWN,        FR_RIGT,       FR_SPAC,        FR_SPAC,        FR_ALGR,        FR_SLSH,        FR_DOT,         FR_RCMD },
 },

 [_FN] = { // FUNCTION
  { FR_EMPT,    FR_F1,          FR_F2,          FR_F3,          FR_F4,          FR_F5,          FR_F6,          FR_F7,          FR_F8,          FR_F9,          FR_F10,         FR_F11,         FR_F12,         FR_PSCR,        FR_TRANS },
  { FR_EMPT,    FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT  },
  { FR_EMPT,    FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT  },
  { BL_TOGG,    BL_STEP,        BL_BRTG,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT,        FR_EMPT   },
  { RGB_TOG,    RGB_RMOD,       RGB_MOD,        RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        RGB_VAD,        RGB_VAI,        RGB_SPD,        RGB_SPI,        FR_EMPT,        FR_EMPT,        FR_EMPT,        RESET },
 },

};
