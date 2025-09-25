// led pins
const int RED   = 9;
const int GREEN = 10;
const int BLUE  = 11;

// button pins
const int BTN_R = 2;
const int BTN_G = 3;
const int BTN_B = 4;

// simple helper to set an led
void led(int pin, bool on) {
  digitalWrite(pin, on ? HIGH : LOW); // common cathode: HIGH=on
}

void setup() {
  // outputs
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  // inputs with pullup
  pinMode(BTN_R, INPUT_PULLUP);
  pinMode(BTN_G, INPUT_PULLUP);
  pinMode(BTN_B, INPUT_PULLUP);

  // start off
  led(RED, false);
  led(GREEN, false);
  led(BLUE, false);
}

void loop() {
  // red press
  if (digitalRead(BTN_R) == LOW) {
    led(RED, true);   // stays on
  }

  // green press
  if (digitalRead(BTN_G) == LOW) {
    led(GREEN, true); // stays on
  }

  // blue press
  if (digitalRead(BTN_B) == LOW) {
    led(BLUE, true);  // stays on
  }
}








