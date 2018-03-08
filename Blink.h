#include "Arduino.h"

class Blink
{
  public:
    Blink(int pin);
    void Led_On(int t);
    void Led_Off(int t);
   private:
    int _pin;
};
