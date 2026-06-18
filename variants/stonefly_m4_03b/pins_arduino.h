/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

// 
/*----------------------------------------------------------------------------
 *        Version Information
 *----------------------------------------------------------------------------*/
// clang-format off
/** Package major version number (X.x.x) */
#define ENVIRODIY_SAMD_BOARDS_VERSION_MAJOR 0
/** Package minor version number (x.X.x) */
#define ENVIRODIY_SAMD_BOARDS_VERSION_MINOR 4
/** Patch version number (x.x.X) */
#define ENVIRODIY_SAMD_BOARDS_VERSION_PATCH 2

/** Board major version number (X.x.x) */
#define STONEFLY_M4_03B_VERSION_MAJOR 0
/** Board minor version number (x.X.x) */
#define STONEFLY_M4_03B_VERSION_MINOR 3
/** Board patch version number (x.x.X) */
#define STONEFLY_M4_03B_VERSION_PATCH 7

/**
 * Macro to convert version number into an integer
 *
 * To be used in comparisons, such as STONEFLY_M4_03B_VERSION >= STONEFLY_M4_03B_VERSION_VAL(4, 0, 0)
 */
#define ENVIRODIY_SAMD_BOARDS_VERSION_VAL(major, minor, patch)((major << 16) | (minor << 8) | (patch))
#define STONEFLY_M4_03B_VERSION_VAL(major, minor, patch)((major << 16) | (minor << 8) | (patch))

/**
 * Current Board version, as an integer
 *
 * To be used in comparisons, such as STONEFLY_M4_03B_VERSION >= STONEFLY_M4_03B_VERSION_VAL(4, 0, 0)
 */
#define ENVIRODIY_SAMD_BOARDS_VERSION ENVIRODIY_SAMD_BOARDS_VERSION_VAL(ENVIRODIY_SAMD_BOARDS_VERSION_MAJOR, ENVIRODIY_SAMD_BOARDS_VERSION_MINOR, ENVIRODIY_SAMD_BOARDS_VERSION_PATCH)
#define STONEFLY_M4_03B_VERSION STONEFLY_M4_03B_VERSION_VAL(STONEFLY_M4_03B_VERSION_MAJOR, STONEFLY_M4_03B_VERSION_MINOR, STONEFLY_M4_03B_VERSION_PATCH)
// clang-format on


// API compatibility
#include "variant.h"
