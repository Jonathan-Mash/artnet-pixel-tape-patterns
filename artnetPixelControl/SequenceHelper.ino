long previousMillis = 0;
unsigned long nextStep = 0;
int runningSequenceId = 1;


long getPreviousMillis() {
  return previousMillis;
}

void setPreviousMillis(long value) {
  previousMillis = value;
}

void startProgramIfNotRunning(int sequenceId) {
  if (runningSequenceId != sequenceId) {
    Serial.println("Changing to sequence " + String(sequenceId));
    runningSequenceId = sequenceId;
    previousMillis = 0;
    nextStep = 0;
  }
}

int loopIfOverEndOfString(long ledNo, long numLeds) {
  if (ledNo < 0) {
    return loopIfOverEndOfString(ledNo + numLeds, numLeds);
  } else if (ledNo > numLeds - 1) {
    return loopIfOverEndOfString(ledNo - numLeds, numLeds);
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

void advanceStepOrRestartSequenceIfCompleted(long noSteps) {
  advanceMultipleStepsOrRestartSequenceIfCompleted(noSteps, 1);
}

void advanceStepOrEndSequenceIfCompleted(long noSteps) {
  advanceMultipleStepsOrEndSequenceIfCompleted(noSteps, 1);
}

void advanceMultipleStepsOrRestartSequenceIfCompleted(long noSequenceSteps, int advanceBy) {
  nextStep += advanceBy;
  nextStep = (nextStep > noSequenceSteps - 1) ? 0 : nextStep;
}

void advanceMultipleStepsOrEndSequenceIfCompleted(long noSequenceSteps, int advanceBy) {
  nextStep += advanceBy;
  nextStep = (nextStep > noSequenceSteps - 1) ? noSequenceSteps + 1 : nextStep;
}

unsigned long getNextStep() {
  return nextStep;
}

void pauseSequence() {
  const int REFRESH_INTERVAL_MS = 30;
  unsigned long currentMillis = millis();
  if (currentMillis - getPreviousMillis() > REFRESH_INTERVAL_MS) {
    setPreviousMillis(currentMillis);
    advanceStepOrEndSequenceIfCompleted(0);
    FastLED.show();
  }
}
