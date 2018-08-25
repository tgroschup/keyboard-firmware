/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0x0042
#define DEVICE_VER      0x0001
#define MANUFACTURER    Tobiase
#define PRODUCT         2x2 Keyboard
#define DESCRIPTION     A very simple keyboard.

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* pin-out */ //WTF ...names from qmk debug page
#define MATRIX_ROW_PINS { D3, D2 }
#define MATRIX_COL_PINS { D0, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL//COL2ROW

#define TAPPING_TERM 200

#endif //CONFIG_H
