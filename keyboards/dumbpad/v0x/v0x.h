<<<<<<< HEAD
<<<<<<< HEAD:keyboards/dumbpad/v0x/v0x.h
/* Copyright 2020 imchipwood
=======
/* Copyright 2019 monksoffunk
>>>>>>> master:keyboards/cassette42/cassette42.h
=======
/* Copyright 2020 imchipwood
>>>>>>> master
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
#include "quantum.h"

#define LAYOUT( \
<<<<<<< HEAD
<<<<<<< HEAD:keyboards/dumbpad/v0x/v0x.h
=======
>>>>>>> master
             k01, k02, k03, k04, \
             k11, k12, k13, k14, \
             k21, k22, k23, k24, \
        k30, k31, k32, k33, k34 \
<<<<<<< HEAD
=======
        k10,  k11,   \
    k00, k01, k02, k03\
>>>>>>> master:keyboards/cassette42/cassette42.h
) \
{ \
    { k00, k01, k02, k03, k10, k11 }, \
=======
) \
{ \
    { KC_NO, k01, k02, k03, k04 }, \
    { KC_NO, k11, k12, k13, k14 }, \
    { KC_NO, k21, k22, k23, k24 }, \
    { k30,   k31, k32, k33, k34 }, \
>>>>>>> master
}
