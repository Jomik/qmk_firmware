// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#define XXX KC_NO

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
XXX, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, XXX, K32, K33, K34,      K35, K36, K37, XXX, XXX \
)
#else
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
XXX, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, K32, K33, K34, XXX,      XXX, K35, K36, K37, XXX \
)
#endif

#ifdef RGBLIGHT_ENABLE
  #undef RGBLED_NUM
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLED_NUM 20
  #define RGBLIGHT_LED_MAP {0,1,2,9,8,7,4,3,5,6,19,18,17,10,11,12,15,16,14,13} // Orients Kyria LEDs to a circle around both halves.
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_SLEEP true  // turn off leds on sleep
  #define RGBLIGHT_LIMIT_VAL 150 // Fix led brightness brownout issue
#endif
