/*
  Horse.cpp - Library for horsing around.
  By Shibjyoti, 22nd October, 2025.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Horse.h"

Horse::Horse(int numberofhorses)
{
    _numberofhorses = numberofhorses;
}

void Horse::neightoserial()
{
    for (int horse = 0; horse < _numberofhorses; horse++)
    {
        Serial.print("neigh");
        Serial.print((horse == _numberofhorses - 1) ? '\n' : ' ');
    }
}

void Horse::neighinmorse(int morsepin, int dotduration)
{
    _morsepin = morsepin;
    _dotduration = dotduration;

    for (int horse = 0; horse < _numberofhorses; horse++)
    {
        dot();
        dash(); // n

        dot();  // e

        dot();
        dot(); // i

        dash();
        dash();
        dot(); // g

        dot();
        dot();
        dot();
        dot(); // h
    }
    // digitalWrite(_morsepin, )
}

void Horse::dot(){
    digitalWrite(_morsepin, 1);
    delay(_dotduration);
    digitalWrite(_morsepin, 0);
    delay(_dotduration);
}

void Horse::dash(){
    digitalWrite(_morsepin, 1);
    delay(_dotduration*2);
    digitalWrite(_morsepin, 0);
    delay(_dotduration);
}