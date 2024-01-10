void flash(int numberOfFlashes) {
  for (int i = 0 ; i < numberOfFlashes ; i++) {
    FastLED.setBrightness(127);
    for (int j = 0; j < NUM_LEDS; j++) {
        leds[j] = CRGB(127, 0, 0);
    }
    FastLED.show();
    delay(1000);
    FastLED.setBrightness(0);
    FastLED.show();
    delay(1000);
  }
}

void flashErrorStatus(ErrorStatus error) {
  Serial.println("Error status flash: " + String(error));
  switch(error) {
    case NETWORK_FAILURE:
      flash(3);
      break;
    default:
      flash(5);
      break;
  }
}

void initTest() {
  Serial.println("Init test...");
  for (int i = 0 ; i < NUM_LEDS ; i++)
    leds[i] = CRGB(127, 0, 0);
  FastLED.show();
  delay(500);
  for (int i = 0 ; i < NUM_LEDS ; i++)
    leds[i] = CRGB(0, 127, 0);
  FastLED.show();
  delay(500);
  for (int i = 0 ; i < NUM_LEDS ; i++)
    leds[i] = CRGB(0, 0, 127);
  FastLED.show();
  delay(500);
  for (int i = 0 ; i < NUM_LEDS ; i++)
    leds[i] = CRGB::Black;
  FastLED.show();
  Serial.println("Completed.");
}
