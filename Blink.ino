#include "Blink.h"

Blink blink(D4);

void setup(){
  Serial.begin(115200);
  Serial.println("\nBlink Version 1.0 Hyemin Ko");
}

void loop(){
  blink.Led_On(500);
  blink.Led_Off(300);
}
