long previousMillis = 0;
int nextStep = 0;
int runningSequenceId = 1;

void startProgramIfNotRunning(int sequenceId) {
  if (runningSequenceId != sequenceId) {
    Serial.println("Changing to sequence " + String(sequenceId));
    runningSequenceId = sequenceId;
    previousMillis = 0;
    nextStep = 0;
  }
}

int loopIfOverEndOfString(int ledNo, int numLeds) {
  if (ledNo < 0) {
    return ledNo + numLeds;
  } else if (ledNo > numLeds - 1) {
    return ledNo - numLeds;
  } else {
    return ledNo;
  }
}

bool ledIsWithinGroup(int led1, int group[], int arraySize) {
  for (int i = 0 ; i < arraySize; i++) {
    if (led1 == group[i]) {
      return true;
    }
  }
  return false;
}

void advanceStepOrRestartSequenceIfCompleted(int noSteps) {
  nextStep++;
  nextStep = (nextStep > noSteps - 1) ? 0 : nextStep;
}

void advanceStepOrEndSequenceIfCompleted(int noSteps) {
  nextStep++;
  nextStep = (nextStep > noSteps - 1) ? noSteps + 1 : nextStep;
}

void pause() {
  advanceStepOrEndSequenceIfCompleted(0);
}

void speechWipeIn() {
  const int SEQUENCE_ID = 1;
  const int GROUP_RADIUS = 4;
  const int FADE_PIXELS = 2;
  const int CENTRE_START_LED = 0;
  const int START_OVERLAP = 4;
  const int NO_STEPS = 18;
  const int STEP_INTERVAL_MS = 30;

  int groupSize = (GROUP_RADIUS * 2) + 1;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreStartLedGroup1 = loopIfOverEndOfString(CENTRE_START_LED + (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);
    int centreStartLedGroup2 = loopIfOverEndOfString(CENTRE_START_LED - (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);

    int centreLedGroup1 = loopIfOverEndOfString(centreStartLedGroup1 + nextStep, NUM_LEDS);
    int centreLedGroup2 = loopIfOverEndOfString(centreStartLedGroup2 - nextStep, NUM_LEDS);

    int group1[groupSize];
    int group2[groupSize];

    group1[0] = centreLedGroup1;
    group2[0] = centreLedGroup2;

    for (int i = 1, j = 1 ; i < GROUP_RADIUS ; i++, j =+ 2) {
      group1[j] = loopIfOverEndOfString(centreLedGroup1 - i, NUM_LEDS);
      group1[j+1] = loopIfOverEndOfString(centreLedGroup1 + i, NUM_LEDS);
      group2[j] = loopIfOverEndOfString(centreLedGroup2 - i, NUM_LEDS);
      group2[j+1] = loopIfOverEndOfString(centreLedGroup2 + i, NUM_LEDS);
    }

    for (int i = 1 ; i < GROUP_RADIUS ; i++) {
      CRGB fadePixelColour = CRGB::Cyan;
      
      if (GROUP_RADIUS - i < FADE_PIXELS) {
        CRGB minusColour = (CRGB(CRGB::Cyan) - CRGB(CRGB::Blue)) / FADE_PIXELS;
        fadePixelColour = CRGB(CRGB::Cyan) - minusColour;
      }

      int group1LeftLed = loopIfOverEndOfString(centreLedGroup1 - i, NUM_LEDS);
      int group1RightLed = loopIfOverEndOfString(centreLedGroup1 + i, NUM_LEDS);
      int group2LeftLed = loopIfOverEndOfString(centreLedGroup2 - i, NUM_LEDS);
      int group2RightLed = loopIfOverEndOfString(centreLedGroup2 + i, NUM_LEDS);

      leds[group1LeftLed] = !ledIsWithinGroup(group1LeftLed, group2, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[centreLedGroup1] = CRGB::Cyan;
      leds[group1RightLed] = !ledIsWithinGroup(group1RightLed, group2, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[group2LeftLed] = !ledIsWithinGroup(group2LeftLed, group1, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[centreLedGroup2] = CRGB::Cyan;
      leds[group2RightLed] = !ledIsWithinGroup(group2RightLed, group1, groupSize) ? fadePixelColour : CRGB::Cyan;
    }

    advanceStepOrEndSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void speechWipeOut() {
  const int SEQUENCE_ID = 2;
  const int GROUP_RADIUS = 4;
  const int FADE_PIXELS = 2;
  const int CENTRE_START_LED = 20;
  const int START_OVERLAP = 4;
  const int NO_STEPS = 18;
  const int STEP_INTERVAL_MS = 30;

  int groupSize = (GROUP_RADIUS * 2) + 1;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreStartLedGroup1 = loopIfOverEndOfString(CENTRE_START_LED + (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);
    int centreStartLedGroup2 = loopIfOverEndOfString(CENTRE_START_LED - (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);

    int centreLedGroup1 = loopIfOverEndOfString(centreStartLedGroup1 + nextStep, NUM_LEDS);
    int centreLedGroup2 = loopIfOverEndOfString(centreStartLedGroup2 - nextStep, NUM_LEDS);

    int group1[groupSize];
    int group2[groupSize];

    group1[0] = centreLedGroup1;
    group2[0] = centreLedGroup2;

    for (int i = 1, j = 1 ; i < GROUP_RADIUS ; i++, j =+ 2) {
      group1[j] = loopIfOverEndOfString(centreLedGroup1 - i, NUM_LEDS);
      group1[j+1] = loopIfOverEndOfString(centreLedGroup1 + i, NUM_LEDS);
      group2[j] = loopIfOverEndOfString(centreLedGroup2 - i, NUM_LEDS);
      group2[j+1] = loopIfOverEndOfString(centreLedGroup2 + i, NUM_LEDS);
    }

    for (int i = 1 ; i < GROUP_RADIUS ; i++) {
      CRGB fadePixelColour = CRGB::Cyan;
      
      if (GROUP_RADIUS - i < FADE_PIXELS) {
        CRGB minusColour = (CRGB(CRGB::Cyan) - CRGB(CRGB::Blue)) / FADE_PIXELS;
        fadePixelColour = CRGB(CRGB::Cyan) - minusColour;
      }

      int group1LeftLed = loopIfOverEndOfString(centreLedGroup1 - i, NUM_LEDS);
      int group1RightLed = loopIfOverEndOfString(centreLedGroup1 + i, NUM_LEDS);
      int group2LeftLed = loopIfOverEndOfString(centreLedGroup2 - i, NUM_LEDS);
      int group2RightLed = loopIfOverEndOfString(centreLedGroup2 + i, NUM_LEDS);

      leds[group1LeftLed] = !ledIsWithinGroup(group1LeftLed, group2, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[centreLedGroup1] = CRGB::Cyan;
      leds[group1RightLed] = !ledIsWithinGroup(group1RightLed, group2, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[group2LeftLed] = !ledIsWithinGroup(group2LeftLed, group1, groupSize) ? fadePixelColour : CRGB::Cyan;
      leds[centreLedGroup2] = CRGB::Cyan;
      leds[group2RightLed] = !ledIsWithinGroup(group2RightLed, group1, groupSize) ? fadePixelColour : CRGB::Cyan;
    }

    advanceStepOrEndSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void speech() {
  const int SEQUENCE_ID = 3;
  const int NO_STEPS = 1121;
  const int TRANSITION_STEPS = 40;
  const int STEP_INTERVAL_MS = 10;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {    
    switch(nextStep) {
      case 0 ... 40:
      case 131 ... 150:
      case 291 ... 370:
      case 481 ... 590:
      case 731 ... 790:
      case 901 ... 940:
        fill_solid(leds, NUM_LEDS, CRGB::Blue);
        break;

      case 41 ... 80:
      case 151 ... 190:
      case 371 ... 410:
      case 591 ... 630:
      case 791 ... 830:
      case 941 ... 980:
      {
        CRGB addColour = (CRGB(CRGB::Cyan) - CRGB(CRGB::Blue)) / TRANSITION_STEPS;
        fill_solid(leds, NUM_LEDS, leds[0] + addColour);
        break;
      }

      case 81 ... 90:
      case 191 ... 250:
      case 411 ... 440:
      case 631 ... 690:
      case 831 ... 860:
      case 981 ... 1080:
        fill_solid(leds, NUM_LEDS, CRGB::Cyan);
        break;

      case 91 ... 130:
      case 251 ... 290:
      case 441 ... 480:
      case 691 ... 730:
      case 861 ... 900:
      case 1081 ... 1120:
      {
        CRGB minusColour = (CRGB(CRGB::Cyan) - CRGB(CRGB::Blue)) / TRANSITION_STEPS;
        fill_solid(leds, NUM_LEDS, leds[0] - minusColour);
        break;
      }
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void spinningBlueCyan() {
  const int SEQUENCE_ID = 4;
  const int NO_STEPS = 40;
  const int STEP_INTERVAL_MS = 30;
  const int RING_RADIUS = 8;
  const int FADE_PIXELS = 4;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreLed = nextStep;
    
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
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void greenAnimation() {
  const int SEQUENCE_ID = 5;
  const int NO_STEPS = 234;
  const int STEP_INTERVAL_MS = 30;
  const int RING_RADIUS = 9;
  const int BLACK_PAUSE_LENGTH = 28;
  const int GREEN_PAUSE_LENGTH = 74;
  const int FADE_PIXELS = 4;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    switch(nextStep) {
      case NUM_LEDS + 1 ... NUM_LEDS + BLACK_PAUSE_LENGTH:
        fill_solid(leds, NUM_LEDS, CRGB::Black);
        break;

      case 160 ... 160 + GREEN_PAUSE_LENGTH:
        fill_solid(leds, NUM_LEDS, CRGB::Green);
        break;

      default:
        fill_solid(leds, NUM_LEDS, CRGB::Green);

        int centreLed1 = nextStep <= NUM_LEDS ? nextStep : (2 * NUM_LEDS) - (nextStep - BLACK_PAUSE_LENGTH);
        int centreLed2 = loopIfOverEndOfString(centreLed1 + (NUM_LEDS / 2), NUM_LEDS);
        float blackBandWidth = 0;


        if(nextStep <= NUM_LEDS) {
          blackBandWidth = (float) nextStep / 2;
        } else {
          blackBandWidth = (float) ((2 * NUM_LEDS) - (nextStep - BLACK_PAUSE_LENGTH)) / 2;
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
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void spinningOrange() {
  const int SEQUENCE_ID = 6;
  const int NO_STEPS = 40;
  const int STEP_INTERVAL_MS = 50;
  const CRGB ORANGE_COLOUR = CRGB(255,75,0);
  const int RING_RADIUS = 6;
  const int FADE_PIXELS = 5;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Black);

    int centreLed = nextStep;

    for (int i = 1 ; i < RING_RADIUS ; i++) {
      leds[loopIfOverEndOfString(centreLed - i, NUM_LEDS)] = ORANGE_COLOUR;
      leds[loopIfOverEndOfString(centreLed, NUM_LEDS)] = ORANGE_COLOUR;
      leds[loopIfOverEndOfString(centreLed + i, NUM_LEDS)] = ORANGE_COLOUR;

      if (RING_RADIUS - i < FADE_PIXELS) {
        uint8_t fadeFactor = 25*i;
        leds[loopIfOverEndOfString(centreLed - i, NUM_LEDS)].fadeToBlackBy(fadeFactor);
        leds[loopIfOverEndOfString(centreLed + i, NUM_LEDS)].fadeToBlackBy(fadeFactor);
      }
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void pulsingPurple() {
  const int SEQUENCE_ID = 7;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 15;
  const CRGB PURPLE_COLOUR = CRGB(50,0,50);
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    int sinBeat = beatsin16(15, 0, 350);
    int minusIntensity = (sinBeat > 255) ? 255 : sinBeat;
    fill_solid(leds, NUM_LEDS, PURPLE_COLOUR);
    for (int i = 0 ; i < NUM_LEDS ; i++) {
      leds[i].fadeToBlackBy(minusIntensity);
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void staticBlue() {
  const int SEQUENCE_ID = 8;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 50;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void testProgram1() {
  const int SEQUENCE_ID = 10;
  const int NO_STEPS = 41;
  const int STEP_INTERVAL_MS = 500;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    switch(nextStep) {
      case 0:
        FastLED.clear();
        break;
      default:
        leds[nextStep - 1] = CRGB(0, 150, 0);
        break;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}

void testProgram2() {
  const int SEQUENCE_ID = 11;
  const int NO_STEPS = 41;
  const int STEP_INTERVAL_MS = 500;
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - previousMillis > STEP_INTERVAL_MS) {
    switch(nextStep) {
      case 0:
        FastLED.clear();
        break;
      default:
        leds[nextStep - 1] = CRGB(0, 0, 150);
        break;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    previousMillis = currentMillis;
    FastLED.show();
  }
}