int lastLedGlitter;
int lastLedJuggle;
CRGB originalColourGlitter;
CRGB originalColourJuggle;
 
void glitter() {
  const int SEQUENCE_ID = 19;
  const int NO_STEPS = 20;
  const int STEP_INTERVAL_MS = 30;
  const fract8 CHANCE_OF_GLITTER = 80;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    switch(getNextStep()) {
      case 1:
        if( random8() < CHANCE_OF_GLITTER) {
          lastLedGlitter = random16(NUM_LEDS);
          originalColourGlitter = leds[lastLedGlitter];
          leds[lastLedGlitter] += CRGB::White;
        }
        break;
      case 2 ... NO_STEPS:
        leds[lastLedGlitter] = fadeToColour(CRGB::White, originalColourGlitter, NO_STEPS - getNextStep());
        break;
    }
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void starTwinkles() {
  const int SEQUENCE_ID = 25;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 30;

  unsigned long currentMillis = millis();
  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousPaletteMillis > SECONDS_PER_PALETTE * 1000) {
    previousPaletteMillis = currentMillis;
    chooseNextColorPalette( gTargetPalette ); 
  }

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {  
    nblendPaletteTowardPalette( gCurrentPalette, gTargetPalette, 12);
    drawTwinkles();
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    FastLED.show();
  }
}
 
void confetti() {
  const int SEQUENCE_ID = 20;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 30;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    int pos = random16(NUM_LEDS);
    leds[pos] += CHSV( gHue - random8(32), 200, 255);

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}
 
void juggle() {
  const int SEQUENCE_ID = 22;
  const int NO_STEPS = 10;
  const int STEP_INTERVAL_MS = 30;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    uint8_t dothue = 128;

    switch(getNextStep()) {
      case 1:
        for( int i = 0; i < 8; i++) {
          lastLedJuggle = beatsin16( i+7, 0, NUM_LEDS-1 );
          originalColourJuggle = leds[lastLedJuggle];
          leds[lastLedJuggle] |= CHSV(dothue, 200, 255);
        }
        break;
      case 2 ... NO_STEPS:
        leds[lastLedJuggle] = fadeToColour(CHSV(dothue, 200, 255), originalColourJuggle, NO_STEPS - getNextStep());
        break;
    }

    dothue += 16;
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void randomNoiseOnBlue() {
  const int SEQUENCE_ID = 23;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 30;
  const int NO_SIMULTANEOUS_ZITS = 200;

  unsigned long currentMillis = millis();
 
  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB(0,0,80));
    for( int i = 0; i < NO_SIMULTANEOUS_ZITS; i++) {
      int randomNoise = random16(NUM_LEDS);
      leds[randomNoise] += CHSV( 150 - random8(150), 200, 255);
    }
    
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}