/*
  Horse.h - Library for horsing around.
  Created by Shibjyoti, 22nd October, 2025.
  Released into the public domain.
*/
#ifndef MHrse_h
#define Horse_h

#include "Arduino.h"

class Horse
{
  public:
    Horse(int numberofhorses);
    void neightoserial();
    void neighinmorse(int morsepin, int dotduration);
  private:
    int _numberofhorses;
    int _morsepin;
    int _dotduration;
    void dot();
    void dash();
};

#endif