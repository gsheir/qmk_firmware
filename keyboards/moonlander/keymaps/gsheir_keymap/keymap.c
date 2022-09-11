#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
};

// Keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(                                                                                          // Base
        TD(DANCE_0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE,       // Row 2
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_UP, KC_Y, KC_U, KC_I, TD(DANCE_1), TD(DANCE_2), KC_BSLASH,     // Row 1
        KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_DOWN, KC_H, KC_J, KC_K, TD(DANCE_3), KC_QUOTE, KC_ENTER, // Row 0
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT,                   // Row -1
        KC_LCTRL, KC_LALT, KC_LGUI, KC_LALT, MO(3), KC_NO, MO(7), KC_END, KC_RCTRL, KC_LEFT, KC_RIGHT, KC_NO,         // Row -2
        KC_SPACE, TT(2), TO(1), TT(4), TT(5), KC_SPACE                                                                // Thumb
        ),
    [1] = LAYOUT_moonlander(                                                                                                                                                                                                            // Red
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, // Row 2
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, // Row 1
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, // Row 0
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 // Row -1
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          // Row -2
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT                                                                                                                                  // Thumb
        ),
    [2] = LAYOUT_moonlander(                                                                                                                                                                                     // Function
        KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DELETE,                                                                                             // Row 2
        KC_TRANSPARENT, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, RGB_VAD, RGB_VAI, RGB_TOG, AU_TOG, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_UP, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, // Row 1
        KC_TRANSPARENT, MOON_LED_LEVEL, KC_NO, RGB_SLD, TOGGLE_LAYER_COLOR, RGB_MOD, TO(6), KC_NO, KC_PGUP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_TRANSPARENT,                                                                     // Row 0
        KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_MS_WH_UP, KC_MS_WH_DOWN, KC_PGDOWN, KC_HOME, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT,                                                                                                  // Row -1
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_END, KC_NO, KC_NO, KC_NO, TO(0),                                                                                                                     // Row -2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                                                                                                                                 // Thumb
        ),
    [3] = LAYOUT_moonlander(                                                                                                           // Symbols
        KC_GRAVE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINUS, KC_EQUAL, KC_BSPACE,                 // Row 2
        KC_TRANSPARENT, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRACKET, KC_RBRACKET, KC_BSLASH, // Row 1
        KC_TRANSPARENT, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCOLON, KC_QUOTE, KC_TRANSPARENT, // Row 0
        KC_TRANSPARENT, KC_NO, KC_LABK, KC_RABK, KC_NO, KC_NO, KC_NO, KC_NO, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT,               // Row -1
        KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0),                                   // Row -2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                                                       // Thumb
        ),
    [4] = LAYOUT_moonlander(                                                                                                            // Numpad
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, KC_BSPACE, // Row 2
        KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS, KC_NO,                    // Row 1
        KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, KC_ENTER,          // Row 0
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_NO, KC_NO,                                       // Row -1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_KP_0, KC_KP_0, KC_KP_DOT, KC_NO, TO(0),                                     // Row -2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                                                        // Thumb
        ),
    [5] = LAYOUT_moonlander(                                                                                                      // VSCode                                                                                                                                                                            // a
        KC_NO, KC_F1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, LALT(LGUI(LCTL(KC_R))), KC_NO, KC_NO, KC_NO,            // Row 2
        KC_NO, KC_NO, LSFT(KC_F4), LSFT(KC_F7), LSFT(KC_F6), KC_NO, KC_NO, KC_NO, LSFT(KC_F8), KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, // Row 1
        KC_NO, KC_NO, KC_F4, KC_F7, TD(DANCE_4), KC_NO, KC_NO, KC_NO, KC_PGUP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO,          // Row 0
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDOWN, KC_HOME, KC_NO, KC_NO, KC_NO, KC_NO,                                 // Row -1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_END, KC_NO, KC_NO, KC_NO, TO(0),                                      // Row -2
        TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                                                  // Thumb
        ),
    [6] = LAYOUT_moonlander(                                                                              // Music
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               // Row -1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MU_TOG, MU_MOD, KC_NO, KC_NO, KC_NO, KC_NO, TO(0),             // Row -2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                          // Thumb
        ),
    [7] = LAYOUT_moonlander(                                                                              // System
        RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, // Row 0
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               // Row -1
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_L), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0),          // Row -2
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO                                                          // Thumb
        ),
};

