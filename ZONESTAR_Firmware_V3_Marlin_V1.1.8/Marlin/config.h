/**************************************************************************
ZONESTAR 3D PRINTER DIY KIT Firmware Configuaration
http://www.zonestar3d.com/
**************************************************************************/
#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "modellist.h"

/*********************************************************************************************************
//Choose one printer model from the model list
//about the model list, please see the "modellist.h" file
*********************************************************************************************************/
#define	MODEL_NUMBER		P802N_MELZI
/*********************************************************************************************************/
//common setting for all of model
//Some of the settings may be covered behind
/*********************************************************************************************************/
#define	STRING_CONFIG_H_AUTHOR	"(Hally@ZONESTAR)"
#define	_FIRMWARE_RELEASE_DATE_	"2018-09"
#define	SHOW_ZONESTAR_LOGO
//#define	SPINDLE_LASER_ENABLE

#define	X_STEPS_PERMM		80
#define	Y_STEPS_PERMM		80
#define	Z_STEPS_PERMM		400
#define	E_STEPS_PERMM		85

#define	MAX_ACC_X			2000
#define	MAX_ACC_Y			800
#define	MAX_ACC_Z			100

#define X_MIN_ENDSTOP_INVERTING 		true // set to true to invert the logic of the endstop.
#define Y_MIN_ENDSTOP_INVERTING 		true // set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_INVERTING 		true // set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_INVERTING 		false // set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_INVERTING 		false // set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING 		false // set to true to invert the logic of the endstop.
#define Z_MIN_PROBE_ENDSTOP_INVERTING 	true // set to true to invert the logic of the probe.

#define INVERT_X_DIR 				false
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				true

#define X_PROBE_OFFSET_FROM_EXTRUDER 0 //Your BLTouch X_PROBE_OFFSET_FROM_EXTRUDE
#define Y_PROBE_OFFSET_FROM_EXTRUDER -22 //Your BLTouch Y_PROBE_OFFSET_FROM_EXTRUDE
#define Z_PROBE_OFFSET_FROM_EXTRUDER -1.9 //Your BLTouch Z_PROBE_OFFSET_FROM_EXTRUDE

#define Z_SAFE_HOMING
#define TEMP_SENSOR_0 	56
#define TEMP_SENSOR_BED 1
/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cn':'Chinese', 'cz':'Czech', 
 	'cz_utf8':'Czech (UTF8)', 'de':'German', 'el':'Greek', 'el-gr':'Greek (Greece)', 'es':'Spanish', 'eu':'Basque-Euskera', 
 	'fi':'Finnish', 'fr':'French', 'fr_utf8':'French (UTF8)', 'gl':'Galician', 'hr':'Croatian', 'it':'Italian', 
 	'kana':'Japanese', 'kana_utf8':'Japanese (UTF8)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt-br':'Portuguese (Brazilian)', 
 	'pt-br_utf8':'Portuguese (Brazilian UTF8)', 'pt_utf8':'Portuguese (UTF8)', 'ru':'Russian', 'sk_utf8':'Slovak (UTF8)', 'tr':'Turkish', 
 	'uk':'Ukrainian', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Taiwan)', test':'TEST' }
 */
#define LCD_LANGUAGE en

/*********************************************************************************************************/
//END of common setting
/*********************************************************************************************************/


/*********************************************************************************************************/
//Setting for different model
//Prusa i3, Full Acrylic frame, acrylic hotend
//P802C Serial
/*********************************************************************************************************/
#if(MODEL_NUMBER == P802C)  
//P802C, Single extruder,  LCD2004 and 5Key keypad, ZRIB control board, without heatbed
#define CUSTOM_MACHINE_NAME 			"P802C"
#define	STRING_FIRMWARE_VERSION			"V3.0"
#define	_FIRMWARE_RELEASE_DATE_			"2018-10-01"
#define MOTHERBOARD 					BOARD_ZRIB

#ifdef Z_STEPS_PERMM
#undef Z_STEPS_PERMM
#endif
#define	Z_STEPS_PERMM		3200

