/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
  {
   [0] = LAYOUT_split_3x6_3(
 KC_TAB , KC_QUOT , KC_COMM      , KC_DOT       , KC_P         , KC_Y    , KC_F         , KC_G         , KC_C         , KC_R         , KC_L , KC_BSPC ,
 KC_ESC , KC_A    , LCTL_T(KC_O) , LALT_T(KC_E) , LGUI_T(KC_I) , KC_U    , KC_D         , RGUI_T(KC_H) , RALT_T(KC_T) , RCTL_T(KC_N) , KC_S , KC_ENT  ,
 KC_GRV , KC_SCLN , KC_Q         , KC_J         , KC_K         , KC_X    , KC_B         , KC_M         , KC_W         , KC_V         , KC_Z , KC_SLSH ,
                               TO(2)        , LT(2,KC_ESC) , KC_LSFT , LT(1,KC_SPC) , LT(3,KC_ENT) , TO(0) 
                    ),

   [1] = LAYOUT_split_3x6_3(
 KC_TRNS , KC_1  , KC_2          , KC_3          , KC_4          , KC_5    , KC_6    , KC_BSPC , KC_BSPC , KC_9     , KC_0    , KC_BSPC ,
 TO(0)   , KC_F1 , LCTL_T(KC_F2) , LALT_T(KC_F3) , LGUI_T(KC_F4) , KC_F5   , KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , KC_ENT  , KC_ENT  ,
 KC_TRNS , KC_F6 , KC_F7         , KC_F8         , KC_F9         , KC_F10  , KC_F11  , KC_F12  , KC_BSLS , KC_LBRC  , KC_RBRC , KC_TRNS ,
                                KC_TRNS       , KC_TRNS       , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS 
                          ),

   [2] = LAYOUT_split_3x6_3(
 KC_TRNS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , LSFT(KC_8) , KC_7 , KC_8    , KC_9 , XXXXXXX        , KC_BSPC ,
 TO(0)   , XXXXXXX , KC_LCTL , KC_LALT , KC_LGUI , KC_RBRC , KC_SLSH    , KC_4 , KC_5    , KC_6 , KC_MINS        , KC_ENT  ,
 KC_TRNS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX   , XXXXXXX , KC_EQUAL   , KC_1 , KC_2    , KC_3 , LSFT(KC_EQUAL) , KC_TRNS ,
                            KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    , KC_0 , KC_TRNS 
                           ),

   [3] = LAYOUT_split_3x6_3(
 KC_TRNS , LSFT(KC_1)   , LSFT(KC_2) , LSFT(KC_3) , LSFT(KC_4)    , LSFT(KC_5)    , LSFT(KC_6) , LSFT(KC_7) , XXXXXXX       , XXXXXXX , XXXXXXX , KC_BSPC ,
 TO(0)   , KC_GRV       , KC_LPRN    , KC_RPRN    , KC_LCBR       , KC_BSLS       , XXXXXXX    , KC_QUOT    , LSFT(KC_QUOT) , XXXXXXX , XXXXXXX , KC_ENT  ,
 KC_TRNS , LSFT(KC_GRV) , KC_LBRC    , KC_RBRC    , KC_RCBR       , LSFT(KC_BSLS) , XXXXXXX    , XXXXXXX    , XXXXXXX       , XXXXXXX , XXXXXXX , KC_TRNS ,
                                    KC_TRNS    , LSFT(KC_MINS) , KC_TRNS       , KC_TRNS    , KC_TRNS    , KC_TRNS       
                           )
   };
