CRGB shootingStarConArr[NUM_LEDS];
CRGB shootingStarStreakArr[NUM_LEDS];
static uint8_t streakHead = 0;
uint8_t gHue = 160;


void yellowLineAnimateIn() {
  const int SEQUENCE_ID = 16;
  const int NO_STEPS = 166;
  const int STEP_INTERVAL_MS = 35;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    animateLineIn(333, 334, CRGB::Gold, getNextStep());
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void yellowLineAnimateOut() {
  const int SEQUENCE_ID = 17;
  const int NO_STEPS = 166;
  const int STEP_INTERVAL_MS = 5;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {

    int startingLed1 = 167;
    int startingLed2 = 500;

    for (int i = 0 ; i < getNextStep() ; i++) {
      leds[loopIfOverEndOfString(startingLed1 + i, NUM_LEDS)] = CRGB::Black;
      leds[loopIfOverEndOfString(startingLed2 - i, NUM_LEDS)] = CRGB::Black;
    }

    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void redLineAnimateIn() {
  const int SEQUENCE_ID = 18;
  const int NO_STEPS = 60;
  const int STEP_INTERVAL_MS = 35;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    animateLineIn(333, 334, CRGB::Red, getNextStep());
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 3);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void shootingStarAnimation() {
  const int SEQUENCE_ID = 15;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 50;

  const byte FADE_AMOUNT = 128;
  const int COMET_SIZE = 5;
  const int DELTA_HUE  = 4;

  static byte hue = HUE_RED;
  static int iDirection = 1;
  static int iPos = 0;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    hue += DELTA_HUE;
    iPos += iDirection;

    if (iPos == (NUM_LEDS - COMET_SIZE) || iPos == 0)
        iDirection *= -1;
    
    for (int i = 0; i < COMET_SIZE; i++)
        leds[iPos + i].setHue(hue);
    
    for (int j = 0; j < NUM_LEDS; j++)
        if (random(10) > 5)
            leds[j] = leds[j].fadeToBlackBy(FADE_AMOUNT);  

    
    advanceStepOrEndSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void openingSequenceAnimateIn() {
  const int SEQUENCE_ID = 14;
  const int NO_STEPS = 406;
  const int STEP_INTERVAL_MS = 30;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    animateLineIn(1001, 1002, CRGB::LightCyan, getNextStep());

    if (getNextStep() >= 87) {
      animateLineIn(1001 - 199, 1002 + 199, CRGB::LightCyan, getNextStep() - 199);
    }

    if (getNextStep() >= 145) {
      animateLineIn(1001 - 319, 1002 + 319, CRGB::LightCyan, getNextStep() - 145);
    }

    if (getNextStep() >= 261) {
      animateLineIn(1001 - 522, 1002 + 522, CRGB::LightCyan, getNextStep() - 261);
    }

    if (getNextStep() >= 319) {
      animateLineIn(1001 - 638, 1002 + 638, CRGB::LightCyan, getNextStep() - 319);
    }

    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 6);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void animateLineIn(int centreLed1, int centreLed2, CRGB colour, int halfLineLength) {
  for (int i = 1 ; i < halfLineLength ; i++) {
    leds[loopIfOverEndOfString(centreLed1 - i, NUM_LEDS)] = colour;
    leds[loopIfOverEndOfString(centreLed1, NUM_LEDS)] = colour;
    leds[loopIfOverEndOfString(centreLed2, NUM_LEDS)] = colour;
    leds[loopIfOverEndOfString(centreLed2 + i, NUM_LEDS)] = colour;
  }
}

void bpm() {
  const int SEQUENCE_ID = 21;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 30;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    uint8_t BeatsPerMinute = 62;
    CRGBPalette16 palette(CRGB::Blue, CRGB(50,0,50));
    uint8_t beat = beatsin8( BeatsPerMinute, 64, 255);
    for( int i = 0; i < NUM_LEDS; i++) { //9948
      leds[i] = ColorFromPalette(palette, gHue+(i*2), beat-gHue+(i*10));
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void trainMovesOff() {
  const int SEQUENCE_ID = 24;
  const int NO_STEPS = 332;
  const int STEP_INTERVAL_MS = 35;
  const int START_LED = 500;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    for (int i = 0 ; i <= getNextStep() ; i++) {
      leds[loopIfOverEndOfString(START_LED - i, NUM_LEDS)] = CRGB::Black;
    }
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}