#define	EXTRUDERS			1
#define	DISABLED_HEATBED

#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define	BED_SIZE 			220
#define X_MIN_POS 			-20
#define Y_MIN_POS 			-10
#define ZONESTAR_LCD2004_ADCKEY
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	500

#elif(MODEL_NUMBER == P802CB)	
//P802C, Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"P802CB"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-01"
#define MOTHERBOARD 				BOARD_ZRIB

#ifdef Z_STEPS_PERMM
#undef Z_STEPS_PERMM
#endif
#define	Z_STEPS_PERMM		3200

#define	EXTRUDERS			1
#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define	BED_SIZE 			220
#define X_MIN_POS 			-20
#define Y_MIN_POS 			-10
#define ZONESTAR_LCD2004_ADCKEY
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	500

#elif (MODEL_NUMBER == P802CR2)
//P802C, Dual extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 			"P802CR2"
#define	STRING_FIRMWARE_VERSION			"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS	2
#undef Z_STEPS_PERMM
#define	Z_STEPS_PERMM					3200
#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define	BED_SIZE 						220
#define X_MIN_POS 						-20
#define Y_MIN_POS 						-10
#define ZONESTAR_LCD2004_ADCKEY
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				500

/*********************************************************************************************************/
//Setting for different model
//Prusa i3, Acrylic frame, metal hotend
//P802N Serial
/*********************************************************************************************************/
#elif (MODEL_NUMBER == P802N_MELZI)	
//P802N 1st version, Single extruder,  LCD2004 and 5Key keypad, Melzi control board
#define CUSTOM_MACHINE_NAME 		"P802N_MELZI"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_MELZI_ZONESTAR

#define	EXTRUDERS					1

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			50

//Bed level
#define	Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
//#define	AUTO_BED_LEVELING_LINEAR
#define AUTO_BED_LEVELING_BILINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

//BLTOUCH
#define	BLTOUCH
#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#elif (MODEL_NUMBER == P802N) 
//P802N 2nd version, Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"P802N"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define	PTFE_TUBE_LENGTH			50
#define ZONESTAR_LCD2004_ADCKEY

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-15
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	-10

#elif (MODEL_NUMBER == P802NR2)
//P802N 2nd version, dual extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"P802NR2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

#define	PTFE_TUBE_LENGTH			500

/*********************************************************************************************************/
//A3 Serial is a customized version for Afinibot, ZONESTAR name is
//A3---P802N
//A3S---P802S
/*********************************************************************************************************/
#elif(MODEL_NUMBER == A3_MELZI)	
//A3(Afinibot), Single extruder,  LCD2004 and 5Key keypad, Melzi control board
#define CUSTOM_MACHINE_NAME 		"A3 Melzi"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD BOARD_MELZI_ZONESTAR

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			50

#define	AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

#elif(MODEL_NUMBER == A3S_MELZI)
//A3S(Afinibot), Single extruder,  LCD2004 and 5Key keypad, Melzi control board
#define CUSTOM_MACHINE_NAME 		"A3S Melzi"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD BOARD_MELZI_ZONESTAR

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			220
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			50

#define	AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

#elif (MODEL_NUMBER == A3S_ZRIB)
//A3S(Afinibot), Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"A3S_ZRIB"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			220
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define	PTFE_TUBE_LENGTH			50
#define ZONESTAR_LCD2004_ADCKEY

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

#elif (MODEL_NUMBER == A3S_ZRIB)
//A3S(Afinibot), Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"A3S_ZRIB"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			220
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			50

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180
/*********************************************************************************************************/
//ANET A8 Serial, Prusa i3, Acrylic frame
/*********************************************************************************************************/
#elif (MODEL_NUMBER == ANET_A8)
//ANET_A8, Single extruder,  LCD2004 and 5Key keypad, ANET_V1.0 control board
#define CUSTOM_MACHINE_NAME 		"A8"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define MOTHERBOARD 				BOARD_ANET_10

#define	X_STEPS_PERMM				100
#define	Y_STEPS_PERMM				100
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				85

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-40
#define Y_MIN_POS 					-10
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			50

