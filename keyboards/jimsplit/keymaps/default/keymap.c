// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Ent│
      *               └───┤Tab│   │Spc├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT_split_3x5_2(
        KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        LSFT_T(KC_A),   KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    LSFT_T(KC_SCLN),
        LCTL_T(KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,              KC_N,    KC_M,    KC_COMM, KC_DOT,  LCTL_T(KC_SLSH),
                                          KC_BSPC, LT(1,KC_TAB),      KC_SPC,  KC_ENT
    ),
    [1] = LAYOUT_split_3x5_2(
        KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    TG(2),              KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,
                                              KC_TRNS,   KC_TRNS,                     KC_TRNS,  KC_TRNS
    ),
    [2] = LAYOUT_split_3x5_2(
        KC_TRNS,   KC_TRNS,    KC_UP,    KC_TRNS,    KC_TRNS,              KC_PAST,    KC_P7,    KC_P8,    KC_P9,    KC_PMNS,
        KC_TRNS,   KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_TRNS,              KC_PSLS,    KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,              KC_TRNS,    KC_P1,    KC_P2, KC_P3,  KC_PENT,
                                              KC_TRNS,    TO(0),                     KC_TRNS,  KC_P0
    )
};
