/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Custom Key Combos
#define LCKSCR LCTL(LGUI(KC_Q))
//#define KC_CAD LCTL(LALT(KC_DEL)) // CTL+ALT+DEL (windows)
//#define KC_CAE LGUI(LALT(KC_ESC)) // CMD+ALT+ESC (Force Close)
//#define KC_SCREENSHOT LGUI(S(KC_4)) // CMD+SHIFT+4 (Mac Screenshot)

//Tap Dance Declarations
#define COLON TD(CLN)
#define QUOTE TD(QUOT)
#define PARAN TD(PAR)
#define CURLY TD(CUR)
#define SQUAR TD(SQU)
#define ANGUL TD(ANG)
#define TMUX TD(TD_TMUX)

#define CADCAE TD(CAD_CAE)

enum {
  CLN = 0,
  QUOT,
  CAD_CAE,
  PAR,
  CUR,
  SQU,
  ANG,
  TD_TMUX,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_iso_85(
     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  KC_NO,    KC_NO,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNAP,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,             KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     COLON,    QUOTE,              KC_BSLS,            KC_HOME,
     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_iso_85(
     KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_BASE] = LAYOUT_iso_85(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,             KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     COLON,    QUOTE,              KC_BSLS,            KC_HOME,
     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_iso_85(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};


// Parantheses
void paranthesis_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    SEND_STRING("()"); register_code(KC_LEFT); unregister_code(KC_LEFT);
  } else if (state->count == 2) {
    SEND_STRING("(");
  } else if (state->count == 3) {
    SEND_STRING(")");
  }
}

void curly_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    SEND_STRING("{}"); register_code(KC_LEFT); unregister_code(KC_LEFT);
  } else if (state->count == 2) {
    SEND_STRING("{");
  } else if (state->count == 3) {
    SEND_STRING("}");
  }
}

void square_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    SEND_STRING("[]"); register_code(KC_LEFT); unregister_code(KC_LEFT);
  } else if (state->count == 2) {
    SEND_STRING("[");
  } else if (state->count == 3) {
    SEND_STRING("]");
  }
}

void angular_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    SEND_STRING("<>"); register_code(KC_LEFT); unregister_code(KC_LEFT);
  } else if (state->count == 2) {
    SEND_STRING("<");
  } else if (state->count == 3) {
    SEND_STRING(">");
  }
}

void tmux_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    SEND_STRING("tmux"); register_code(KC_ENT); unregister_code(KC_ENT);
  } else if (state->count == 2) {
    register_mods(MOD_BIT(KC_LCTL));
    register_code(KC_B); unregister_code(KC_B);
    unregister_mods(MOD_BIT(KC_LCTL));
    register_mods(MOD_BIT(KC_LSFT));
    register_code(KC_5); unregister_code(KC_5);
    unregister_mods(MOD_BIT(KC_LSFT));
  }
}

//void git_dance (tap_dance_state_t *state, void *user_data) {
//  if (state->count == 1) {
//    SEND_STRING("git checkout $1"); //register_code(KC_ENT); unregister_code(KC_ENT);
//  }
//}

void cmd_dance (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_mods(MOD_BIT(KC_LCTL));
    register_mods(MOD_BIT(KC_LALT));
    register_code(KC_DELETE);
    unregister_mods(MOD_BIT(KC_LCTL));
    unregister_mods(MOD_BIT(KC_LALT));
    unregister_code(KC_DELETE);
  } else if (state->count == 2) {
    register_mods(MOD_BIT(KC_LGUI));
    register_mods(MOD_BIT(KC_LALT));
    register_code(KC_ESC);
    unregister_mods(MOD_BIT(KC_LGUI));
    unregister_mods(MOD_BIT(KC_LALT));
    unregister_code(KC_ESC);
  } else if (state->count == 3) {
    register_mods(MOD_BIT(KC_LGUI));
    register_mods(MOD_BIT(KC_LSFT));
    register_code(KC_4);
    unregister_mods(MOD_BIT(KC_LGUI));
    unregister_mods(MOD_BIT(KC_LSFT));
    unregister_code(KC_4);
  }
}

void cmd_sft_slash_pipe_down (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    if (state->interrupted || state->pressed==0) {
      register_code (KC_NONUS_BACKSLASH);
    } else {
      register_code (KC_LSFT);
    }
  } else if (state->count == 2) {
    register_mods(MOD_BIT(KC_LSFT));
    register_code(KC_NONUS_BACKSLASH);
  }
}

void cmd_sft_slash_pipe_up (tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    if (keyboard_report->mods & MOD_BIT(KC_LSFT)) {
      unregister_code (KC_LSFT);
    } else {
      unregister_code (KC_NONUS_BACKSLASH);
    }
  } else if (state->count == 2) {
    unregister_mods(MOD_BIT(KC_LSFT));
    unregister_code(KC_NONUS_BACKSLASH);
  }
}

 //All tap dance functions would go here. Only showing this one.
 tap_dance_action_t tap_dance_actions[] = {
   [CLN] = ACTION_TAP_DANCE_DOUBLE (KC_SCLN, S(KC_SCLN ))
   ,[QUOT] = ACTION_TAP_DANCE_DOUBLE (KC_QUOT, S(KC_2))
   ,[CAD_CAE] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, cmd_dance )
   ,[PAR] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, paranthesis_dance )
   ,[CUR] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, curly_dance )
   ,[SQU] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, square_dance )
   ,[ANG] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, angular_dance )
   ,[TD_TMUX] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, tmux_dance )
 };
