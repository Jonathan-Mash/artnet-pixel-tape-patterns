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

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreStartLedGroup1 = loopIfOverEndOfString(CENTRE_START_LED + (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);
    int centreStartLedGroup2 = loopIfOverEndOfString(CENTRE_START_LED - (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);

    int centreLedGroup1 = loopIfOverEndOfString(centreStartLedGroup1 + getNextStep(), NUM_LEDS);
    int centreLedGroup2 = loopIfOverEndOfString(centreStartLedGroup2 - getNextStep(), NUM_LEDS);

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
    setPreviousMillis(currentMillis);
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

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    fill_solid(leds, NUM_LEDS, CRGB::Blue);

    int centreStartLedGroup1 = loopIfOverEndOfString(CENTRE_START_LED + (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);
    int centreStartLedGroup2 = loopIfOverEndOfString(CENTRE_START_LED - (GROUP_RADIUS - 1 - START_OVERLAP), NUM_LEDS);

    int centreLedGroup1 = loopIfOverEndOfString(centreStartLedGroup1 + getNextStep(), NUM_LEDS);
    int centreLedGroup2 = loopIfOverEndOfString(centreStartLedGroup2 - getNextStep(), NUM_LEDS);

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
    setPreviousMillis(currentMillis);
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

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {    
    switch(getNextStep()) {
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
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}
