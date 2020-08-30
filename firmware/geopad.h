#pragma once

#include "quantum.h"

#define LAYOUT( \
	     K01, K02, K03, K04, K05, K06, \
	          K12, K13, K14, K15, K16, \
	     K21, K22, K23, K24, K25, K26, \
	K30,      K32, K33, K34, K35, K36, \
	     K41,           K44, K45, K46  \
) { \
	{ KC_NO, K01,   K02,   K03,   K04,   K05,   K06 }, \
	{ KC_NO, KC_NO, K12,   K13,   K14,   K15,   K16 }, \
	{ KC_NO, K21,   K22,   K23,   K24,   K25,   K26 }, \
	{ K30,   KC_NO, K32,   K33,   K34,   K35,   K36 }, \
	{ KC_NO, K41,   KC_NO, KC_NO, K44,   K45,   K46 }  \
}
