#include QMK_KEYBOARD_H
#include "macros.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(ENC03, KC_NO, KC_NO, ENC12, M00, M01, M02, M03, M10, M11, M12, M13, M20, M21, M22, M23)};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {[0] = {ENCODER_CCW_CW(ENC01, ENC02), ENCODER_CCW_CW(ENC10, ENC11)}};
#endif

#if defined(DIP_SWITCH_MAP_ENABLE)
const uint16_t PROGMEM dip_switch_map[NUM_DIP_SWITCHES][NUM_DIP_STATES] = {DIP_SWITCH_OFF_ON(KC_NO, ENC03), DIP_SWITCH_OFF_ON(KC_NO, ENC12)};
#endif
