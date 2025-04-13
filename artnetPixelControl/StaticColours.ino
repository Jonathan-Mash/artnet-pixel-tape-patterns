// All

void staticBlack() {
  const int SEQUENCE_ID = 101;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Black;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticBlackSnap() {
  const int SEQUENCE_ID = 102;
  const float FADE_TIME_SECS = 0;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Black;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticLightCyanSnap() {
  const int SEQUENCE_ID = 103;
  const float FADE_TIME_SECS = 0;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticPurpleSnap() {
  const int SEQUENCE_ID = 104;
  const float FADE_TIME_SECS = 0;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticBlueSnap() {
  const int SEQUENCE_ID = 105;
  const float FADE_TIME_SECS = 0;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}


void staticCyanSlowFade() {
  const int SEQUENCE_ID = 106;
  const int FADE_TIME_SECS = 6;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticLightCyanSlowFade() {
  const int SEQUENCE_ID = 107;
  const int FADE_TIME_SECS = 6;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticPurpleSlowFade() {
  const int SEQUENCE_ID = 108;
  const int FADE_TIME_SECS = 6;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticBlue() {
  const int SEQUENCE_ID = 109;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticCyan() {
  const int SEQUENCE_ID = 110;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticLightCyan() {
  const int SEQUENCE_ID = 111;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticWhite() {
  const int SEQUENCE_ID = 112;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticColdWhite() {
  const int SEQUENCE_ID = 113;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}

void staticPurple() {
  const int SEQUENCE_ID = 114;
  const int FADE_TIME_SECS = 2;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAllToStaticColour(FADE_TIME_SECS, targetColour);
}


// DSL area #1

void staticBlueDsl1() {
  const int SEQUENCE_ID = 109;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsl1() {
  const int SEQUENCE_ID = 115;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsl1() {
  const int SEQUENCE_ID = 116;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsl1() {
  const int SEQUENCE_ID = 117;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;
  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsl1() {
  const int SEQUENCE_ID = 118;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsl1() {
  const int SEQUENCE_ID = 119;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSL area #2

void staticBlueDsl2() {
  const int SEQUENCE_ID = 120;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsl2() {
  const int SEQUENCE_ID = 121;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsl2() {
  const int SEQUENCE_ID = 122;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsl2() {
  const int SEQUENCE_ID = 123;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;
  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsl2() {
  const int SEQUENCE_ID = 124;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsl2() {
  const int SEQUENCE_ID = 125;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 48;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSL area #3

void staticBlueDsl3() {
  const int SEQUENCE_ID = 126;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsl3() {
  const int SEQUENCE_ID = 127;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsl3() {
  const int SEQUENCE_ID = 128;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsl3() {
  const int SEQUENCE_ID = 129;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;
  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsl3() {
  const int SEQUENCE_ID = 130;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsl3() {
  const int SEQUENCE_ID = 131;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 285;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSL area #4

void staticBlueDsl4() {
  const int SEQUENCE_ID = 132;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsl4() {
  const int SEQUENCE_ID = 133;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsl4() {
  const int SEQUENCE_ID = 134;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsl4() {
  const int SEQUENCE_ID = 135;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;
  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsl4() {
  const int SEQUENCE_ID = 136;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsl4() {
  const int SEQUENCE_ID = 137;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1288;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSL area #5

void staticBlueDsl5() {
  const int SEQUENCE_ID = 138;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsl5() {
  const int SEQUENCE_ID = 139;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsl5() {
  const int SEQUENCE_ID = 140;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsl5() {
  const int SEQUENCE_ID = 141;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;
  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsl5() {
  const int SEQUENCE_ID = 142;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsl5() {
  const int SEQUENCE_ID = 143;
  const int FADE_TIME_SECS = 2;
  const int DSL_AREA_LOWER_BOUND = 1169;
  const int DSL_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSL_AREA_LOWER_BOUND, DSL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSR area #1

void staticBlueDsr1() {
  const int SEQUENCE_ID = 144;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsr1() {
  const int SEQUENCE_ID = 145;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsr1() {
  const int SEQUENCE_ID = 146;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsr1() {
  const int SEQUENCE_ID = 147;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsr1() {
  const int SEQUENCE_ID = 148;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsr1() {
  const int SEQUENCE_ID = 149;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSR area #2

void staticBlueDsr2() {
  const int SEQUENCE_ID = 150;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsr2() {
  const int SEQUENCE_ID = 151;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsr2() {
  const int SEQUENCE_ID = 152;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsr2() {
  const int SEQUENCE_ID = 153;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsr2() {
  const int SEQUENCE_ID = 154;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsr2() {
  const int SEQUENCE_ID = 155;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 619;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSR area #3

void staticBlueDsr3() {
  const int SEQUENCE_ID = 156;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsr3() {
  const int SEQUENCE_ID = 157;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsr3() {
  const int SEQUENCE_ID = 158;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsr3() {
  const int SEQUENCE_ID = 159;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsr3() {
  const int SEQUENCE_ID = 160;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsr3() {
  const int SEQUENCE_ID = 161;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 382;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSR area #4

void staticBlueDsr4() {
  const int SEQUENCE_ID = 162;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsr4() {
  const int SEQUENCE_ID = 163;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsr4() {
  const int SEQUENCE_ID = 164;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsr4() {
  const int SEQUENCE_ID = 165;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsr4() {
  const int SEQUENCE_ID = 166;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsr4() {
  const int SEQUENCE_ID = 167;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 715;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// DSR area #5

void staticBlueDsr5() {
  const int SEQUENCE_ID = 168;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDsr5() {
  const int SEQUENCE_ID = 169;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDsr5() {
  const int SEQUENCE_ID = 170;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDsr5() {
  const int SEQUENCE_ID = 171;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDsr5() {
  const int SEQUENCE_ID = 172;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDsr5() {
  const int SEQUENCE_ID = 173;
  const int FADE_TIME_SECS = 2;
  const int DSR_AREA_LOWER_BOUND = 286;
  const int DSR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DSR_AREA_LOWER_BOUND, DSR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USR area #1

void staticBlueUsr1() {
  const int SEQUENCE_ID = 174;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsr1() {
  const int SEQUENCE_ID = 175;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsr1() {
  const int SEQUENCE_ID = 176;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsr1() {
  const int SEQUENCE_ID = 177;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsr1() {
  const int SEQUENCE_ID = 178;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsr1() {
  const int SEQUENCE_ID = 179;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USR area #2

void staticBlueUsr2() {
  const int SEQUENCE_ID = 180;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsr2() {
  const int SEQUENCE_ID = 181;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsr2() {
  const int SEQUENCE_ID = 182;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsr2() {
  const int SEQUENCE_ID = 183;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsr2() {
  const int SEQUENCE_ID = 184;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsr2() {
  const int SEQUENCE_ID = 185;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 716;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USR area #3

void staticBlueUsr3() {
  const int SEQUENCE_ID = 186;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsr3() {
  const int SEQUENCE_ID = 187;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsr3() {
  const int SEQUENCE_ID = 188;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsr3() {
  const int SEQUENCE_ID = 189;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsr3() {
  const int SEQUENCE_ID = 190;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsr3() {
  const int SEQUENCE_ID = 191;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 953;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USR area #4

void staticBlueUsr4() {
  const int SEQUENCE_ID = 192;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsr4() {
  const int SEQUENCE_ID = 193;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsr4() {
  const int SEQUENCE_ID = 194;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsr4() {
  const int SEQUENCE_ID = 195;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsr4() {
  const int SEQUENCE_ID = 196;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsr4() {
  const int SEQUENCE_ID = 197;
  const int FADE_TIME_SECS = 2;
  const int USR_AREA_LOWER_BOUND = 620;
  const int USR_AREA_UPPER_BOUND = 1049;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USR_AREA_LOWER_BOUND, USR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USL area #1

void staticBlueUsl1() {
  const int SEQUENCE_ID = 198;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsl1() {
  const int SEQUENCE_ID = 199;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsl1() {
  const int SEQUENCE_ID = 200;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsl1() {
  const int SEQUENCE_ID = 201;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsl1() {
  const int SEQUENCE_ID = 202;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsl1() {
  const int SEQUENCE_ID = 203;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USL area #2

void staticBlueUsl2() {
  const int SEQUENCE_ID = 204;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsl2() {
  const int SEQUENCE_ID = 205;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsl2() {
  const int SEQUENCE_ID = 206;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsl2() {
  const int SEQUENCE_ID = 207;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsl2() {
  const int SEQUENCE_ID = 208;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsl2() {
  const int SEQUENCE_ID = 209;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 1287;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USL area #3

void staticBlueUsl3() {
  const int SEQUENCE_ID = 210;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsl3() {
  const int SEQUENCE_ID = 211;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsl3() {
  const int SEQUENCE_ID = 212;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsl3() {
  const int SEQUENCE_ID = 213;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsl3() {
  const int SEQUENCE_ID = 214;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsl3() {
  const int SEQUENCE_ID = 215;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 1050;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// USL area #4

void staticBlueUsl4() {
  const int SEQUENCE_ID = 216;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUsl4() {
  const int SEQUENCE_ID = 217;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUsl4() {
  const int SEQUENCE_ID = 218;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUsl4() {
  const int SEQUENCE_ID = 219;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUsl4() {
  const int SEQUENCE_ID = 220;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUsl4() {
  const int SEQUENCE_ID = 221;
  const int FADE_TIME_SECS = 2;
  const int USL_AREA_LOWER_BOUND = 954;
  const int USL_AREA_UPPER_BOUND = 47;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, USL_AREA_LOWER_BOUND, USL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// SL side

void staticBlueSl() {
  const int SEQUENCE_ID = 222;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanSl() {
  const int SEQUENCE_ID = 223;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanSl() {
  const int SEQUENCE_ID = 224;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteSl() {
  const int SEQUENCE_ID = 225;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteSl() {
  const int SEQUENCE_ID = 226;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleSl() {
  const int SEQUENCE_ID = 227;
  const int FADE_TIME_SECS = 2;
  const int SL_AREA_LOWER_BOUND = 1169;
  const int SL_AREA_UPPER_BOUND = 166;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, SL_AREA_LOWER_BOUND, SL_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// Ds Side

void staticBlueDs() {
  const int SEQUENCE_ID = 228;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanDs() {
  const int SEQUENCE_ID = 229;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanDs() {
  const int SEQUENCE_ID = 230;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteDs() {
  const int SEQUENCE_ID = 231;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteDs() {
  const int SEQUENCE_ID = 232;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleDs() {
  const int SEQUENCE_ID = 233;
  const int FADE_TIME_SECS = 2;
  const int DS_AREA_LOWER_BOUND = 167;
  const int DS_AREA_UPPER_BOUND = 500;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, DS_AREA_LOWER_BOUND, DS_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// Sr Side

void staticBlueSr() {
  const int SEQUENCE_ID = 234;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanSr() {
  const int SEQUENCE_ID = 235;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanSr() {
  const int SEQUENCE_ID = 236;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteSr() {
  const int SEQUENCE_ID = 237;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteSr() {
  const int SEQUENCE_ID = 238;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleSr() {
  const int SEQUENCE_ID = 239;
  const int FADE_TIME_SECS = 2;
  const int SR_AREA_LOWER_BOUND = 501;
  const int SR_AREA_UPPER_BOUND = 834;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, SR_AREA_LOWER_BOUND, SR_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// Us Side

void staticBlueUs() {
  const int SEQUENCE_ID = 240;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Blue;
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticCyanUs() {
  const int SEQUENCE_ID = 241;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::Cyan;
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticLightCyanUs() {
  const int SEQUENCE_ID = 242;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::LightCyan;
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticWhiteUs() {
  const int SEQUENCE_ID = 243;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticColdWhiteUs() {
  const int SEQUENCE_ID = 244;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::GhostWhite;
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

void staticPurpleUs() {
  const int SEQUENCE_ID = 245;
  const int FADE_TIME_SECS = 2;
  const int US_AREA_LOWER_BOUND = 835;
  const int US_AREA_UPPER_BOUND = 1168;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB(50,0,50);
  fadeAreaToColours(targetColour, US_AREA_LOWER_BOUND, US_AREA_UPPER_BOUND, FADE_TIME_SECS);
}

// Train front

void trainFront() {
  const int SEQUENCE_ID = 246;
  const int FADE_TIME_SECS = 2;
  const int TRAIN_AREA_LOWER_BOUND = 285;
  const int TRAIN_AREA_UPPER_BOUND = 381;

  startProgramIfNotRunning(SEQUENCE_ID);
  CRGB targetColour = CRGB::White;
  fadeAreaToColours(targetColour, TRAIN_AREA_LOWER_BOUND, TRAIN_AREA_UPPER_BOUND, FADE_TIME_SECS);
}


// Util functions

void fadeAreaToColours(CRGB targetColour, int areaLowerBound, int areaUpperBound, int fadeTimeSecs) {
  CRGB targetColours[NUM_LEDS];
  
  for (int i = 0 ; i < NUM_LEDS ; i++) {
    CRGB startColour = leds[i];

    if (areaLowerBound > areaUpperBound) {
      if (i <= areaUpperBound || i >= areaLowerBound) {
        targetColours[i] = targetColour;
      } else {
        targetColours[i] = startColour;
      }
    } else {
      if (i >= areaLowerBound && i <= areaUpperBound) {
        targetColours[i] = targetColour;
      } else {
        targetColours[i] = startColour;
      }
    }
  }
  fadeToStaticColours(fadeTimeSecs, targetColours);
}

void fadeToStaticColours(int fadeTimeSecs, CRGB targetColours[NUM_LEDS]) {
  const int STEP_INTERVAL_MS = 50;

  int numSteps = (fadeTimeSecs * 1000) / STEP_INTERVAL_MS;
  int stepsRemaining = numSteps - getNextStep() + 1;
  unsigned long currentMillis = millis();

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    if (stepsRemaining > 0) {
      for (int i = 0 ; i < NUM_LEDS ; i++) {
        CRGB startColour = leds[i];
        CRGB targetColour = targetColours[i];
        leds[i] = fadeToColour(startColour, targetColour, stepsRemaining);
      }
    }
    
    advanceStepOrEndSequenceIfCompleted(numSteps);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}

CRGB fadeToColour(CRGB startColour, CRGB targetColour, int fadeSteps) {
  int redDelta = (int) targetColour.r - (int) startColour.r; // 0 - 50
  int greenDelta = (int) targetColour.g - (int) startColour.g;
  int blueDelta = (int) targetColour.b - (int) startColour.b;

  CRGB stepColour = targetColour;

  if (fadeSteps > 1) {
    uint8_t stepRed = (int) startColour.r + (redDelta / fadeSteps);
    uint8_t stepGreen = (int) startColour.g + (greenDelta / fadeSteps);
    uint8_t stepBlue = (int) startColour.b + (blueDelta / fadeSteps);
    stepColour = CRGB(stepRed, stepGreen, stepBlue);
  }

  return stepColour;
}

void fadeAllToStaticColour(int fadeTimeSecs, CRGB targetColour) {
  CRGB targetColoursArray[NUM_LEDS];
  std::fill_n(targetColoursArray, NUM_LEDS, targetColour);
  fadeToStaticColours(fadeTimeSecs, targetColoursArray);
}
