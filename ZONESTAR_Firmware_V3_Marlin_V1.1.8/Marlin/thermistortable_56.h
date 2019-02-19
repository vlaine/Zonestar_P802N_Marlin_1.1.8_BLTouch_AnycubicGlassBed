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

// QU-BD silicone bed QWG-104F-3950 thermistor
const short temptable_56[][2] PROGMEM = {
  { OV(   1), 938 },
  { OV(   8), 320 },
  { OV(  16), 300 },
  { OV(  27), 290 },
  { OV(  36), 272 },
  { OV(  47), 258 },
  { OV(  56), 248 },
  { OV(  68), 245 },
  { OV(  78), 237 },
  { OV(  89), 228 },
  { OV(  99), 221 },
  { OV( 110), 215 },
  { OV( 120), 209 },
  { OV( 131), 204 },
  { OV( 141), 199 },
  { OV( 151), 195 },
  { OV( 161), 190 },
  { OV( 171), 187 },
  { OV( 181), 183 },
  { OV( 201), 179 },
  { OV( 221), 170 },
  { OV( 251), 165 },
  { OV( 271), 160 },
  { OV( 291), 150 },
  { OV( 301), 144 },
  { OV( 351), 139 },
  { OV( 381), 133 },
  { OV( 411), 128 },
  { OV( 431), 123 },
  { OV( 471), 117 },
  { OV( 511), 111 },
  { OV( 551), 105 },
  { OV( 596), 100 },
  { OV( 626),  95 },
  { OV( 666),  90 },
  { OV( 697),  85 },
  { OV( 721),  79 },
  { OV( 741),  72 },
  { OV( 798),  69 },
  { OV( 819),  65 },
  { OV( 861),  57 },
  { OV( 870),  55 },
  { OV( 881),  51 },
  { OV( 911),  45 },
  { OV( 922),  39 },
  { OV( 968),  28 },
  { OV( 980),  23 },
  { OV( 991),  17 },
  { OV(1000),   9 },
  { OV(1021), -27 }
};
