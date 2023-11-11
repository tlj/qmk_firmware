#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT,
    _SYMBOLS,
    _NUMBERS,
    _NAVI,
    _MEDIA,
    _MOUSE,
    _NORDIC,
};

enum unicode_names {
    AE_LOWER,
    AE_UPPER,
    OE_LOWER,
    OE_UPPER,
    AA_LOWER,
    AA_UPPER,
};

const uint32_t PROGMEM unicode_map[] = {
    [AE_LOWER] = 0x00E6,
    [AE_UPPER] = 0x00C6,
    [OE_LOWER] = 0x0153,
    [OE_UPPER] = 0x0152,
    [AA_LOWER] = 0x00E5,
    [AA_UPPER] = 0x00C5,
};

#define KC_ALTA LALT_T(KC_A)
#define KC_CTRS LCTL_T(KC_S)
#define KC_GUID LGUI_T(KC_D)
#define KC_SHFF LSFT_T(KC_F)
#define KC_GNAV LT(_NAVI,KC_G)
#define KC_HNAV LT(_NUMBERS,KC_H)
#define KC_SHFJ RSFT_T(KC_J)
#define KC_GUIK RGUI_T(KC_K)
#define KC_CTRL RCTL_T(KC_L)
#define KC_ALTS RALT_T(KC_SCLN)
#define KC_NORC LT(_NORDIC, KC_C)
#define KC_SYMC LT(_SYMBOLS, KC_SPC)
#define KC_MEHT MEH_T(KC_TAB)
#define KC_SYBS LT(_SYMBOLS, KC_BSPC)
#define KC_GUIR LGUI(KC_R)
#define KC_GUIL LGUI(KC_LBRC)
#define KC_GURB LGUI(KC_RBRC)
#define KC_NOAE UP(AE_LOWER, AE_UPPER)
#define KC_NOOE UP(OE_LOWER, OE_UPPER)
#define KC_NOAA UP(AA_LOWER, AA_UPPER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,            KC_Y,          KC_U,         KC_I,         KC_O,         KC_P,
        KC_ALTA,      KC_CTRS,      KC_GUID,      KC_SHFF,      KC_GNAV,         KC_HNAV,       KC_SHFJ,      KC_GUIK,      KC_CTRL,      KC_ALTS,
        KC_Z,         KC_X,         KC_NORC,      KC_V,         KC_B,            KC_N,          KC_M,         KC_COMM,      KC_DOT,       KC_ENT,
                                                  KC_SYMC,      KC_MEHT,         KC_SYBS,       KC_SYMC
    ),
	[_SYMBOLS] = LAYOUT(
        KC_NO,        KC_PERC,      KC_LCBR,      KC_RCBR,      KC_CIRC,         KC_AMPR,       KC_GRV,       KC_QUOT,      KC_NO,        KC_NO,
        KC_LSFT,      KC_AT,        KC_LPRN,      KC_RPRN,      KC_DLR,          KC_SLSH,       KC_COLN,      KC_EQL,       KC_DQUO,      KC_RSFT,
        KC_NO,        KC_EXCLAIM,   KC_LBRC,      KC_RBRC,      KC_ASTR,         KC_PIPE,       KC_BSLS,      KC_MINS,      KC_NO,        KC_NO,
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
	[_NUMBERS] = LAYOUT(
        KC_NO,        KC_NO,        KC_7,         KC_8,         KC_9,            KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_LSFT,      KC_NO,        KC_4,         KC_5,         KC_6,            KC_NO,         KC_LSFT,      KC_NO,        KC_NO,        KC_LSFT,
        KC_NO,        KC_NO,        KC_1,         KC_2,         KC_3,            KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
                                                  KC_0,         KC_PENT,         KC_NO,         KC_NO
    ),
	[_NAVI] = LAYOUT(
        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,           KC_F6,         KC_F7,        KC_F8,        KC_F9,        KC_F10,
        KC_LALT,      KC_LCTL,      KC_LGUI,      KC_LSFT,      KC_NO,           KC_LEFT,       KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,
        KC_F11,       KC_F12,       KC_NO,        KC_NO,        KC_NO,           KC_HOME,       KC_PGDN,      KC_PGUP,      KC_END,       TG(_MOUSE),
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
	[_MEDIA] = LAYOUT(
        RGB_MOD,      RGB_HUI,      RGB_SAI,      RGB_VAI,      RGB_SPI,         KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        RGB_TOG,      KC_NO,        KC_ESC,       KC_ENT,       KC_NO,           KC_MUTE,       KC_VOLD,      KC_VOLU,      KC_NO,        KC_NO,
        RGB_RMOD,     RGB_HUD,      RGB_SAD,      RGB_VAD,      RGB_SPD,         KC_MPLY,       KC_MPRV,      KC_MNXT,      KC_NO,        KC_NO,
                                                  KC_NO,        QK_BOOT,         KC_NO,         KC_NO
    ),
    [_MOUSE] = LAYOUT(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_WH_D,      KC_WH_U,      KC_NO,        KC_NO,
        KC_NO,        KC_NO,        KC_BTN2,      KC_BTN1,      KC_NO,           KC_MS_L,       KC_MS_D,      KC_MS_U,      KC_MS_R,      KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_GUIR,       KC_GUIL,      KC_GURB,      KC_NO,        TG(_MOUSE),
                                                  KC_NO,        KC_NO,           KC_BTN2,       KC_BTN1
    ),
	[_NORDIC] = LAYOUT(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_LSFT,      KC_NO,           KC_NO,         KC_NOAE,      KC_NOOE,      KC_NOAA,      KC_NO,
        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,
                                                  KC_NO,        KC_NO,           KC_NO,         KC_NO
    ),
};


const uint16_t PROGMEM esc_combo[] = {RSFT_T(KC_J), RGUI_T(KC_K), COMBO_END};
const uint16_t PROGMEM enter_combo[] = {LSFT_T(KC_F), LGUI_T(KC_D), COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(enter_combo, KC_ENT),
};

// for transporting keypresses between halves
bool should_process_keypress(void) { return true; }

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_COMMA:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COMM);
            }
            if (record->event.pressed) {
                tap_code16(LSFT(KC_COMM));
            }
            return false;
    }
    return true;
}

*/

