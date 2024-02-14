// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x4(
        KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,
        KC_A,   KC_R,   KC_S,   KC_T,   KC_G,
        KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,
                    KC_ESC, KC_SPACE, KC_TAB
    )
};