//BLTOUCH
//#define	BLTOUCH
//#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
//#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//#define	AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180

#elif (MODEL_NUMBER == ANET_A8R2)
//ANET_A8R2 dual extruder upgrade kit 2nd version, dual extruder, LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"A8R2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	X_STEPS_PERMM				100
#define	Y_STEPS_PERMM				100
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				85

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			500

//BLTOUCH
#define	BLTOUCH
#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

//#define	AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	10
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	180
/*********************************************************************************************************/
//P802Q Serial, Prusa i3, Metal frame
/*********************************************************************************************************/
#elif (MODEL_NUMBER == P802Q_MELZI_5KEY)
//P802Q 1st version, Single extruder,  LCD2004 and 5Key keypad, Melzi control board
#define CUSTOM_MACHINE_NAME 		"P802Q_MELZI_5K"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_MELZI_ZONESTAR

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_ADCKEY
#define	PTFE_TUBE_LENGTH			500
#define	AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	210

#elif (MODEL_NUMBER == P802QS_5KEY)	
//P802Q 2nd version, Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QS_5KEY"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	210
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500

//BLTOUCH
//#define	BLTOUCH
//#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
//#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#elif (MODEL_NUMBER == P802QR2_5KEY)
//P802Q 2nd version, dual extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QR2_5KEY"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	10
#define BACK_PROBE_BED_POSITION 	210
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500

//BLTOUCH
//#define	BLTOUCH
//#define	X_PROBE_OFFSET_FROM_EXTRUDER	20
//#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
//#define	Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

#elif (MODEL_NUMBER == P802QM2_5KEY)
//P802Q 2nd version, 2-IN-1-OUT Mixing extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QM2_5KEY"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-01"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define HEATERS_PARALLEL

#define	BED_SIZE 						220
#define	MAX_PRINT_HEIGHT				240
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-5
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 		30
#define RIGHT_PROBE_BED_POSITION 		190
#define FRONT_PROBE_BED_POSITION 		10
#define BACK_PROBE_BED_POSITION 		210
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				500

#elif ((MODEL_NUMBER == P802QS_KNOB) || (MODEL_NUMBER == M8S))
//P802Q 3nd version, Single extruder,  LCD2004 and knob keypad, ZRIB control board	
#define CUSTOM_MACHINE_NAME 		"QS_KNOB(M8)"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-08-09"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_KNOB
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	5
#define BACK_PROBE_BED_POSITION 	215
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == P802QR2_KNOB)	
//P802Q 3nd version, dual extruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QR2_KNOB"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-01"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_KNOB
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	5
#define BACK_PROBE_BED_POSITION 	215
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500

#elif (MODEL_NUMBER == P802QR2_LCD12864)	
//P802QR2, dual extruder,  LCD128x64 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QR2_LCD12864"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	5
#define BACK_PROBE_BED_POSITION 	215
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500

#elif (MODEL_NUMBER == P802QR2_MINI12864)	
//P802QR2, dual extruder,  LCD128x64 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"QR2_Mini12864"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define MKS_MINI_12864
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	190
#define FRONT_PROBE_BED_POSITION 	5
#define BACK_PROBE_BED_POSITION 	215
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500

#elif ((MODEL_NUMBER == P802QM2_KNOB) || (MODEL_NUMBER == M8R2))
//P802Q 3nd version, 2-IN-1-OUT Mixing extruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"M8R2"
#define	STRING_FIRMWARE_VERSION		"V3.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-12"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define HEATERS_PARALLEL
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_KNOB
#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	30
#define RIGHT_PROBE_BED_POSITION 	200
#define FRONT_PROBE_BED_POSITION 	30
#define BACK_PROBE_BED_POSITION 	200
#define	PTFE_TUBE_LENGTH			500


/********************************************************************************************************/
//D805 & Z5 Serial
/********************************************************************************************************/
#elif (MODEL_NUMBER == D805)	
//D805 1st version, Single extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			240
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-5
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	180
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	400

