/* Copyright 2019
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

#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT( \
  KA1, KA2, KA3, KA4, KA5, KA6, KA7, KA8, KA9, KA10, KA11, KA12, KA13, KA14, KA15, \
  KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8, KB9, KB10, KB11, KB12, KB13, KB14, KB15, \
  KC1, KC2, KC3, KC4, KC5, KC6, KC7, KC8, KC9, KC10, KC11, KC12,    KC13,    KC14, \
  KD1, KD2, KD3, KD4, KD5, KD6, KD7, KD8, KD9, KD10, KD11,    KD12,    KD13, KD14, \
  KE1, KE2, KE3,             KE4,              KE5,  KE6,  KE7,  KE8,  KE9,  KE10 \
) { \
{ KA1, KA2, KA3, KA4, KA5, KA6, KA7, KA8, KA9, KA10, KA11, KA12, KA13, KA14, KA15 }, \
{ KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8, KB9, KB10, KB11, KB12, KB13, KB14, KB15 }, \
{ KC1, KC2, KC3, KC4, KC5, KC6, KC7, KC8, KC9, KC10, KC11, KC12, _x_,  KC13, KC14 }, \
{ KD1, KD2, KD3, KD4, KD5, KD6, KD7, KD8, KD9, KD10, KD11, KD12, _x_,  KD13, KD14 }, \
{ KE1, KE2, KE3, _x_, _x_, _x_, KE4, _x_, _x_, KE5, KE6, KE7, KE8, KE9,  KE10 } \
}
