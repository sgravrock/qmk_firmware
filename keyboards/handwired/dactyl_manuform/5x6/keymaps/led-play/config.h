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

// B5 appears to be the only pin that works on the Pro Micro.
// B6 and C6 are documented to work but exhibit flickering
// that suggests that software timing is being used. B7 is documented
// to work but does not exist.
#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3
