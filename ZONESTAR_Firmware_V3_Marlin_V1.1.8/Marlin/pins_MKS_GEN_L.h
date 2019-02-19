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
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

 
#if !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "MKS GEN L" 
#define LARGE_FLASH true
 
//
// Servos
//
#define SERVO0_PIN       	11
#define SERVO1_PIN          6
#define SERVO2_PIN          5
#define SERVO3_PIN        	4

 
 //
 // Limit Switches
 //
#define X_MIN_PIN           3
#define X_MAX_PIN         	-1///2
#define Y_MIN_PIN          14
#define Y_MAX_PIN          -1///15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          -1///19
 
//
// Z Probe (when not Z_MIN_PIN)
//
#if ENABLED(Z_MIN_PROBE_ENDSTOP) 
#if ENABLED(BLTOUCH)
//#define	Z_MIN_PROBE_PIN		65
#define	Z_MIN_PROBE_PIN		19
#elif ENABLED(Z_DUAL_STEPPER_DRIVERS)
#define	Z_MIN_PROBE_PIN		2	//X+
#else
#define Z_MIN_PROBE_PIN  	19	//Z+
#endif
#endif

//
// Steppers
//
#if ENABLED(COREXY_SWAPXY_MOTOR)
#define X_STEP_PIN         60
#define X_DIR_PIN          61
#define X_ENABLE_PIN       56

#define Y_STEP_PIN         54
#define Y_DIR_PIN          55
#define Y_ENABLE_PIN       38
#else
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#endif

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

 /**
  * Default pins for TMC software SPI
  */
#if ENABLED(TMC_USE_SW_SPI)
  #ifndef TMC_SW_MOSI
    #define TMC_SW_MOSI    66
  #endif
  #ifndef TMC_SW_MISO
    #define TMC_SW_MISO    44
  #endif
  #ifndef TMC_SW_SCK
    #define TMC_SW_SCK     64
  #endif
#endif 
//
// Temperature Sensors
//
#define TEMP_0_PIN			13   // Analog Input
#define TEMP_BED_PIN		14   // Analog Input
#define TEMP_1_PIN			15   // Analog Input

#define HEATER_0_PIN		10
#define HEATER_1_PIN		-1
#define	HEATER_BED_PIN		8
#define	FAN_PIN				9
#define	FAN1_PIN			7

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13
#define SD_DETECT_PIN 	   49
 
// define digital pin 4 for the filament runout sensor. Use the RAMPS 1.4 digital input 4 on the servos connector
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN    15   //Y+ 
#endif
 
#ifndef PS_ON_PIN
  #define PS_ON_PIN        12
#endif

//================================================================================
// 							Spindle & Laser control
//================================================================================
#if ENABLED(SPINDLE_LASER_ENABLE)
#define SPINDLE_LASER_ENABLE_PIN	HEATER_0_PIN
#endif

//================================================================================
// 							LCD / Controller
//================================================================================
//LCD 128x64
//================================================================================
#if ENABLED(ZONESTAR_LCD12864)
#define	LCDSCREEN_NAME	"ZONESTAR LCD12864"
#define	LCD_SDSS		16
#define LCD_PINS_RS    	16 // ST7920_CS_PIN	LCD_PIN_RS 		(PIN4 of LCD module)
#define LCD_PINS_ENABLE 23 // ST7920_DAT_PIN	LCD_PIN_R/W		(PIN5 of LCD module)
#define LCD_PINS_D4	   	17 // ST7920_CLK_PIN	LCD_PIN_ENABLE	(PIN6 of LCD module)

// Alter timing for graphical display
#define ST7920_DELAY_1 	DELAY_2_NOP
#define ST7920_DELAY_2 	DELAY_2_NOP
#define ST7920_DELAY_3 	DELAY_2_NOP
#elif ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
#define	LCDSCREEN_NAME	"Reprap LCD12864"
//USE EXP1 & EXP2 CONNECTOR
#define LCD_PINS_RS    	16 // ST7920_CS_PIN	LCD_PIN_RS
#define LCD_PINS_ENABLE 17 // ST7920_DAT_PIN	LCD_PIN_ENABLE
#define LCD_PINS_D4	   	23 // ST7920_CLK_PIN	LCD_PIN_R/W 
// Alter timing for graphical display
#define ST7920_DELAY_1 	DELAY_2_NOP
#define ST7920_DELAY_2 	DELAY_2_NOP
#define ST7920_DELAY_3 	DELAY_2_NOP
#endif

#if ENABLED(MKS_MINI_12864)
#define	LCDSCREEN_NAME	"MKS MINI12864"
#define DOGLCD_CS     	25
#define DOGLCD_A0     	27
#endif
//================================================================================
//OLED 128x64
//================================================================================
#if ENABLED(ZONESTAR_OLED12864)
#define	LCDSCREEN_NAME	"ZONESTAR OLED12864"
#define	LCD_SDSS		16
#define LCD_PINS_RS    	23 				//RESET Pull low for 1s to init
#define LCD_PINS_DC    	17 				//
#define DOGLCD_CS       16				//CS
#if ENABLED(OLED_HW_IIC)
//IIC
#error "Oops!  must choose SW SPI for ZRIB board and connect the OLED screen to EXP1 connector"
#elif ENABLED(OLED_HW_SPI)
//HW_SPI
#error "Oops!  must choose SW SPI for ZRIB board and connect the OLED screen to EXP1 connector"
#else
//SW_SPI
#define DOGLCD_A0       LCD_PINS_DC		//DC
#define	DOGLCD_MOSI		35				//SDA
#define	DOGLCD_SCK		37				//SCK
#endif
#endif//OLED 128x64

//================================================================================
//LCD 2004
//================================================================================
#if ENABLED(ZONESTAR_LCD2004_ADCKEY) || ENABLED(ZONESTAR_LCD2004_KNOB)
#define	LCDSCREEN_NAME	"LCD 2004"
#define LCD_PINS_RS 	16
#define LCD_PINS_ENABLE 17
#define LCD_PINS_D4 	23
#define LCD_PINS_D5 	25
#define LCD_PINS_D6 	27
#define LCD_PINS_D7 	29
#endif

//================================================================================
//	KEYPAD
//================================================================================
#if ENABLED(ZONESTAR_LCD2004_ADCKEY)
#define	LCDSCREEN_NAME	"LCD2004 ADCKEY"
#define	ADC_KEYPAD_PIN	10			//A10 for ADCKEY
#endif

#if ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER)
#if ENABLED(ZONESTAR_LCD12864) 
#define BTN_EN1 		25
#define BTN_EN2 		27
#define BTN_ENC 		29
#define BEEPER_PIN 		37
#define KILL_PIN 		35
#elif ENABLED(ZONESTAR_OLED12864)
#define BTN_EN1 		25
#define BTN_EN2 		27
#define BTN_ENC 		29
#define BEEPER_PIN 		-1
#define KILL_PIN 		-1
#elif ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
#define BTN_EN1 		31
#define BTN_EN2 		33
#define BTN_ENC 		35
#define BEEPER_PIN 		37
#define KILL_PIN 		41
#elif ENABLED(ZONESTAR_LCD2004_KNOB) 
#define BTN_EN1 		31
#define BTN_EN2 		33
#define BTN_ENC 		35
#define BEEPER_PIN 		37
#define KILL_PIN 		41
#endif
#elif ENABLED(MKS_MINI_12864)
#define BTN_EN1 		31
#define BTN_EN2 		33
#define BTN_ENC 		35
#define BEEPER_PIN 		37
#define KILL_PIN 		41
#endif
//================================================================================
// End of LCD / Controller
//================================================================================

