/*////////////////////////////////////////////////////////////////////////////////// 
   AnimationText on LCD example
   You dont need to include LiquidCrystal.h on the skketch,
   is already included in this library.

    This sketch prints "Hello World!" on the LCD display
    with the animation.

    First you need to declare your LCDobject as you usualy do on
    LiquidCrystal.h
    Then you define your animation parameters (LCDObject name, speedtext, cursor animation on/off);

    There are default values for the speed text; Slow, Mid, Fast. 
    The recomended values for the speed (in ms) are between 20-120, 
      but you can use the values that u need.
    You can also create more than one animation for the same LCDobject,

    The cursor animation is a boolean; 1 for on and 0 for off.

    Library created by Álvaro García Hernantes (Garal)
    Last update 08.30.2019

    Have fun!
 *//////////////////////////////////////////////////////////////////////////
#include <AnimationText.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7
AnimationText animate(lcd, Slow, 1); // LCDobect, speed, cursor on/off

void setup() {
  lcd.begin (16, 2);    //configure our LCDobject
}

void loop() {
  lcd.setCursor (0, 0); //Set cursor on Row 0 colum 0
  animate.write ("Hello World!"); //Animate "Hello Wordl!"
  delay (1000);
  lcd.clear ();
  delay (1000);
}