#elif (MODEL_NUMBER == D805R2)
//D805 1st version, dual extruder,  LCD2004 and 5Key keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805R2"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-20
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	180
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	400

#elif (MODEL_NUMBER == D805S)
//D805S 2nd version, Single extruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805S"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-10"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD2004_KNOB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define Z_MIN_POS 					0
#define	ADJUST_Z_MIN_POS

#ifdef ADJUST_Z_MIN_POS
#define	DISABLE_BEDLEVELING_SENSOR
#else
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	180
#define AUTO_BED_LEVELING_LINEAR
#endif
#define	PTFE_TUBE_LENGTH	400

#elif (MODEL_NUMBER == D805SR2)	
//D805S 2nd version, dual exetruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805SR2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-10"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD2004_KNOB

#define	EXTRUDERS					2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-20
#define Z_MIN_POS 					0
//#define	ADJUST_Z_MIN_POS

#ifdef ADJUST_Z_MIN_POS
#define	DISABLE_BEDLEVELING_SENSOR
#else
#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	180
#endif

#define	PTFE_TUBE_LENGTH			400
//#define SPI_SPEED SPI_HALF_SPEED

#elif (MODEL_NUMBER == D805SM2)
//D805S 2nd version, 2-IN-1-OUT Mixing exetruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805SM2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-06"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD2004_KNOB

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define HEATERS_PARALLEL
#define	PTFE_TUBE_LENGTH			400

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS					-10
#define Y_MIN_POS					-20
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	180
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z5N_ZRIB)
//Z5 3rd version, Single exetruder,  Reprap LCD12864 and knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z5N_ZRIB"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-01"

#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230

#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	400

#elif (MODEL_NUMBER == Z5NM2_ZRIB)
//Z5 3rd version, 2-IN-1-OUT Mixing exetruder,  Reprap LCD12864 and knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z5NM2_ZRIB"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-01"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS	1
#define MIXING_EXTRUDER
#define HEATERS_PARALLEL

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					220
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20

#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	180
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH	400

#elif (MODEL_NUMBER == Z5N_ZMIB)
//Z5 3rd version, Single exetruder,  LCD12864 and knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z5N_ZMIB"
#define	STRING_FIRMWARE_VERSION		"V3.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-20"

#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_LCD12864
#define	SHOW_VERSION_ONBOOT

#define	EXTRUDERS					1
#define	USE_SOFTWARE_SPI			1
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-30
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_Z_MIN_POS

#define	PTFE_TUBE_LENGTH			400

#elif (MODEL_NUMBER == Z5NM2_ZMIB)
//Z5 3rd version, 2-IN-1-OUT Mixing exetruder,  LCD12864 and knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z5NM2_ZMIB"
#define	STRING_FIRMWARE_VERSION		"V3.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-01"
#define MOTHERBOARD 				BOARD_ZMIB
#define ZONESTAR_LCD12864
#define	SHOW_VERSION_ONBOOT

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	USE_SOFTWARE_SPI			1

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_Z_MIN_POS

#define	PTFE_TUBE_LENGTH			400

//PID paramter for hotend Z5NM2
#define  DEFAULT_Kp 46.8
#define  DEFAULT_Ki 3.86
#define  DEFAULT_Kd 141.85

/*************************************************************************************************/
//D806 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == D806)
//D806 1st version, Single extruder, LCD2004 and 5Key keypad, ZRIB control board, without heatbed
#define CUSTOM_MACHINE_NAME 		"D806"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	DISABLED_HEATBED
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	130
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	130
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			300


#elif (MODEL_NUMBER == D806B)	
//D806 1st version, Single extruder, LCD2004 and 5Key keypad, ZRIB control board, 
#define CUSTOM_MACHINE_NAME 		"D806B"
#define	STRING_FIRMWARE_VERSION		"V1.3"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define ZONESTAR_LCD2004_ADCKEY
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	130
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	130
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			300

/*************************************************************************************************/
//Z6 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z6)	
//D806 2nd version, Single extruder, OLED128x64 and Knob keypad, ZMIB control board, without heatbed
#define CUSTOM_MACHINE_NAME 		"Z6"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-29"
#define MOTHERBOARD 				BOARD_ZMIB

