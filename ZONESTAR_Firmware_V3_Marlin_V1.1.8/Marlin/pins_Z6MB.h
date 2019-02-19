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
 * Melzi (Creality) pin assignments
 *
 * The Creality board needs a bootloader installed before Marlin can be uploaded.
 * If you don't have a chip programmer you can use a spare Arduino plus a few
 * electronic components to write the bootloader.
 *
 * See http://www.instructables.com/id/Burn-Arduino-Bootloader-with-Arduino-MEGA/
 */
#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu."
#endif
#define BOARD_NAME "Z6MB (ZONESTAR)"
/******************************************************************
NOTE: MUST define USE_SOFTWARE_SPI in SDfatconfig.h 
*******************************************************************/
//
// Limit Switches
//
#define X_MIN_PIN		21
#define Y_MIN_PIN		18
#define Z_MIN_PIN		13

//
// Steppers
//
#define X_STEP_PIN		23
#define X_DIR_PIN		22
#define	X_ENABLE_PIN	24

#define Y_STEP_PIN		20
#define Y_DIR_PIN		19
#define	Y_ENABLE_PIN	17

#define Z_STEP_PIN		15
#define Z_DIR_PIN		14
#define	Z_ENABLE_PIN	16

#define E0_STEP_PIN		25
#define E0_DIR_PIN		26
#define	E0_ENABLE_PIN	24

//
// Temperature Sensors
//
#define TEMP_0_PIN		 1   // Analog Input
#define TEMP_BED_PIN	 -1//0   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN     0//
#define HEATER_BED_PIN   -1// 1
#define	FAN_PIN			 28
#define	FAN1_PIN		 29

//
//filament run out sensor
//
#define FIL_RUNOUT_PIN   27 // 

//
//SD card
//
#define SD_DETECT_PIN	 -1//10
#define LCD_SDSS		 11

//
// LCD
//
//LCD 128x64
#if ENABLED(ZONESTAR_LCD12864)
#undef LCD_PINS_D4
#undef LCD_PINS_RS
#undef LCD_PINS_ENABLE
#define LCD_PINS_D4			AVR_MOSI_PIN	// st9720 CLK		LCD_PIN_R/W 
#define LCD_PINS_RS    		11				// st9720 CS		LCD_PIN_RS
#define LCD_PINS_ENABLE 	AVR_SCK_PIN		// st9720 DAT		LCD_PIN_ENABLE

// Alter timing for graphical display
#define ST7920_DELAY_1 DELAY_2_NOP
#define ST7920_DELAY_2 DELAY_2_NOP
#define ST7920_DELAY_3 DELAY_2_NOP
#endif

//OLED 128x64
#if ENABLED(ZONESTAR_OLED12864)
//Use HW SPI interface
#if ENABLED(OLED_HW_SPI)
#undef LCD_PINS_RS
#undef LCD_PINS_DC
#undef DOGLCD_CS
#define LCD_PINS_RS     4				//RESET
#define LCD_PINS_DC     10				//DC
#define DOGLCD_CS       11				//CS
#define DOGLCD_A0       LCD_PINS_DC		//DC
#define	DOGLCD_MOSI		AVR_MOSI_PIN	//SDA
#define	DOGLCD_SCK		AVR_SCK_PIN		//SCK
#else
#error "Z6MB don't support SW SPI OLED screen."
#endif
#endif//ENABLED(ZONESTAR_OLED12864) || ENABLED(MKS_12864OLED_SSD1306) || ENABLED(MKS_12864OLED)

//Knob
#if ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER)
#define BTN_EN1 		 12
#define BTN_EN2 		 2
#define BTN_ENC 		 3
#define BEEPER_PIN 		-1
#define KILL_PIN 		-1
#endif

#if ENABLED(ZONESTAR_LCD2004_KNOB)  || (ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER) && ENABLED(ULTRA_LCD) && DISABLED(DOGLCD))
#error "Z6MB don't support LCD2004 KNOB keypad."
#endif

