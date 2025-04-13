void testProgram1() {
  const int SEQUENCE_ID = 1000;
  const int NO_STEPS = 1336;
  const int STEP_INTERVAL_MS = 250;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    switch(getNextStep()) {
      case 0:
        FastLED.clear();
        break;
      default:
        leds[getNextStep() - 1] = CRGB(0, 150, 0);
        break;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void testProgram2() {
  const int SEQUENCE_ID = 1001;
  const int NO_STEPS = 1336;
  const int STEP_INTERVAL_MS = 250;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    switch(getNextStep()) {
      case 0:
        FastLED.clear();
        break;
      default:
        leds[getNextStep() - 1] = CRGB(0, 0, 150);
        break;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}