#define	USE_SOFTWARE_SPI			1
#define ZONESTAR_OLED12864
#define	SHOW_VERSION_ONBOOT

#define	EXTRUDERS					1
#define	DISABLED_HEATBED
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_Z_MIN_POS

#define	PTFE_TUBE_LENGTH			300
#define  DEFAULT_Kp 20
#define  DEFAULT_Ki 1.6
#define  DEFAULT_Kd 62

#elif (MODEL_NUMBER == Z6B)	
//D806 2nd version, Single extruder, OLED128x64 and Knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z6B"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-29"
#define MOTHERBOARD 				BOARD_ZMIB

#define	EXTRUDERS					1
#define	USE_SOFTWARE_SPI			1
#define ZONESTAR_OLED12864
#define	SHOW_VERSION_ONBOOT

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false

#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_Z_MIN_POS

#define	PTFE_TUBE_LENGTH			300
#define  DEFAULT_Kp 				20
#define  DEFAULT_Ki 				1.6
#define  DEFAULT_Kd 				62

#elif (MODEL_NUMBER == Z6B_WiFi)	
//D806 2nd version, Single extruder, OLED128x64 and Knob keypad, ZMIB control board
#define CUSTOM_MACHINE_NAME 		"Z6B_WiFi"
#define	STRING_FIRMWARE_VERSION		"Firmware Ver:V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-30"
#define MOTHERBOARD 				BOARD_ZMIB
#define	WIFISUPPORT

#define	EXTRUDERS					1
#define	USE_SOFTWARE_SPI			0
//#define ZONESTAR_OLED12864
//#define	SHOW_VERSION_ONBOOT

#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false

#define	BED_SIZE 					150
#define X_MIN_POS 					-20
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-3
#define	ADJUST_Z_MIN_POS

#define	PTFE_TUBE_LENGTH			300
#define  DEFAULT_Kp 				20
#define  DEFAULT_Ki 				1.6
#define  DEFAULT_Kd 				62

/*************************************************************************************************/
//D808 & Z8 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z8)	
//D808 1st version, Single extruder, LCD12864 and knob keypad, ZRIB control board,
#define CUSTOM_MACHINE_NAME 		"Z8&Z8H"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-01"

#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define USE_DUAL_HEATBED_PINS

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-15
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	200
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200

#define	PTFE_TUBE_LENGTH			400

#elif (MODEL_NUMBER == Z8R2)
//D808 1st version, dual extruder, LCD12864 and knob keypad, ZRIB control board,
#define CUSTOM_MACHINE_NAME 		"Z8R2&Z8HR2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-01"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS	2
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-15
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0


#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	200
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			400

#elif (MODEL_NUMBER == Z8M2)	
//D808 1st version, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board,
#define CUSTOM_MACHINE_NAME 		"Z8M2&Z8HM2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-01"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS	1
#define	MIXING_EXTRUDER
#define USE_DUAL_HEATBED_PINS

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-15
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	200
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			400

#elif (MODEL_NUMBER == Z8M3)	
//D808 1st version, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board,
#define CUSTOM_MACHINE_NAME 		"Z8M3&Z8HM3"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-01"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define	MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define USE_DUAL_HEATBED_PINS

#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-15
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	200
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	200

#define	PTFE_TUBE_LENGTH			400

#elif (MODEL_NUMBER == Z8X)	
//D808X(Z8X) 1st version, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8X"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-07"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define	USE_DUAL_HEATBED_PINS

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280

#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z8XR2)
//Z8X 1st version, dual extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8XR2"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					2
#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z8XM2)
//Z8X 1st version, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8XM2"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-07"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	USE_DUAL_HEATBED_PINS

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10

#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280
#define AUTO_BED_LEVELING_LINEAR

#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z8XM3)
//Z8X 1st version, 3-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8XM3"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-07"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define	USE_DUAL_HEATBED_PINS

#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280

#define	PTFE_TUBE_LENGTH			500

