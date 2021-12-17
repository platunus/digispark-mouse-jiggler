#include "DigiMouse.h"

#define INTERVAL_JIGGLER 50000
#define PERIOD_LED_ON 100
#define PIN_LED 1
#define DELTA_MOUSE 2

short delta = DELTA_MOUSE;

void setup() {                
  pinMode(PIN_LED, OUTPUT);
  DigiMouse.begin(); 
}

void loop() {
  delta = -delta;
  digitalWrite(PIN_LED, HIGH);
  DigiMouse.moveX(delta);
  DigiMouse.delay(PERIOD_LED_ON);
  digitalWrite(PIN_LED, LOW);

  DigiMouse.delay(INTERVAL_JIGGLER);
}
