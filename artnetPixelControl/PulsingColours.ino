void pulsingPurple() {
  const int SEQUENCE_ID = 9;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 15;
  const CRGB PURPLE_COLOUR = CRGB(50,0,50);
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    int sinBeat = beatsin16(15, 0, 350);
    int minusIntensity = (sinBeat > 255) ? 255 : sinBeat;
    fill_solid(leds, NUM_LEDS, PURPLE_COLOUR);
    for (int i = 0 ; i < NUM_LEDS ; i++) {
      leds[i].fadeToBlackBy(minusIntensity);
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void pulsingCyan() {
  const int SEQUENCE_ID = 10;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 15;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    int sinBeat = beatsin16(15, 0, 350);
    int minusIntensity = (sinBeat > 255) ? 255 : sinBeat;
    fill_solid(leds, NUM_LEDS, CRGB::Cyan);
    for (int i = 0 ; i < NUM_LEDS ; i++) {
      leds[i].fadeToBlackBy(minusIntensity);
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}
