void onDmxFrame(uint16_t universe, uint16_t length, uint8_t sequence, uint8_t* data) {
  if (universe == ART_CONTROL_UNIVERSE)
  {
    FastLED.setBrightness(data[ART_CONTROL_BRIGHTNESS_ADDR - 1]);
    FastLED.show();

    switch(data[ART_CONTROL_PROGRAMME_ADDR - 1]) {
      case 0 ... 24:
        currentSequence = &speechWipeIn;
        break;
      case 25 ... 49:
        currentSequence = &speechWipeOut;
        break;
      case 50 ... 74:
        currentSequence = &speech;
        break;
      case 75 ... 99:
        currentSequence = &spinningBlueCyan;
        break;
      case 100 ... 124:
        currentSequence = &greenAnimation;
        break;
      case 125 ... 149:
        currentSequence = &spinningOrange;
        break;
      case 150 ... 174:
        currentSequence = &pulsingPurple;
        break;
      case 175 ... 199:
        currentSequence = &staticBlue;
        break;
      case 200 ... 224:
        currentSequence = &testProgram1;
        break;
      case 225 ... 249:
        currentSequence = &testProgram2;
        break;
      case 250 ... 255:
        currentSequence = &pause;
    }
  }
}