/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * ZONESTAR Melzi board pin assignments
 */

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME "ZONESTAR Melzi"

//
// Limit Switches
//
#define X_STOP_PIN         18
#define Y_STOP_PIN         19
#define Z_STOP_PIN         20

//
// Steppers
//
#define X_STEP_PIN         15
#define X_DIR_PIN          21

#define Y_STEP_PIN         22
#define Y_DIR_PIN          23

#define Z_STEP_PIN          3
#define Z_DIR_PIN           2

#define E0_STEP_PIN         1
#define E0_DIR_PIN          0

#define X_ENABLE_PIN     	14
#define Y_ENABLE_PIN     	14
#define Z_ENABLE_PIN     	26
#define E0_ENABLE_PIN    	14

//
// Temperature Sensors
//
#define TEMP_0_PIN          7   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN        6   // Analog Input (pin 34 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN       	13
#define HEATER_BED_PIN   	12
#define FAN_PIN           	4 
#define	FAN1_PIN			-1
//
// Misc. Functions
//

/**
 * In some versions of the Sanguino libraries the pin
 * definitions are wrong, with SDSS = 24 and LED_PIN = 28 (Melzi).
 * If you encounter issues with these pins, upgrade your
 * Sanguino libraries! See #368.
 */
#define SDSS               	31
#define LED_PIN				-1

#if DISABLED(BLTOUCH)
#define	FIL_RUNOUT_PIN		27
#endif

/**
 * ZONESTAR Melzi board AUX pins:
 *
 *      TX1  RX1  SDA  SCL
 *  5V  D10  D11  D17  D16
 *  GND D27  D28  D29  D30
 *      A4   A3   A2   A1
 */
//
// LCD / Controller
//
//LCD 128x64	
#if ENABLED(ZONESTAR_LCD12864)
#define LCD_PINS_D4	   	28 // st9720 CLK	LCD_PIN_R/W 
#define LCD_PINS_RS    	29 // st9720 CS	LCD_PIN_RS
#define LCD_PINS_ENABLE 10 // st9720 DAT	LCD_PIN_ENABLE
// Alter timing for graphical display
#define ST7920_DELAY_1 DELAY_2_NOP
#define ST7920_DELAY_2 DELAY_2_NOP
#define ST7920_DELAY_3 DELAY_2_NOP
//KNOB key
#define BTN_EN1 		11
#define BTN_EN2 		16
#define BTN_ENC 		17
#define BEEPER_PIN 		-1
#define KILL_PIN 		-1
#define SD_DETECT_PIN 	-1
#endif
	
//LCD 2004
#if ENABLED(ZONESTAR_LCD2004_ADCKEY)
#define LCD_PINS_RS 	28
#define LCD_PINS_ENABLE 29
#define LCD_PINS_D4 	10
#define LCD_PINS_D5 	11
#define LCD_PINS_D6 	16
#define LCD_PINS_D7 	17
#define	ADC_KEYPAD_PIN	1			//A1(D30) for ADCKEY
#endif

#if ENABLED(BLTOUCH)
#define SERVO0_PIN       27	//AUX Pin - A4
#endif

