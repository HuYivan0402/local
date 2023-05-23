#include <Blink.h>

#include <Blink.h>

#include "Blink.h"

Blink led(3);

void setup() {
  pinMode(led.pinNumber, OUTPUT);
}

void loop() {
  led.breath(50);
}
