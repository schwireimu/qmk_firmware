#include QMK_KEYBOARD_H

enum Combo_Key
{
  ALT_F4,
 // BTESC_WINLK
};

enum Macro_Key
{
  MACRO_RBRKT=SAFE_RANGE,
  MACRO_CBRKT,
  KN_NK,
  KBD_OS_LK,
  KBD_LK,
  KBD_ULK,
  EM_1,  //>_<
  EM_2,  //>.<
  EM_3,  //@_@
  EM_4,  //(스담스담)
 // EM_5	//(새근새근)

};


const uint16_t PROGMEM cls_win[] = { KC_LALT, KC_4, COMBO_END };
//const uint16_t PROGMEM win_lk[] = { KC_ESC, KC_GRV, COMBO_END };
combo_t key_combos[] = {
      [ALT_F4] = COMBO_ACTION(cls_win),
//      [BTESC_WINLK] = COMBO_ACTION(win_lk)
  };
// Defines the keycodes used by our macros in process_record_user
/*
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYOUT_65_ansi (Base Layer) Default Layer 0
   * ,-----------------------------------------------------------.
   * |` ~|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Prt|Mut|
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |CtrlEsc|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|
   * |-----------------------------------------------------------|
   * |Esc |Win |Alt | Space |LT(1,Del)|Space|Alt| FN |Lef|Rgt|Dow|
   * `-----------------------------------------------------------'
   */
	[0]=Layout_Reimu(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_PSCR, KC_MUTE,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT(MOD_RSFT, KC_BSPC), KC_UP,
		KC_ESC, KC_LGUI, KC_LALT, KC_SPC, LT(4,KC_DEL), MO(1), KC_RALT, MO(8), KC_LEFT, KC_RGHT, KC_DOWN),

/* LAYOUT_65_ansi (Unicode Layer) Layer 1
   * ,-----------------------------------------------------------.
   * |` ~|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Prt|Mut|
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  ↖|  ↑|  ↗|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   | ♬|  ☆|  D|  F|  G|  ↙|  ←|  ↓|  →|  ↘|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  Up  |Up |
   * |-----------------------------------------------------------|
   * |Esc |Win |Alt | Space |LT(1,Del)|TG(1)|Alt| FN |Lef|Dwn|Rgt|
   * `-----------------------------------------------------------'
   */
	[1]=Layout_Reimu(
		KC_TRNS, UC(0x2680), UC(0x2681), UC(0x2682), UC(0x2683), UC(0x2684), UC(0x2685), KC_TRNS, KC_TRNS, UC(0x2468), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, UC_WINC, UC_LNX, KC_TRNS, KC_TRNS, UC(0x2122), KC_TRNS, UC(0x2196), UC(0x2191), UC(0x2197), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, UC(0x266C), UC(0x2606), UC(0x2661), UC(0x2665), UC(0x26E9), UC(0x2199), UC(0x2190), UC(0x2193), UC(0x2192), UC(0x2198), KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_RGHT),

/* LAYOUT_65_ansi (Base Layer) Default Layer 2
   * ,-----------------------------------------------------------.
   * |` ~|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Prt|Mut|
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  ↖|  ↑|  ↗|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   | A | S |  D|  F|  G|  ↙|  ←|  ↓|  →|  ↘|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  Up  |Up |
   * |-----------------------------------------------------------|
   * |Esc |Win |Alt | Space |LT(1,Del)|TG(1)|Alt| FN |Lef|Dwn|Rgt|
   * `-----------------------------------------------------------'
   */
	[2]=Layout_Reimu(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_UP,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_RGHT),