// Lighting

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {{158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {80, 255, 255},  {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {0, 0, 255},     {0, 0, 0},       {0, 0, 255}, {158, 255, 255}, {0, 255, 255}, {0, 255, 255},
           {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 0},       {0, 0, 255},     {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {0, 0, 255},     {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {0, 0, 255}, {158, 255, 255}, {0, 255, 255}, {0, 255, 255}},

    [1] = {{0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 113},
           {0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 188}, {0, 0, 0},     {0, 0, 0}, {0, 255, 255}, {0, 255, 188}, {0, 255, 188}, {0, 255, 113}},

    [2] = {{0, 0, 255}, {0, 0, 0},       {0, 0, 0}, {0, 0, 0}, {0, 0, 0},   {158, 255, 255}, {27, 255, 255},  {39, 255, 255}, {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {27, 255, 255},  {0, 0, 0},   {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {39, 255, 255}, {39, 255, 255}, {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {39, 255, 255}, {39, 255, 255}, {140, 255, 255}, {0, 0, 0},       {158, 255, 255}, {39, 255, 255}, {39, 255, 255},  {140, 255, 255}, {158, 255, 255}, {0, 255, 255},  {0, 255, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
           {0, 0, 0},   {207, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {158, 255, 255}, {207, 255, 255}, {0, 0, 0},      {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {207, 255, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {0, 0, 255},    {0, 0, 255},    {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {78, 255, 255}, {0, 0, 255},    {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {78, 255, 255}, {158, 255, 255}, {158, 255, 255}, {158, 255, 255}, {78, 255, 255}, {0, 0, 0},     {0, 0, 0},   {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {0, 0, 0}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {80, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {39, 255, 255}, {0, 0, 0}, {39, 255, 255}, {0, 0, 0}, {0, 0, 255}, {27, 255, 255}, {27, 255, 255}, {27, 255, 255}, {0, 0, 0}, {0, 0, 0}, {27, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {27, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {39, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [5] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {140, 255, 255}, {158, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {140, 255, 255}, {158, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {39, 255, 255}, {80, 174, 200}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {158, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {80, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {0, 0, 0}, {0, 0, 255}, {158, 255, 255}, {158, 255, 255}, {41, 255, 255}, {0, 0, 0}, {158, 255, 255}, {158, 255, 255}, {41, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [6] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [7] = {{0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

// Indicator lights

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        case 6:
            set_layer_color(6);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

// Tap dance

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[5];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if (state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_ESCAPE);
            break;
        case SINGLE_HOLD:
            register_code16(KC_GRAVE);
            break;
        case DOUBLE_TAP:
            register_code16(KC_ESCAPE);
            register_code16(KC_ESCAPE);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ESCAPE);
            register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ESCAPE);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_GRAVE);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ESCAPE);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ESCAPE);
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if (state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(KC_O);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_O);
            register_code16(KC_O);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_O);
            register_code16(KC_O);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(KC_O);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_O);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_O);
            break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if (state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            register_code16(KC_P);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_P);
            register_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_P);
            register_code16(KC_P);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            unregister_code16(KC_P);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_P);
            break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_L);
        tap_code16(KC_L);
        tap_code16(KC_L);
    }
    if (state->count > 3) {
        tap_code16(KC_L);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            register_code16(KC_L);
            break;
        case SINGLE_HOLD:
            register_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            register_code16(KC_L);
            register_code16(KC_L);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_L);
            register_code16(KC_L);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            unregister_code16(KC_L);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_L);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_L);
            break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if (state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            register_code16(LCTL(KC_F));
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_R));
            break;
        case DOUBLE_TAP:
            register_code16(LCTL(KC_F));
            register_code16(LCTL(KC_F));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LCTL(KC_F));
            register_code16(LCTL(KC_F));
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            unregister_code16(LCTL(KC_F));
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_R));
            break;
        case DOUBLE_TAP:
            unregister_code16(LCTL(KC_F));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LCTL(KC_F));
            break;
    }
    dance_state[4].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset), [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset), [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset), [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset), [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};