#elif (MODEL_NUMBER == Z8XS_M2)
//Z8X 1st version, 2-IN-1-OUT Mixing extruder, ZONESTAR LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8XS_M2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-07"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	USE_DUAL_HEATBED_PINS

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280

#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z8XS_M3)
//Z8X 1st version, 3-IN-1-OUT Mixing extruder, ZONESTAR LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z8XS_M3"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-07"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define	USE_DUAL_HEATBED_PINS

#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-20
#define Y_MIN_POS 					-10
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	280
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	280

#define	PTFE_TUBE_LENGTH			500

/*************************************************************************************************/
//Z9 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z9)
//Z9 Croexy, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9Croexy"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS	1
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			700

#elif (MODEL_NUMBER == Z9M2)
//Z9 Croexy, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9M2 Croexy"
#define	STRING_FIRMWARE_VERSION		"V3.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-23"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			700

#elif (MODEL_NUMBER == Z9R2)
//Z9 Croexy, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9R2 Croexy"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-26"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS						2
#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 					true
#define INVERT_Y_DIR 					true
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				700


#elif (MODEL_NUMBER == Z9M3)
//Z9 Croexy, 3-IN-1-OUT Mixing  extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9M3 Croexy"
#define	STRING_FIRMWARE_VERSION		"V3.3"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-2"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR

#define	X_STEPS_PERMM					80
#define	Y_STEPS_PERMM					80
#define	Z_STEPS_PERMM					400
#define	E_STEPS_PERMM					85

#define	MAX_ACC_X						800
#define	MAX_ACC_Y						800
#define	MAX_ACC_Z						100

#define INVERT_X_DIR 					true
#define INVERT_Y_DIR 					true
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				700

#elif (MODEL_NUMBER == Z9S_S)
//Z9 Croexy 2nd Version, Single extruder, ZONESTAR LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9S_S"
#define	STRING_FIRMWARE_VERSION		"V4.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-19"

#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260

#define	PTFE_TUBE_LENGTH			700

#elif (MODEL_NUMBER == Z9S_R2)
//Z9 Croexy 2nd Version, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9S_R2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-26"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					2
#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 					true
#define INVERT_Y_DIR 					true
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260

#define	PTFE_TUBE_LENGTH			700


#elif (MODEL_NUMBER == Z9S_M2)
//Z9 Croexy 2nd Version, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9S_M2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-19"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260

#define	PTFE_TUBE_LENGTH			700

#elif (MODEL_NUMBER == Z9S_M3)
//Z9 Croexy 2nd Version, 3-IN-1-OUT Mixing  extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9S_M3"
#define	STRING_FIRMWARE_VERSION		"V1.1"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-30"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD12864

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define	COREXY_SWAPXY_MOTOR

/*
#define	X_STEPS_PERMM				80
#define	Y_STEPS_PERMM				80
#define	Z_STEPS_PERMM				400
#define	E_STEPS_PERMM				85
*/

#define	MAX_ACC_X					800
#define	MAX_ACC_Y					800
#define	MAX_ACC_Z					100

#define INVERT_X_DIR 					true
#define INVERT_Y_DIR 					true
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0

#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260

#define	PTFE_TUBE_LENGTH				700


#elif (MODEL_NUMBER == Z9H)
//Z9 HBOT, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9HBOT"
#define	STRING_FIRMWARE_VERSION		"V2.0"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS						1
#define	USE_DUAL_HEATBED_PINS
#define	COREXY
#define INVERT_X_DIR 					false
#define INVERT_Y_DIR 					false
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				700

#define	X_STEPS_PERMM					80
#define	Y_STEPS_PERMM					80
#define	Z_STEPS_PERMM					400
#define	E_STEPS_PERMM					85

#define	MAX_ACC_X						800
#define	MAX_ACC_Y						800
#define	MAX_ACC_Z						100

#elif (MODEL_NUMBER == Z9HM2)
//Z9 HBOT, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 			"Z9M2 HBOT"
#define	STRING_FIRMWARE_VERSION			"V3.0"
#define	_FIRMWARE_RELEASE_DATE_			"2018-09-01"
#define MOTHERBOARD 					BOARD_ZRIB

