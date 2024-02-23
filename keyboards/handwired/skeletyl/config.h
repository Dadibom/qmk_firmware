// Copyright 2024 Dadibom (@Dadibom)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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
//#define NO_ACTION_ONESHOT"

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define SOFT_SERIAL_PIN D0

#define MATRIX_ROW_PINS \
    { D7, E6, B4, B5}

// wiring of each half
#define MATRIX_COL_PINS \
    { B6, B2, B3, B1, F7}