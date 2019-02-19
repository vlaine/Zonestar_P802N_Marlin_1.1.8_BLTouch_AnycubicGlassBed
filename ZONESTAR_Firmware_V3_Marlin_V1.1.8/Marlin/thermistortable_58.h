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

// ZONESTAR ZA6
const short temptable_58[][2] PROGMEM = {
  { OV(   1), 938 },
  { OV(  38), 320 },
  { OV(  80), 300 }, 
  { OV( 800), 120 },
  { OV( 820),  115 },
  { OV( 861),  105 },
  { OV( 865),  100 },
  { OV( 870),  90 },
  { OV( 875),  80 },
  { OV( 881),  75 },
  { OV( 891),  70 },
  { OV( 911),  60 },
  { OV( 925),  50 },
  { OV( 940),  40 },
  { OV( 966),  30 },
  { OV( 968),  28 },
  { OV( 980),  23 },
  { OV( 991),  17 },
  { OV(1000),   9 },
  { OV(1021), -27 }
};
