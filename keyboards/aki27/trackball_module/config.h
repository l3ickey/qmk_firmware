/*
Copyright 2022 aki27

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

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

#define ADNS5050_SCLK_PIN         F7
#define ADNS5050_SDIO_PIN         F6
#define ADNS5050_CS_PIN           B1

#define POINTING_DEVICE_ROTATION_180
#define OLED_FONT_H "keyboards/aki27/trackball_module/lib/glcdfont.c"
