// Give each button a functionality depending on the mode
void button00() {
  if (mode == 0) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  } else if (mode == 1) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press('r');
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('0');  
    Keyboard.releaseAll();  
  }
}
void button10() {
  if (mode == 0) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press('d');
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("firefox");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 1) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("firefox");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('1');  
    Keyboard.releaseAll();  
  }
}
void button20() {
  if (mode == 0) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press('d');
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("spotify");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 1) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("spotify");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('2');  
    Keyboard.releaseAll();  
  }
}
void button01() {
  if (mode == 0) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press('d');
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("discord");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 1) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.releaseAll();  
    delay(50);
    Keyboard.print("discord");
    delay(50);
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.releaseAll();
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('3');  
    Keyboard.releaseAll();  
  }
}
void button11() {
  if (mode == 0 || mode == 1) {
    Keyboard.press(KEY_PRINT_SCREEN);
    if (mode == 0) {
      Keyboard.press('1');
    }
    Keyboard.releaseAll();  
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('4');  
    Keyboard.releaseAll();  
  }
}
void button21() {
  if (mode == 0) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press('p');  
    Keyboard.releaseAll();  
  } else if (mode == 1) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press('l');  
    Keyboard.releaseAll();  
  } else if (mode == 2) {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('5');  
    Keyboard.releaseAll();  
  }
}
void button02() {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('6');  
    Keyboard.releaseAll();  
}
void button12() {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('7');  
    Keyboard.releaseAll();  
}
void button22() {
    Keyboard.press(KEY_LEFT_GUI);  
    Keyboard.press(KEY_LEFT_SHIFT);  
    Keyboard.press(KEY_LEFT_CTRL);  
    Keyboard.press('8');  
    Keyboard.releaseAll();  
}
