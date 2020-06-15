// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  FUNC,
  PUME,
  PRME,
  CLAS,
  QMKURL
};

//
// MACROS
// =============================================================================
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case FUNC:
      if (record->event.pressed) {
        SEND_STRING("export function name(): any {}");
      } else {}
      break;
    case PUME:
      if (record->event.pressed) {
        SEND_STRING("publics name(): any {}");
      } else {}
      break;
    case PRME:
      if (record->event.pressed) {
        SEND_STRING("private name(): any {}");
      } else {}
      break;
    case CLAS:
      if (record->event.pressed) {
        SEND_STRING("export class ClassName {\nconstructor() {}\n");
      } else {}
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("😍");
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}