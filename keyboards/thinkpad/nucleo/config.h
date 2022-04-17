// Copyright 2022 Kevin Yuan (@Kevihiiin)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    QMK
#define PRODUCT         Thinkpad Nucleo STM32L052
#define DESCRIPTION     Thinkpad Keyboard Adapter

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { H0, C2, C0, H1, C1, C15, C3, C13 }
#define MATRIX_COL_PINS { C9, C7, B15, B13, B0, B1, B12, B14, B2, C8, C6, A8, C10, D2, A10, C12}
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Status LEDs */

#define LED_NUM_LOCK_PIN     A6
#define LED_CAPS_LOCK_PIN    A3
#define LED_SCROLL_LOCK_PIN  A7
#define LED_POWER_SWITCH_PIN A1
#define LED_SOUND_MUTED_PIN  A2
#define LED_MIC_MUTED_PIN    A0
#define LED_LIGHT_PIN        A11
#define LED_AUX_PIN          A10
#define LED_PIN_ON_STATE     0

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/*
#define PS2_MOUSE_DEBUG_HID
#define PS2_MOUSE_DEBUG_RAW
*/
