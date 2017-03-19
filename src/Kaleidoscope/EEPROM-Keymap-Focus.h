/* -*- mode: c++ -*-
 * Kaleidoscope-EEPROM-Keymap -- EEPROM-based keymap support.
 * Copyright (C) 2017  Gergely Nagy
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
 */

#pragma once

#include <Kaleidoscope.h>
#include <Kaleidoscope/EEPROM-Keymap.h>

#define FOCUS_HOOK_KEYMAP FOCUS_HOOK(EEPROMKeymap.focusKeymap,          \
                                     "keymap.dump\n"                    \
                                     "-----------\n"                    \
                                     "Dumps the keymap from EEPROM.\n\n" \
                                     "keymap.upload <flag keyCode>...\n" \
                                     "-------------------------------\n" \
                                     "Uploads a new keymap to EEPROM."  \
                                     "Starts at layer 0, row 0, column 0, " \
                                     "and continues as long as there is data on the line.")


#define FOCUS_HOOK_KEYMAP_TRANSFER FOCUS_HOOK(EEPROMKeymap.focusKeymapTransfer, \
                                              "keymap.transfer layer\n" \
                                              "---------------------\n" \
                                              "Transfers the `layer` from PROGMEM to EEPROM.")
