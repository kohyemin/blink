#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::Led_On(int t){
  digitalWrite(_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);
}

void Blink::Led_Off(int t){
  digitalWrite(_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(t);
}
