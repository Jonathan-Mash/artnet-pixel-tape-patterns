void onDmxFrame(uint16_t universe, uint16_t length, uint8_t sequence, uint8_t* data) {
  if (universe == ART_CONTROL_UNIVERSE)
  {
    FastLED.setBrightness(data[ART_CONTROL_BRIGHTNESS_ADDR - 1]);
    // FastLED.show();

    switch(data[ART_CONTROL_PROGRAMME_ADDR - 1]) {
      case 0:
        currentSequence = &staticBlackSnap;
        break;
      case 1 ... 49:
        currentSequence = &fire;
        break;
      case 50 ... 99:
        currentSequence = &Fire2012WithPalette;
        break;
      case 100 ... 149:
        currentSequence = &Fire2018;
        break;
      case 150 ... 249:
        currentSequence = &firePaletteWithGlitter;
        break;
      case 250:
        currentSequence = &staticBlack;
        break;
      case 251 ... 255:
        currentSequence = &pauseSequence;
        break;
    }
  }
}