/* Copyright 2021 JasonRen(biu)
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
#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |     G location
 *   |  |     |     B location
 *   |  |     |     | */
    {0, B_1,    A_1,    C_1},
    {0, B_2,    A_2,    C_2},
    {0, B_3,    A_3,    C_3},
    {0, B_4,    A_4,    C_4},
    {0, B_5,    A_5,    C_5},
    {0, B_6,    A_6,    C_6},
    {0, B_7,    A_7,    C_7},
    {0, B_8,    A_8,    C_8},
    {0, B_9,    A_9,    C_9},
    {0, B_10,   A_10,   C_10},
    {0, B_11,   A_11,   C_11},
    {0, B_12,   A_12,   C_12},
    {0, B_13,   A_13,   C_13},
    {0, B_14,   A_14,   C_14},
    {0, B_15,   A_15,   C_15},
    {0, B_16,   A_16,   C_16},

    {0, E_1,    D_1,    F_1},
    {0, E_2,    D_2,    F_2},
    {0, E_3,    D_3,    F_3},
    {0, E_4,    D_4,    F_4},
    {0, E_5,    D_5,    F_5},
    {0, E_6,    D_6,    F_6},
    {0, E_7,    D_7,    F_7},
    {0, E_8,    D_8,    F_8},
    {0, E_9,    D_9,    F_9},
    {0, E_10,   D_10,   F_10},
    {0, E_11,   D_11,   F_11},
    {0, E_12,   D_12,   F_12},
    {0, E_13,   D_13,   F_13},
    {0, E_14,   D_14,   F_14},
    {0, E_15,   D_15,   F_15},
    {0, E_16,   D_16,   F_16},

    {0, H_1,    G_1,    I_1},
    {0, H_2,    G_2,    I_2},
    {0, H_3,    G_3,    I_3},
    {0, H_4,    G_4,    I_4},
    {0, H_5,    G_5,    I_5},
    {0, H_6,    G_6,    I_6},
    {0, H_7,    G_7,    I_7},
    {0, H_8,    G_8,    I_8},
    {0, H_9,    G_9,    I_9},
    {0, H_10,   G_10,   I_10},
    {0, H_11,   G_11,   I_11},
    {0, H_12,   G_12,   I_12},
    {0, H_13,   G_13,   I_13},
    {0, H_14,   G_14,   I_14},
    {0, H_15,   G_15,   I_15},
    {0, H_16,   G_16,   I_16},

    {0, K_1,    J_1,    L_1},
    {0, K_2,    J_2,    L_2},
    {0, K_3,    J_3,    L_3},
    {0, K_4,    J_4,    L_4},
    {0, K_5,    J_5,    L_5},
    {0, K_6,    J_6,    L_6},
    {0, K_7,    J_7,    L_7},
    {0, K_8,    J_8,    L_8},
    {0, K_9,    J_9,    L_9},
    {0, K_10,   J_10,   L_10},
    {0, K_11,   J_11,   L_11},
    {0, K_12,   J_12,   L_12},
    {0, K_13,   J_13,   L_13},
    {0, K_14,   J_14,   L_14},
    {0, K_15,   J_15,   L_15},
    {0, K_16,   J_16,   L_16}

};

led_config_t g_led_config = {
	{
		{   0,   1,    2,    3,    4,    5,    6,    7,    8,    9,   10,   11,    12,    13,   14,   15   },
		{  16,   17,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,    30,   31   },
		{  32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,    46,   47   },
		{  48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,    62,   63   }
	},{
		{0,0},  {15, 0},  {30, 0},  {45, 0},  {60, 0},  {75, 0},  {90, 0},  {105, 0},  {120, 0},  {135, 0},  {150, 0},  {165, 0},  {180, 0},  {195, 0},  {210, 0},  {224, 0},
	    {0,21}, {15, 21}, {30, 21}, {45, 21}, {60, 21}, {75, 21}, {90, 21}, {105, 21}, {120, 21}, {135, 21}, {150, 21}, {165, 21}, {180, 21}, {195, 21}, {210, 21}, {224, 21},
	    {0,42}, {15, 42}, {30, 42}, {45, 42}, {60, 42}, {75, 42}, {90, 42}, {105, 42}, {120, 42}, {135, 42}, {150, 42}, {165, 42}, {180, 42}, {195, 42}, {210, 42}, {224, 42},
	    {0,64}, {15, 64}, {30, 64}, {45, 64}, {60, 64}, {75, 64}, {90, 64}, {105, 64}, {120, 64}, {135, 64}, {150, 64}, {165, 64}, {180, 64}, {195, 64}, {210, 64}, {224, 64}
	},{
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,  
		4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4
	}
};
/*
void i2c_init(void) {
    setPinInput(B6); // Try releasing special pins for a short time
    setPinInput(B7);
    wait_ms(10); // Wait for the release to happen

    palSetPadMode(GPIOB, 6, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP); // Set B6 to I2C function
    palSetPadMode(GPIOB, 7, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP); // Set B7 to I2C function
}
*/
#endif


