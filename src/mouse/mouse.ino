#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(2000); // Wait for 2 seconds
  DigiKeyboard.sendKeyStroke(0); // Init keyboard
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Do WIN+R
  DigiKeyboard.delay(600); // Wait .6 seconds
  DigiKeyboard.print("https://youtu.be/xm3YgoEiEDc"); // Type url
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Press enter!
  DigiKeyboard.delay(10000); // wait 11.5 seconds
  DigiKeyboard.print(" "); // Press space
  DigiKeyboard.delay(600); // Wait .6 seconds
  DigiKeyboard.print("f"); // Press space
}
void loop() {}
