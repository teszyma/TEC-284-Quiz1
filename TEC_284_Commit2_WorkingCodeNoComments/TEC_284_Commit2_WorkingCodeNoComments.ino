Here’s the same code without comments:

```cpp
const int RED   = 9;
const int GREEN = 10;
const int BLUE  = 11;

const int BTN_R = 2;
const int BTN_G = 3;
const int BTN_B = 4;

void led(int pin, bool on) {
  digitalWrite(pin, on ? HIGH : LOW);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(BTN_R, INPUT_PULLUP);
  pinMode(BTN_G, INPUT_PULLUP);
  pinMode(BTN_B, INPUT_PULLUP);

  led(RED, false);
  led(GREEN, false);
  led(BLUE, false);
}

void loop() {
  if (digitalRead(BTN_R) == LOW) {
    led(RED, true);
  }

  if (digitalRead(BTN_G) == LOW) {
    led(GREEN, true);
  }

  if (digitalRead(BTN_B) == LOW) {
    led(BLUE, true);
  }
}
```









