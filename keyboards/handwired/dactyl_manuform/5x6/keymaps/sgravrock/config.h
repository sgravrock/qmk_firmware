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


#pragma once


#define USE_SERIAL

#define MASTER_LEFT
// #define MASTER_RIGHT
//#define EE_HANDS
// Rows are doubled-up

// Any of B5, B6, and C6 should work as long as they aren't
// also used in the switch matrix. B7 is present on the Elite-C
// but not the Pro Micro. To use LEDs on the Pro Micro, set
// BACKLIGHT_PIN to B5 and redefine MATRIX_COL_PINS to use
// D2 instead of B5. (That configuration will also work for
// the Elite-C, but the standard matrix pins make things a
// bit tidier.)
#define BACKLIGHT_PIN B7
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 2

#define TAPPING_TOGGLE 2
