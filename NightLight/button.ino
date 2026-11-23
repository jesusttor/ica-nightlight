// button.ino - reads the pushbutton on BUTTON_PIN
// The button connects the pin to GND, so a press reads LOW.

// Should return true once for each press of the button.
bool buttonPressed() {
  // TODO Task 3 (Developer C): debounce, and detect one press (not a held button).
  delay(BUTTON_DEBOUNCE);
  
  return digitalRead(BUTTON_PIN) == LOW;
}
