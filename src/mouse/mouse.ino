#include <DigiMouse.h>

void setup() {
  long randNumber;
  randomSeed(analogRead(0));
  DigiMouse.begin();
}

void loop() {
  DigiMouse.moveY(random(-100,100));
  DigiMouse.update();
  DigiMouse.moveX(random(-100,100)); 
  DigiMouse.update();
}
