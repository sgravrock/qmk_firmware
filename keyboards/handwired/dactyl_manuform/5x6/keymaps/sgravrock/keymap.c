/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H
#include "print.h"


#define _QWERTY 0
#define _RAISE 1

#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_EQL , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESC , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                      KC_GRAVE,TT(_RAISE) ,                                                        KC_LBRC, KC_RBRC,
                                                      // Outboard thumb keys
                                      KC_LSFT,KC_BSPC,                        KC_ENT,  KC_SPC,
                                                      // Middle thumb keys
                                      KC_LGUI,KC_LALT,                        KC_LGUI, KC_LCTL,
                                                      // Inboard thumb keys
                                      KC_END ,KC_HOME,                        KC_PGUP, KC_PGDN
  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,RESET  ,_______,                        _______,_______,_______,_______,_______,KC_MUTE,
       _______,_______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,KC_UP  ,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,KC_DOWN,KC_RGHT,
                                               _______,_______,            _______,KC_LEFT,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               KC_VOLD,KC_VOLU,            _______,_______
  ),
};

void keyboard_post_init_user(void) {
    debug_enable=true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    int highest = get_highest_layer(state);
    dprintf("Highest layer: %d\n", get_highest_layer(state));

    switch (highest) {
        case _RAISE:
            breathing_disable();
            break;
        default:
            breathing_enable();
    }

    return state;
}
