/* Copyright 2020 Dustin Bosveld <steamyleafjuice@protonmail.com>
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

#include "keymap.h"

#ifdef AUTO_SHIFT_ENABLE
  #include "process_auto_shift.h"
#endif

enum layers {
    _COLEMAK = 0,
    _GAME,
    _MEDR,
    _NAVR,
    _MOUR,
    _NSSL,
    _NSL,
    _FUNL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                           KC_J,    KC_L,    KC_U,    KC_Y, KC_QUOT, KC_BSPC,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
      KC_ESC,   GUI_A,   ALT_R,  CTRL_S,  SHFT_T,    KC_G,                                           KC_M,  SHFT_N,  CTRL_E,   ALT_I,   GUI_O, KC_SCLN,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, _______, _______,    KC_BTN1, KC_BTN2,    KC_K,    KC_H, KC_COMM, AGR_DOT, KC_SLSH, SFT_ENT,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                KC_MUTE, _______, MED_ESC, NAV_SPC, MOS_TAB,    SYM_ENT, NUM_BSC,  FN_DEL, _______, KC_ESC \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_GAME] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
      KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                           KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LCTL, _______,    _______, _______,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SCLN, SFT_ENT,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, KC_LALT, MED_ESC,  KC_SPC, NAV_SPC,    SYM_ENT, NUM_BSC,  FN_DEL, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_MEDR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______,    GAME, COLEMAK, KC_ASTG, _______,                                        RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,    KC_MSTP, KC_MPLY, KC_MUTE, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NAVR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______, _______, _______, _______, _______,                                          U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, S(KC_ENT), _______, KC_F2, _______, _______, _______, _______,    _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,     KC_ENT, KC_BSPC,  KC_DEL, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),


    [_MOUR] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                                        _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, _______, KC_BTN3, KC_BTN2, KC_BTN1, _______, _______, _______,    _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, _______, _______, _______,    KC_BTN3, KC_BTN1, KC_BTN2, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NSSL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,    _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_NSL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_GRV,     KC_1,    KC_2,    KC_3, KC_BSLS, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______,  KC_DOT,    KC_0, KC_MINS,    _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),

    [_FUNL] = LAYOUT( \
 //,-----------------------------------------------------.                                      ,-----------------------------------------------------.
     _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                                        _______, _______, _______, _______, _______,  _______,\
 //|--------+--------+--------+--------+--------+--------|                                      |--------+--------+--------+--------+--------+--------|
     _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK,                                        _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______,\
 //|--------+--------+--------+--------+--------+--------+-----------------.  ,-----------------+--------+--------+--------+--------+--------+--------|
     _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______, _______,    _______, _______, _______, _______, _______, KC_RALT, _______, _______,\
 //`--------------------------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------------------------'
                                _______, _______, KC_APP, KC_SPC, UC(0x2014),   _______, _______, _______, _______, _______ \
                            //`--------------------------------------------'  `--------------------------------------------'
    ),
};

// Disabling permissive hold for home row mods.
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) { // {{{
    switch (keycode) {
//        case SHFT_T:
//        case SHFT_N:
        case SFT_ENT:
        case CTRL_S:
        case CTRL_E:
        case ALT_R:
        case ALT_I:
        case AGR_X:
        case AGR_DOT:
        case GUI_A:
        case GUI_O:
            // This actually *disables* the permissive hold for these keys.
            // See issue https://github.com/qmk/qmk_firmware/issues/8999
            return true;
        default:
            return false;
    }
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NUM_BSC:
            return false;
        default:
            return true;
    }
}

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();

    switch (get_highest_layer(default_layer_state)) {
        case _GAME:
            oled_write_P(PSTR("Qwerty"), false);
            break;
        default:
            oled_write_P(PSTR("Colemak DHm"), false);
    }
#ifdef AUTO_SHIFT_ENABLE
    // Auto shift state
    switch (get_autoshift_state()) {
        case true:
            oled_write_P(PSTR(" Auto"), false);
        default:
            oled_write_P(PSTR("\n"), false);
    }
#else
    oled_write_P(PSTR("\n"), false);
#endif
    oled_write_P(PSTR("\n"), false);
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("Game\n"), false);
            break;
        case _MEDR:
            oled_write_P(PSTR("Media\n"), false);
            break;
        case _NAVR:
            oled_write_P(PSTR("Navigation\n"), false);
            break;
        case _MOUR:
            oled_write_P(PSTR("Mouse\n"), false);
            break;
        case _NSSL:
            oled_write_P(PSTR("Symbol\n"), false);
            break;
        case _NSL:
            oled_write_P(PSTR("Number\n"), false);
            break;
        case _FUNL:
            oled_write_P(PSTR("Fn\n"), false);
            break;
       default:
            oled_write_P(PSTR("Unknown\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

char wpm_str[10];
void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        uint8_t n = get_current_wpm();
        char wpm_counter[4];
        wpm_counter[3] = '\0';
        wpm_counter[2] = '0' + n % 10;
        wpm_counter[1] = ( n /= 10) % 10 ? '0' + (n) % 10 : (n / 10) % 10 ? '0' : ' ';
        wpm_counter[0] = n / 10 ? '0' + n / 10 : ' ';
        oled_set_cursor(0,6);
        oled_write("       WPM:", false);
        if (wpm_counter[0]==' ') {
            if (wpm_counter[1]==' ') {
                oled_write(&wpm_counter[2], false);
            } else {
                oled_write(&wpm_counter[1], false);
            }
        } else {
            oled_write(&wpm_counter[0], false);
        }
    }
}
#endif

#ifdef AUTO_SHIFT_ENABLE
// Disable auto shift by default on game layer
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _GAME:
        autoshift_disable();
        break;
    default:
        autoshift_enable();
        break;
    }
return state;
}
#endif
