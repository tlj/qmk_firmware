/* Copyright 2022 splitkb.com <support@splitkb.com>
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

// Not yet available in `keymap.json` format
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_TIMEOUT 120000
#    define RGB_MATRIX_STARTUP_MODE RBG_MATRIX_JELLYBEANS_RAINDROPS
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#endif

#ifdef OLED_ENABLE
//   Turn off oled after 2 minutes of inactivity
#    define OLED_TIMEOUT 120000
//   Enable transmuttung the current oled on/off status to slave
#    define SPLIT_OLED_ENABLE
#endif

// Not yet available in `keymap.json` format
#ifdef MOUSEKEY_ENABLE
     // The default is 100
#    define MOUSEKEY_WHEEL_INTERVAL 50
     // The default is 40
#    define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif

// extra pins on liatris, used to hack around broken pins
// on first build
#define F11 15U
#define F10 16U

#ifdef RGBLIGHT_ENABLE
#   define RGBLIGHT_EFFECT_BREATHING
#endif

// Enable transmitting modifier state to slave for oled display
#define SPLIT_MODS_ENABLE
// Enable syncing of layer state for oled display on slave
#define SPLIT_LAYER_STATE_ENABLE
// Mirror master side matrix to slave for features to react (rgb/oled)
#define SPLIT_TRANSPORT_MIRROR
// Disable auto shift functionality for alpha characters
#define NO_AUTO_SHIFT_ALPHA

#ifdef WPM_ENABLE
//  Enable transmitting the current WPM to slave for oled display/anim
#   define SPLIT_WPM_ENABLE
#endif


