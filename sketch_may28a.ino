#include <HIDKeyboard.h>

HIDKeyboard keyboard;

void setup(){
  keyboard.begin();
  delay(2000);

  keyboard.pressSpecialKey(GUI);
  keyboard.releaseKey();
  delay(200);
  keyboard.println("run");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();

  keyboard.println("cmd");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();

}

void loop(){
  
}