#define	EXTRUDERS	1
#define MIXING_EXTRUDER
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define INVERT_X_DIR 					false
#define INVERT_Y_DIR 					false
#define INVERT_Z_DIR 					false
#define	BED_SIZE 						300
#define	MAX_PRINT_HEIGHT				400
#define X_MIN_POS 						-10
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 		20
#define RIGHT_PROBE_BED_POSITION 		260
#define FRONT_PROBE_BED_POSITION 		20
#define BACK_PROBE_BED_POSITION 		260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH				700

#elif (MODEL_NUMBER == Z9HM3)
//Z9 HBOT, 3-IN-1-OUT Mixing  extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z9M3 HBOT"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-01"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define	MIXING_3_IN_1_OUT
#define	USE_DUAL_HEATBED_PINS

#define	COREXY
#define INVERT_X_DIR 				false
#define INVERT_Y_DIR 				false
#define INVERT_Z_DIR 				false
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-10
#define Y_MIN_POS 					-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-30
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LEFT_PROBE_BED_POSITION 	20
#define RIGHT_PROBE_BED_POSITION 	260
#define FRONT_PROBE_BED_POSITION 	20
#define BACK_PROBE_BED_POSITION 	260
#define AUTO_BED_LEVELING_LINEAR
#define	PTFE_TUBE_LENGTH			700


/*************************************************************************************************/
//Z10 Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == Z10_REPRAPLCD)
//Z10, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z10"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-08-04"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define	USE_DUAL_HEATBED_PINS
#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-45
#define Y_MIN_POS 					0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define	Z_DUAL_STEPPER_DRIVERS
#define	DISABLE_BEDLEVELING_SENSOR

#define	PTFE_TUBE_LENGTH			500


#elif (MODEL_NUMBER == Z10M2_REPRAPLCD)
//Z10, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board	
#define CUSTOM_MACHINE_NAME 		"Z10M2"
#define	STRING_FIRMWARE_VERSION		"V3.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-09-01"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					300
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-45
#define Y_MIN_POS 					0
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define	Z_DUAL_STEPPER_DRIVERS
#define	USE_DUAL_HEATBED_PINS
#define	DISABLE_BEDLEVELING_SENSOR

#define	PTFE_TUBE_LENGTH	500

#elif (MODEL_NUMBER == Z10_ZONESTARLCD)
//Z10, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z10"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-20"
#define MOTHERBOARD 				BOARD_ZRIB

#define	EXTRUDERS					1
#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					-8
#define	ADJUST_Z_MIN_POS

#define ZONESTAR_LCD12864
#define	Z_DUAL_STEPPER_DRIVERS
#define	DISABLE_BEDLEVELING_SENSOR

#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0
#define	USE_DUAL_HEATBED_PINS
#define	PTFE_TUBE_LENGTH			500
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15

#elif (MODEL_NUMBER == Z10M2_ZONESTARLCD)
//Z10, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board	
#define CUSTOM_MACHINE_NAME 		"Z10M2"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-10-20"
#define MOTHERBOARD 				BOARD_ZRIB
#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define ZONESTAR_LCD12864
#define	USE_DUAL_HEATBED_PINS
#define	DISABLE_BEDLEVELING_SENSOR

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_Z_MIN_POS

#define	Z_DUAL_STEPPER_DRIVERS
#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0
#define	PTFE_TUBE_LENGTH			500
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15

#elif (MODEL_NUMBER == Z10S)
//Z10, Single extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"Z10S"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-20"
#define MOTHERBOARD 				BOARD_ZRIBV6

#define	EXTRUDERS					1
#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_Z_MIN_POS

#define ZONESTAR_LCD12864
#define	Z_DUAL_STEPPER_DRIVERS
#define	DISABLE_BEDLEVELING_SENSOR

#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0
#define	PTFE_TUBE_LENGTH			500
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15

