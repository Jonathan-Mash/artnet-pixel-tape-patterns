int redLineGroupRadius = 15;
int stationChaseRedLineGroupRadius = 15;
int stationChaseCentreLed = 333;
uint8_t stationChaseOriginalBrightness = 0;

void greenAnimation() {
  const int SEQUENCE_ID = 4;
  const int NO_STEPS = 8100;
  const int STEP_INTERVAL_MS = 30;
  const int RING_RADIUS = 9;
  const int BLACK_PAUSE_LENGTH = 28;
  const int GREEN_PAUSE_LENGTH = 74;
  const int FADE_PIXELS = 4;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    switch(getNextStep()) {
      case NUM_LEDS + 1 ... NUM_LEDS + BLACK_PAUSE_LENGTH:
        fill_solid(leds, NUM_LEDS, CRGB::Black);
        break;

      case 160 ... 160 + GREEN_PAUSE_LENGTH:
        fill_solid(leds, NUM_LEDS, CRGB::Green);
        break;

      default:
        fill_solid(leds, NUM_LEDS, CRGB::Green);

        int centreLed1 = getNextStep() <= NUM_LEDS ? getNextStep() : (2 * NUM_LEDS) - (getNextStep() - BLACK_PAUSE_LENGTH);
        int centreLed2 = loopIfOverEndOfString(centreLed1 + (NUM_LEDS / 2), NUM_LEDS);
        float blackBandWidth = 0;


        if(getNextStep() <= NUM_LEDS) {
          blackBandWidth = (float) getNextStep() / 2;
        } else {
          blackBandWidth = (float) ((2 * NUM_LEDS) - (getNextStep() - BLACK_PAUSE_LENGTH)) / 2;
        }

        for (int i = 1 ; i < blackBandWidth ; i++) {
          float fadeFactor = 255;
          if (blackBandWidth - i < FADE_PIXELS) {
            fadeFactor = ((float) 1 / (i - (blackBandWidth - FADE_PIXELS - 1))) * 255 * 1.5;
          }
          leds[loopIfOverEndOfString(centreLed1 - i, NUM_LEDS)].fadeToBlackBy(fadeFactor);
          leds[loopIfOverEndOfString(centreLed1, NUM_LEDS)].fadeToBlackBy(255);
          leds[loopIfOverEndOfString(centreLed1 + i, NUM_LEDS)].fadeToBlackBy(fadeFactor);

          leds[loopIfOverEndOfString(centreLed2 - i, NUM_LEDS)].fadeToBlackBy(fadeFactor);
          leds[loopIfOverEndOfString(centreLed2, NUM_LEDS)].fadeToBlackBy(255);
          leds[loopIfOverEndOfString(centreLed2 + i, NUM_LEDS)].fadeToBlackBy(fadeFactor);
        }
        break;
    }


    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void spinningOrange() {
  const int SEQUENCE_ID = 5;
  const int NO_STEPS = 1336;
  const int STEP_INTERVAL_MS = 50;
  const CRGB ORANGE_COLOUR = CRGB(255,75,0);
  const int RING_RADIUS = 30;
  const int FADE_PIXELS = 5;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    int centreLed = getNextStep();
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    fillGroupWithColourAndFadeEnds(centreLed, RING_RADIUS, FADE_PIXELS, 25, ORANGE_COLOUR); //25*i originally
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void followTheRedLine() {
  const int SEQUENCE_ID = 6;
  const int NO_STEPS = 1336 * 27;
  const int STEP_INTERVAL_MS = 30;
  const int FADE_PIXELS = 5;
  const int ADD_LED_EVERY = 40;
  const int START_RADIUS = 60;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    int redLineCentreLed = loopIfOverEndOfString((getNextStep() * -1) - 1003, NUM_LEDS);

    if(getNextStep() == 0) {
      redLineGroupRadius = START_RADIUS;
    }

    if ((getNextStep() / ADD_LED_EVERY) > ((float) (getNextStep() - 1) / ADD_LED_EVERY) && redLineGroupRadius <= 600) {
      redLineGroupRadius+=2;
    }

    fill_solid(leds, NUM_LEDS, CRGB::Black);
    fillGroupWithColourAndFadeEnds(redLineCentreLed, redLineGroupRadius, FADE_PIXELS, 2000, CRGB::Red);
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void stationChase() {
  const int SEQUENCE_ID = 7;
  const int NO_STEPS = 1336 * 27;
  const int STEP_INTERVAL_MS = 30;
  const int FADE_PIXELS = 5;
  const int ADD_LED_EVERY = 40;
  const int START_RADIUS = 60;
  const int NO_SIMULTANEOUS_ZITS = 80;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    stationChaseCentreLed = loopIfOverEndOfString(stationChaseCentreLed + 5, NUM_LEDS);

    if ((getNextStep() / ADD_LED_EVERY) > ((float) (getNextStep() - 1) / ADD_LED_EVERY) && stationChaseRedLineGroupRadius <= 600) {
      stationChaseRedLineGroupRadius+=2;
    }

    fill_solid(leds, NUM_LEDS, CRGB(0,0,80));
    for( int i = 0; i < NO_SIMULTANEOUS_ZITS; i++) {
      int randomNoise = random16(NUM_LEDS);
      leds[randomNoise] += CHSV( 150 - random8(150), 200, 255);
    }

    fillGroupWithColourAndFadeEnds(stationChaseCentreLed, stationChaseRedLineGroupRadius, FADE_PIXELS, 2000, CRGB::Red);
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}


void stationChaseBackwards() {
  const int SEQUENCE_ID = 11;
  const int NO_STEPS = 1336 * 27;
  const int STEP_INTERVAL_MS = 30;
  const int FADE_PIXELS = 5;
  const int ADD_LED_EVERY = 40;
  const int START_RADIUS = 60;
  const int NO_SIMULTANEOUS_ZITS = 80;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    stationChaseCentreLed = loopIfOverEndOfString(stationChaseCentreLed - 5, NUM_LEDS);

    if ((getNextStep() / ADD_LED_EVERY) > ((float) (getNextStep() - 1) / ADD_LED_EVERY) && stationChaseRedLineGroupRadius <= 600) {
      stationChaseRedLineGroupRadius+=2;
    }

    fill_solid(leds, NUM_LEDS, CRGB(0,0,80));
    for( int i = 0; i < NO_SIMULTANEOUS_ZITS; i++) {
      int randomNoise = random16(NUM_LEDS);
      leds[randomNoise] += CHSV( 150 - random8(150), 200, 255);
    }

    fillGroupWithColourAndFadeEnds(stationChaseCentreLed, stationChaseRedLineGroupRadius, FADE_PIXELS, 2000, CRGB::Red);
    advanceMultipleStepsOrEndSequenceIfCompleted(NO_STEPS, 5);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void spinningBlueCyan() {
  const int SEQUENCE_ID = 8;
  const int NO_STEPS = 1336;
  const int STEP_INTERVAL_MS = 30;
  const int RING_RADIUS = 30;
  const int FADE_PIXELS = 4;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreLed = getNextStep();
    
    for (int i = 1 ; i < RING_RADIUS ; i++) {
      CRGB pixelColour = CRGB(CRGB::Cyan);

      if (RING_RADIUS - i < FADE_PIXELS) {
        CRGB minusColour = (CRGB(CRGB::Cyan) - CRGB(CRGB::Blue)) / FADE_PIXELS;
        pixelColour = leds[i-1] - minusColour;
      } else {
        pixelColour = CRGB::Cyan;
      }

      leds[loopIfOverEndOfString(centreLed - i, NUM_LEDS)] = pixelColour;
      leds[loopIfOverEndOfString(centreLed, NUM_LEDS)] = CRGB::Cyan;
      leds[loopIfOverEndOfString(centreLed + i, NUM_LEDS)] = pixelColour;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

void fillGroupWithColourAndFadeEnds(int centreLed, int groupRadius, int fadePixels, int fadeFactor, CRGB fillColour) {
  for (int i = 1 ; i < groupRadius ; i++) {
    leds[loopIfOverEndOfString(centreLed - i, NUM_LEDS)] = fillColour;
    leds[loopIfOverEndOfString(centreLed, NUM_LEDS)] = fillColour;
    leds[loopIfOverEndOfString(centreLed + i, NUM_LEDS)] = fillColour;

    if (groupRadius - i < fadePixels) {
      uint8_t fadeBy = fadeFactor/i;
      leds[loopIfOverEndOfString(centreLed - i, NUM_LEDS)].fadeToBlackBy(fadeBy);
      leds[loopIfOverEndOfString(centreLed + i, NUM_LEDS)].fadeToBlackBy(fadeBy);
    }
  }
}