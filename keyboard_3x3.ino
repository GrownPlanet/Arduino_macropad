/*
 * A simple program to control a 3x3 numpad
 */

#include <Keyboard.h>

// 0 = linux; 1 = windows; 2 = shortcuts
int mode = 2;

const int row_count = 3;
const int col_count = 3;

int rows[row_count] = {5, 6, 7};
int cols[col_count] = {2, 3, 4};

// define functions for the buttons
// functions can be found in button.ino
typedef void (*buttonfunc) ();

void button00();
void button10();
void button20();
void button01();
void button11();
void button21();
void button02();
void button12();
void button22();

buttonfunc out[row_count][col_count] = {
  {button00, button10, button20},
  {button01, button11, button21},
  {button02, button12, button22},
};

// count for how many ticks a button was pressed in a row
int pressed_count[row_count][col_count] = {
  {0, 0, 0},
  {0, 0, 0},
  {0, 0, 0}
};

void setup() {
  Keyboard.begin();

  for (int row: rows) {
    pinMode(row, OUTPUT);
    digitalWrite(row, HIGH);
  }
  
  for (int col: cols) {
    pinMode(col, INPUT_PULLUP);
  }

  // we use 15 to change mode
  pinMode(15, INPUT_PULLUP);
}

void loop() {
  for (int row = 0; row < row_count; row++) {
    digitalWrite(rows[row], LOW);

    for (int col = 0; col < col_count; col++) {
      int pressed = digitalRead(cols[col]);

      if (pressed == LOW) {
        pressed_count[row][col] += 1;

        // you need to play a bit with these values
        if (pressed_count[row][col] < 2) {
          out[row][col]();
        } else if (pressed_count[row][col] > 5000 && pressed_count[row][col] % 500 == 0) {
          out[row][col]();
        }

      } else {
        pressed_count[row][col] = 0;
      }
    }

    digitalWrite(rows[row], HIGH);
  }
  // change modus
  if (digitalRead(15) == LOW) {
    if (mode < 2) {
      mode += 1;
    } else {
      mode = 0;
    }
    delay(1000);
  }
}
