#ifndef AnimationText_h
#define AnimationText_h
#include "Arduino.h"
#include <LiquidCrystal.h>

#define Slow 100		//Preset speeds
#define Mid 60			//You also can use another speeds.
#define Fast 20

class AnimationText {
  private:
    char _c;		//current printing character
    char _i;		//position of current printing character
    int _Speed;		//Speed of the thext animation
    bool _Cursor;	//Cursor on/off
    LiquidCrystal &lcd; // calling LiquidCrystal LCD functions

  public:
	AnimationText (LiquidCrystal& lcd, int Speed, bool Cursor); //Main configuration function
    void write (String (text));		//Actual print function for the animation
};
#endif