#elif (MODEL_NUMBER == Z10S_M2)
//Z10, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board	
#define CUSTOM_MACHINE_NAME 		"Z10S_M2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define	_FIRMWARE_RELEASE_DATE_		"2018-12-20"
#define MOTHERBOARD 				BOARD_ZRIBV6
#define	EXTRUDERS					1
#define MIXING_EXTRUDER
#define ZONESTAR_LCD12864
#define	USE_DUAL_HEATBED_PINS
#define	DISABLE_BEDLEVELING_SENSOR

#undef	MAX_ACC_Y	
#define	MAX_ACC_Y					400
#define	BED_SIZE 					310
#define	MAX_PRINT_HEIGHT			400
#define X_MIN_POS 					-40
#define Y_MIN_POS 					0
#define Z_MIN_POS 					0
#define	ADJUST_Z_MIN_POS

#define	Z_DUAL_STEPPER_DRIVERS
#define	Z_DUAL_ENDSTOPS_ADJUSTMENT	0
#define	PTFE_TUBE_LENGTH			500
#define	DISTANCE_TO_CORNER_X		15
#define	DISTANCE_TO_CORNER_Y		15
/*************************************************************************************************/
//Test Serial
/*************************************************************************************************/
#elif (MODEL_NUMBER == ZA6_R2)
//Z9 Croexy, 2-IN-1-OUT Mixing extruder, LCD12864 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"ZA6_R2"
#define	STRING_FIRMWARE_VERSION		"V1.0"
#define MOTHERBOARD 				BOARD_ZRIB
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

#define	X_STEPS_PERMM				160
#define	Y_STEPS_PERMM				160
#define	Z_STEPS_PERMM				800
#define	E_STEPS_PERMM				170

#define	EXTRUDERS					2
#define SINGLENOZZLE
#define	COREXY
#define	COREXY_SWAPXY_MOTOR
#define INVERT_X_DIR 				true
#define INVERT_Y_DIR 				true
#define INVERT_Z_DIR 				false
#define	INVERT_E0_DIR				true
#define	INVERT_E1_DIR				true

#define	BED_SIZE 						600
#define	MAX_PRINT_HEIGHT				100
#define X_MIN_POS 						0
#define Y_MIN_POS 						-20
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-35
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	-20

#define	BLTOUCH
#define	X_PROBE_OFFSET_FROM_EXTRUDER	-25
#define	Y_PROBE_OFFSET_FROM_EXTRUDER	-5
#define AUTO_BED_LEVELING_LINEAR
#define LEFT_PROBE_BED_POSITION 		50
#define RIGHT_PROBE_BED_POSITION 		550
#define FRONT_PROBE_BED_POSITION 		50
#define BACK_PROBE_BED_POSITION 		550

#define	PTFE_TUBE_LENGTH				800
#define	Z_MOTOR_USE_E2_MOT

//Parameter for Hotend & heatbed
#define  DEFAULT_Kp 					47
#define  DEFAULT_Ki 					8
#define  DEFAULT_Kd 					66
#define	BED_MAXTEMP						85
#define	TEMP_SENSOR_BED					58
#endif
/*********************************************************************************************************
Setting for different model
*********************************************************************************************************/


/*********************************************************************************************************
other settings accoring to different control board
*********************************************************************************************************/
#if ((MOTHERBOARD == BOARD_ZMIB) || (MOTHERBOARD == BOARD_MELZI_ZONESTAR) || (MOTHERBOARD == BOARD_ANET_10))
#if ENABLED(AUTO_BED_LEVELING_LINEAR)
#define	Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#else
#define	DISABLE_BEDLEVELING_SENSOR
#endif
#define FAN_SOFT_PWM
#elif(MOTHERBOARD == BOARD_ZRIB)
#define	INDIVIDUAL_AXIS_HOMING_MENU
#define	LCD_INFO_MENU
#define	PRINTCOUNTER
#define SDCARD_SORT_ALPHA
#define ARC_SUPPORT 
#define AUTOTEMP
#endif
/*********************************************************************************************************
other settings
*********************************************************************************************************/

#endif // __CONFIG_H__
