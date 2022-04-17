/* Copyright 2020 Kevin Yuan
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_default( \
/* ┌───────┐   ┌───────┐ ┌───────┬───────┐ ┌───────┐ ┌───────┐              ┌───────┐  ┌────────┬────────┬────────┬───────┐  ┌────────┬────────┬────────┐           */ \
     K50,        K4A,      K3A,    K2A,      K2B,      K5A,                              K1D,     K2D,     K6C,     K09,       K0A,     K0C,     K0B,                  \
/* |       | ┌─┴──────┬┴─┴─────┬─┴──────┬┴─┴─────┐ ├───────┬────────┬───────┴┬──────┴┐ ┌────────┼────────┼────────┼───────┤  |        ├────────┼────────┤           */ \
               K01,     K02,     K32,     K52,       K58,    K55,     K36,     K06,      K08,     K18,     K1A,     K19,                K1C,     K1B,                  \
/* ├───────┴─┼────────┴┬───────┴─┬──────┴──┬─────┴─┴─┬─────┴───┬────┴────┬───┴─────┬─┴─┴─────┬──┴──────┬─┴───────┬┴────────┬─┴────────┴────────┴────────┘           */ \
	  K00,      K10,      K11,      K12,      K13,      K03,      K04,      K14,      K15,      K16,      K17,     K07,      K05,          K38,                        \
/* ├─────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬─────────────┤           */ \
	  K30,    	     K20,      K21,      K22,      K23,      K33,      K34,      K24,      K25,      K26,      K27,     K37,      K35,          K68,                   \
/* ├──────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬          |           */ \
	  K31,              K40,      K41,      K42,      K43,      K53,      K54,      K44,      K45,      K46,     K47,      K57,      K67,                              \
/* ├───────────┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴───┬─────┴─────────┴──────────┤           */ \
	  K3E,       K51,      K60,      K61,      K62,      K63,      K73,      K74,      K64,      K65,      K66,      K77,      K6E,                                    \
/* ├─────────┬─┴─────────┼────────┬┴───────┬─┴─────────┴─────────┴─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼────────┬────────┬────────┤           */ \
	            K0F,       K39,     K5D,                           K78,                          K7D,      K4B,      K6F,      K6B,     K5C,     K7B,                  \
/* └─────────┴───────────┴────────┴────────┴───────────────────────────────────────────────────┴─────────┴─────────┴─────────┴────────┼────────┼────────┤           */ \
	                                                                                                                           K7C,     K7A,     K79                   \
/*                                                                                                                           └────────┴────────┴────────┘           */ \
) { \
/*          0      1      2      3      4      5      6      7      8      9      A      B      C      D      E      F    */  \
/* 0 */   { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   KC_NO, KC_NO, K0F   }, \
/* 1 */   { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   KC_NO, KC_NO }, \
/* 2 */   { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   KC_NO, KC_NO, K2A,   K2B,   KC_NO, K2D,   KC_NO, KC_NO }, \
/* 3 */   { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   KC_NO, KC_NO, KC_NO, K3E,   KC_NO }, \
/* 4 */   { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47, KC_NO,   KC_NO, K4A,   K4B,   KC_NO, KC_NO, KC_NO, KC_NO }, \
/* 5 */   { K50,   K51,   K52,   K53,   K54,   K55,   KC_NO, K57,   K58,   KC_NO, K5A,   KC_NO, K5C,   K5D,   KC_NO, KC_NO }, \
/* 6 */   { K60,   K61,   K62,   K63,   K64,   K65,   K66,   K67,   K68,   KC_NO, KC_NO, K6B,   K6C,   KC_NO, K6E,   K6F   }, \
/* 7 */   { KC_NO, KC_NO, KC_NO, K73,   K74,   KC_NO, KC_NO, K77,   K78,   K79,   K7A,   K7B,   K7C,   K7D,   KC_NO, KC_NO }  \
}
