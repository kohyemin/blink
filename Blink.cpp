#include "Arduino.h"
#include "Blink.h"

void Blink_Init(){
   // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void Led_On(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void Led_Off(){
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
}
