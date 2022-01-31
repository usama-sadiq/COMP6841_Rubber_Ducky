//Author: Usama Sadiq
//Target: Windows 10
//Description: Open notepad and print Hello World

#include<Keyboard.h>

void setup() {
  // initialize control over the keyboard:
    Keyboard.begin();
    delay(2000);
    
    Keyboard.press( KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();

    delay(2000);
    
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(2000);
    Keyboard.releaseAll();

    Keyboard.print("notepad");
    delay(2000);

    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(100);

    Keyboard.print("Hello World");
    delay(100);

    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(100);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  }
