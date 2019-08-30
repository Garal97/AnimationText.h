#include "AnimationText.h"
#include "Arduino.h"
#include <LiquidCrystal.h>



AnimationText::AnimationText (LiquidCrystal& lcd, int Speed, bool Cursor) : lcd(lcd) { //Main configuration function
	_Speed = Speed;    //Match private variables with public variables
  _Cursor = Cursor;
}

void AnimationText::write (String (text)){
  if (_Cursor == 1) { //If the cursor option is activated
	lcd.cursor();       //Turn on the cursor and the bink function from LiquidCrystal.h
	lcd.blink ();
  }

  for (char i=0; i< text.length() ; i++) {  //for the lenght of the string
    char _c = text.charAt (i);  //Match _c with the current character im reading
 	  lcd.print(_c);  //Print _c
    delay (_Speed); //wait the animation time before printing the next character of the string
  }
}