/* LAYOUT_65_ansi Layer 3
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * | Tap | ㅒ| ㅑ| ㅐ| ㅓ| ㅕ| ㄹ| ㄷ| ㅁ| ㅊ| ㅍ| [ | ] | \   |
   * |-----------------------------------------------------------|
   * | Ctrl | ㅠ| ㅖ| ㅣ| ㅏ| ㅡ| ㄴ| ㅇ| ㄱ| ㅈ| ㅂ| ㅌ| Enter  |
   * |-----------------------------------------------------------|
   * | Shift  |NO | ㅛ| ㅔ| ㅗ| ㅜ| ㅅ| ㅎ| , | . | ㅋ| Shift| Up|
   * |-----------------------------------------------------------|
   * |    |    |    |       |     |         |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
    [3]=Layout_Reimu(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, S(KC_O), KC_I, KC_O, KC_J, KC_U, KC_F,KC_E, KC_A, KC_C, KC_V, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_TRNS, KC_B, S(KC_P), KC_L, KC_K, KC_M, KC_S, KC_D, KC_R, KC_W, KC_Q, KC_X, KC_ENT,
		KC_TRNS, KN_NK, KC_Y, KC_P, KC_H, KC_N, KC_T, KC_G, KC_COMM, KC_DOT, KC_Z, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  /* LAYOUT_65_ansi MOD Layer 4  
   * ,-----------------------------------------------------------.
   * |Esc|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|APr|   |
   * |-----------------------------------------------------------|
   * |CpsLk|TG3|MO4|BPg|BNx|ReT|   |BDS|FDS|   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |Ctrl  |Hom|PgD|PgU|End|   |Lef|Dwn|Up |Rgt|() |{} |        |
   * |-----------------------------------------------------------|
   * |        |EM1|EM2|EM3|EM4|   |   |TG5|   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |       |     |  TG(3)  |   |    |WLe|WRg|   |
   * `-----------------------------------------------------------'
   */

	[4]=Layout_Reimu(
		KC_LOCK, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, A(KC_PSCR), KC_TRNS,
		KC_CAPS, TG(5), MO(6), KC_WBAK, KC_WFWD, C(S(KC_T)), KC_TRNS, KC_TRNS, C(G(KC_LEFT)), C(G(KC_RGHT)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_LCTL, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, MACRO_RBRKT, MACRO_CBRKT, KC_TRNS,
		KC_TRNS, EM_1, EM_2, EM_3, EM_4, KC_TRNS, KC_TRNS, TG(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(3), KC_RCTL, KC_TRNS, G(S(KC_LEFT)), G(S(KC_RGHT)), KC_TRNS),
/* LAYOUT_65_ansi (Keypad) Layer 3
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |NmL| 7 | 8 | 9 | / |   |   |  |    |
   * |-----------------------------------------------------------|
   * | TAB |TG4|   |   |   |   |   | 4 | 5 | 6 | * |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |TG4| 1 | 2 | 3 | - |   |  Enter |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   | 0 | 0 | . | + |BkSpc |   |
   * |-----------------------------------------------------------|
   * |    |    |    |       | TG4 |         |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
	[5]=Layout_Reimu(
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_NLCK, KC_7, KC_8, KC_9, KC_PSLS, KN_NK, KN_NK, KN_NK, KN_NK,
		KC_TAB, TG(5), KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_4, KC_5, KC_6, KC_PAST, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, TG(5), KC_1, KC_2, KC_3, KC_PMNS, KN_NK, KC_ENT,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_0, KC_0, KC_PDOT, KC_PPLS, KC_BSPC, KN_NK,
		TG(5), KN_NK, KN_NK, KN_NK, TG(5), KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK),


/* LAYOUT_65_ansi (MouseKey&KBD Lk) Layer 4
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * |     |   |   |   | R |   | Y |BT4|MSU|BT5|   |   |   |     |
   * |-----------------------------------------------------------|
   * |CTRL  |   |   |   |   |   |   |MSL|MSD|MSR|WCL|   | Enter  |
   * |-----------------------------------------------------------|
   * | Shift  |   |   | C | V |   |   |TG5|   |   |   |BkSpc |   |
   * |-----------------------------------------------------------|
   * |Esc |    |    | RCLK | WLYR | LCLK    |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
  [6]=Layout_Reimu(
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KC_R, KN_NK, KC_Y, KC_BTN4, KC_MS_U, KC_BTN5, KN_NK, KN_NK, KN_NK, KN_NK,
		KC_LCTL, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3, KN_NK, KC_ENT,
		KC_LSFT, KN_NK, KN_NK, KC_C, KC_V, KN_NK, KN_NK, TG(6), KN_NK, KN_NK, KN_NK, KC_BSPC, KN_NK,
		KC_ESC, KN_NK, KN_NK, KC_BTN1, MO(7), KC_BTN2, KC_RALT, KN_NK, KN_NK, KN_NK, KN_NK),
		/* LAYOUT_65_ansi (Scroll) Layer 5
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |SCU|   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |Ctrl  |   |   |   |   |   |   |SCL|SCD|SCR|   |   |        |
   * |-----------------------------------------------------------|
   * |Shift   |   |   |   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |Esc |    |    |       |     |         |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
  [7]=Layout_Reimu(
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,KN_NK, KC_WH_U, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KC_LCTL, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_WH_L, KC_WH_D, KC_WH_R, KN_NK, KN_NK, KC_ENT,
		KC_LSFT, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KC_BSPC, KN_NK,
		KC_ESC, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK),

/* LAYOUT_65_ansi Layer 1
   * ,-----------------------------------------------------------.
   * |RST|RST|   |RGB|RGB|   |   |   |   |   |   |   |PLY|VoD|VoU|
   * |-----------------------------------------------------------|
   * |     |RGB|RGB|RGB|RGB|   |   |   |   |   |   |Bak|Fwd|Sleep|
   * |-----------------------------------------------------------|
   * |      |BLT|BLS|BLI|BLD|   |   |   |   |   |BrU|BrD|        |
   * |-----------------------------------------------------------|
   * |        |RGB|RGB|RGB|RGB|   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |        |KBDLk|         |   |   |WLe|WRg|   |
   * `-----------------------------------------------------------'
   */
	[8]=Layout_Reimu(
		EEP_RST, RESET, KC_TRNS, RGB_HUD, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_VOLD, KC_VOLU,
		KC_TRNS, RGB_TOG, RGB_MODE_BREATHE, RGB_HUI, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WBAK, KC_WFWD, KC_SLEP,
		KC_TRNS, BL_TOGG, BL_STEP, BL_INC, BL_DEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS,
		KC_TRNS, RGB_MODE_PLAIN, RGB_MODE_RAINBOW, RGB_VAD, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(2), KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KBD_LK, KBD_OS_LK, KC_TRNS, KC_TRNS, KC_TRNS, G(S(KC_LEFT)), G(S(KC_RGHT)), KC_TRNS),

/* LAYOUT_65_ansi Layer 1
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |       |KBUlk|         |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
    [9]=Layout_Reimu(
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		MO(10), KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK),

/* LAYOUT_65_ansi Layer 1
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * |-----------------------------------------------------------|
   * |    |    |    |       |KBUlk|         |   |   |    |   |   |
   * `-----------------------------------------------------------'
   */
    [10]=Layout_Reimu(
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK,
		KN_NK, KN_NK, KN_NK, KN_NK, KBD_ULK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK, KN_NK),

};

/* LAYOUT Empty Layer
   * ,----------------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |    |
   * |----------------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |    |
   * |----------------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |    |
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |    |
   * |----------------------------------------------------------------|
   * |    |    |    |       |     |         |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */

void process_combo_event(uint8_t combo_index, bool pressed)
{
  switch(combo_index)
  {
    case ALT_F4:
      if(pressed)
      {
        register_code16(A(KC_F4));
        unregister_code16(A(KC_F4));
      }
      break;
/*    case BTESC_WINLK:
      if(pressed)
      {
        register_code16(G(KC_L));
        unregister_code16(G(KC_L));
      }
      break; */
  };
};


bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
        case MACRO_RBRKT:
            if(record->event.pressed)
	    {
		register_code16(S(KC_9));
		unregister_code(KC_9);
		register_code(KC_0);
		unregister_code16(S(KC_0));
		register_code(KC_LEFT);
		unregister_code(KC_LEFT);
            }
            break;
        case MACRO_CBRKT:
            if(record->event.pressed)
            {
                register_code16(S(KC_LBRC));
                unregister_code(KC_LBRC);
                register_code(KC_RBRC);
                unregister_code16(S(KC_RBRC));
                register_code(KC_LEFT);
                unregister_code(KC_LEFT);
            }
            break;
        case KBD_OS_LK:
            if(record->event.pressed)
            {
                register_code16(G(KC_L));
                unregister_code16(G(KC_L));
                set_single_persistent_default_layer(9);
                rgblight_disable();
                backlight_disable();

            }
            break;
        case KBD_LK:
            if(record->event.pressed)
            {
                set_single_persistent_default_layer(9);
                rgblight_disable();
                backlight_disable();
	    }  
        case KBD_ULK:
            if(record->event.pressed)
            {
                clear_keyboard();
                set_single_persistent_default_layer(0);
                rgblight_enable();
                backlight_enable();
            }
            break;
        case EM_1:  //>_<
            if(record->event.pressed)
            {
                register_code16(S(KC_DOT));
                unregister_code16(KC_DOT);
                register_code(KC_MINS);
                unregister_code(KC_MINS);
                register_code(KC_COMM);
                unregister_code16(S(KC_COMM));
            }
            break;
        case EM_2: //>.<
            if(record->event.pressed)
            {
                register_code16(S(KC_DOT));
                unregister_code16(S(KC_DOT));
                register_code(KC_DOT);
                unregister_code(KC_DOT);
                register_code16(S(KC_COMM));
                unregister_code16(S(KC_COMM));

            }
            break;
        case EM_3: //@_@
            if(record->event.pressed)
            {
                register_code16(S(KC_2));
                unregister_code(KC_2);
                register_code(KC_MINS);
                unregister_code(KC_MINS);
                register_code(KC_2);
                unregister_code16(S(KC_2));
            }
            break;
        case EM_4:  //(스담스담)
            if(record->event.pressed)
            {
                register_code16(S(KC_9));
                unregister_code16(S(KC_9));
                register_code(KC_N);
                unregister_code(KC_N);
                register_code(KC_G);
                unregister_code(KC_G);
                register_code(KC_U);
                unregister_code(KC_U);
                register_code(KC_F);
                unregister_code(KC_F);
                register_code(KC_Z);
                unregister_code(KC_Z);
                register_code(KC_N);
                unregister_code(KC_N);
                register_code(KC_G);
                unregister_code(KC_G);
                register_code(KC_U);
                unregister_code(KC_U);
                register_code(KC_F);
                unregister_code(KC_F);
                register_code(KC_Z);
                unregister_code(KC_Z);
                register_code16(S(KC_0));
                unregister_code16(S(KC_0));
            }
            break;
		/*case EM_5:	//(새근새근)
			if(record->event.pressed)
			{
				register_code16(S(KC_9));
				unregister_code16(S(KC_9));
				register_code(KC_N);
				unregister_code(KC_N);
				register_code(KC_E);
				unregister_code(KC_E);
				register_code(KC_K);
				unregister_code(KC_K);
				register_code(KC_G);
				unregister_code(KC_G);
				register_code(KC_S);
				unregister_code(KC_S);
				register_code(KC_N);
				unregister_code(KC_N);
				register_code(KC_E);
				unregister_code(KC_E);
				register_code(KC_K);
				unregister_code(KC_K);
				register_code(KC_G);
				unregister_code(KC_G);
				register_code(KC_S);
				unregister_code(KC_S);
				register_code16(S(KC_0));
				unregister_code16(S(KC_0));
			}
			break; */
        case KN_NK:
            break;
    };
    return true;
};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}
*/
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
