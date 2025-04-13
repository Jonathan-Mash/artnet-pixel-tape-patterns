CRGBPalette16 currentPalette = CRGBPalette16(CRGB::Black, CRGB::Black, CRGB::Black, CRGB::Maroon, 
                                CRGB::DarkRed, CRGB::Red, CRGB::Red, CRGB::Red,                                   
                                CRGB::DarkOrange,CRGB::Orange, CRGB::Orange, CRGB::Orange,
                                CRGB::Gold, CRGB::Gold, CRGB::Black, CRGB::Black);

uint32_t xscale = 3;                                                 // How far apart they are
uint32_t yscale = 1;                                                  // How fast they move
uint8_t idx = 0;


void fire() {
  const int SEQUENCE_ID = 401;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 20;
  
  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    for(int i = 0; i < NUM_LEDS; i++) {
      idx = inoise8(i*xscale,currentMillis*yscale*NUM_LEDS/255);                                    // X location is constant, but we move along the Y at the rate of millis()
      leds[i] = ColorFromPalette(currentPalette, min(i*(idx)>>6, 255), i*255/NUM_LEDS, LINEARBLEND);   // With that value, look up the 8 bit colour palette value and assign it to the current LED.
    }
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}








bool gReverseDirection = false;

// CRGBPalette16 gPal = HeatColors_p;
CRGBPalette16 gPal = CRGBPalette16(
                                   CRGB::Black, CRGB::Red, CRGB::Red, CRGB::Red, CRGB::Red, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, 
                                   CRGB::Orange, CRGB::Orange, CRGB::Orange, CRGB::Orange, CRGB::Gold);

// Fire2012 by Mark Kriegsman, July 2012
// as part of "Five Elements" shown here: http://youtu.be/knWiGsmgycY
//// 
// This basic one-dimensional 'fire' simulation works roughly as follows:
// There's a underlying array of 'heat' cells, that model the temperature
// at each point along the line.  Every cycle through the simulation, 
// four steps are performed:
//  1) All cells cool down a little bit, losing heat to the air
//  2) The heat from each cell drifts 'up' and diffuses a little
//  3) Sometimes randomly new 'sparks' of heat are added at the bottom
//  4) The heat from each cell is rendered as a color into the leds array
//     The heat-to-color mapping uses a black-body radiation approximation.
//
// Temperature is in arbitrary units from 0 (cold black) to 255 (white hot).
//
// This simulation scales it self a bit depending on NUM_LEDS; it should look
// "OK" on anywhere from 20 to 100 LEDs without too much tweaking. 
//
// I recommend running this simulation at anywhere from 30-100 frames per second,
// meaning an interframe delay of about 10-35 milliseconds.
//
// Looks best on a high-density LED setup (60+ pixels/meter).
//
//
// There are two main parameters you can play with to control the look and
// feel of your fire: COOLING (used in step 1 above), and SPARKING (used
// in step 3 above).
//
// COOLING: How much does the air cool as it rises?
// Less cooling = taller flames.  More cooling = shorter flames.
// Default 55, suggested range 20-100 
#define COOLING 58

// SPARKING: What chance (out of 255) is there that a new spark will be lit?
// Higher chance = more roaring fire.  Lower chance = more flickery fire.
// Default 120, suggested range 50-200.
#define SPARKING 200


void Fire2012WithPalette()
{
  const int SEQUENCE_ID = 402;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 20;

  random16_add_entropy( random());


  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
  
    // Array of temperature readings at each simulation cell
    static uint8_t heat[NUM_LEDS];

    // Step 1.  Cool down every cell a little
    for( int i = 0; i < NUM_LEDS; i++) {
      heat[i] = qsub8( heat[i],  random8(0, ((COOLING * 10) / NUM_LEDS) + 2));
    }
  
    // Step 2.  Heat from each cell drifts 'up' and diffuses a little
    for( int k= NUM_LEDS - 1; k >= 2; k--) {
      heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2] ) / 3;
    }
    
    // Step 3.  Randomly ignite new 'sparks' of heat near the bottom
    if( random8() < SPARKING ) {
      int y = random8(7);
      heat[y] = qadd8( heat[y], random8(160,255) );
    }

    // Step 4.  Map from heat cells to LED colors
    for( int j = 0; j < NUM_LEDS; j++) {
      // Scale the heat value from 0-255 down to 0-240
      // for best results with color palettes.
      uint8_t colorindex = scale8( heat[j], 240);
      CRGB color = ColorFromPalette( gPal, colorindex);
      int pixelnumber;
      if( gReverseDirection ) {
        pixelnumber = (NUM_LEDS-1) - j;
      } else {
        pixelnumber = j;
      }
      leds[pixelnumber] = color;
    }

    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}




uint8_t Width  = 18;
uint8_t Height = 18;
uint8_t CentreX =  (Width / 2) - 1;
uint8_t CentreY = (Height / 2) - 1;

uint32_t x;
uint32_t y;
uint32_t z;
uint32_t scale_x;
uint32_t scale_y;

// storage for the noise data
// adjust the size to suit your setup
uint8_t noise[18][18];

// heatmap data with the size matrix width * height
uint8_t heat[324];

CRGBPalette16 Pal = HeatColors_p;

// this finds the right index within a serpentine matrix
uint16_t XY( uint8_t x, uint8_t y) {
  uint16_t i;
  if ( y & 0x01) {
    uint8_t reverseX = (Width - 1) - x;
    i = (y * Width) + reverseX;
  } else {
    i = (y * Width) + x;
  }
  return i;
}

void Fire2018() {

  const int SEQUENCE_ID = 403;
  const int NO_STEPS = 1;
  const int STEP_INTERVAL_MS = 20;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {

    // get one noise value out of a moving noise space
    uint16_t ctrl1 = inoise16(11 * currentMillis, 0, 0);
    // get another one
    uint16_t ctrl2 = inoise16(13 * currentMillis, 100000, 100000);
    // average of both to get a more unpredictable curve
    uint16_t  ctrl = ((ctrl1 + ctrl2) / 2);

    // this factor defines the general speed of the heatmap movement
    // high value = high speed
    uint8_t speed = 27;

    // here we define the impact of the wind
    // high factor = a lot of movement to the sides
    x = 3 * ctrl * speed;

    // this is the speed of the upstream itself
    // high factor = fast movement
    y = 15 * currentMillis * speed;

    // just for ever changing patterns we move through z as well
    z = 3 * currentMillis * speed ;

    // ...and dynamically scale the complete heatmap for some changes in the
    // size of the heatspots.
    // The speed of change is influenced by the factors in the calculation of ctrl1 & 2 above.
    // The divisor sets the impact of the size-scaling.
    scale_x = ctrl1 / 2;
    scale_y = ctrl2 / 2;

    // Calculate the noise array based on the control parameters.
    uint8_t layer = 0;
    for (uint8_t i = 0; i < Width; i++) {
      uint32_t ioffset = scale_x * (i - CentreX);
      for (uint8_t j = 0; j < Height; j++) {
        uint32_t joffset = scale_y * (j - CentreY);
        uint16_t data = ((inoise16(x + ioffset, y + joffset, z)) + 1);
        noise[i][j] = data >> 8;
      }
    }


    // Draw the first (lowest) line - seed the fire.
    // It could be random pixels or anything else as well.
    for (uint8_t x = 0; x < Width; x++) {
      // draw
      leds[XY(x, Height-1)] = ColorFromPalette( Pal, noise[x][0]);
      // and fill the lowest line of the heatmap, too
      heat[XY(x, Height-1)] = noise[x][0];
    }

    // Copy the heatmap one line up for the scrolling.
    for (uint8_t y = 0; y < Height - 1; y++) {
      for (uint8_t x = 0; x < Width; x++) {
        heat[XY(x, y)] = heat[XY(x, y + 1)];
      }
    }

    // Scale the heatmap values down based on the independent scrolling noise array.
    for (uint8_t y = 0; y < Height - 1; y++) {
      for (uint8_t x = 0; x < Width; x++) {

        // get data from the calculated noise field
        uint8_t dim = noise[x][y];

        // This number is critical
        // If it´s to low (like 1.1) the fire dosn´t go up far enough.
        // If it´s to high (like 3) the fire goes up too high.
        // It depends on the framerate which number is best.
        // If the number is not right you loose the uplifting fire clouds
        // which seperate themself while rising up.
        dim = dim / 1.4;

        dim = 255 - dim;

        // here happens the scaling of the heatmap
        heat[XY(x, y)] = scale8(heat[XY(x, y)] , dim);
      }
    }

    // Now just map the colors based on the heatmap.
    for (uint8_t y = 0; y < Height - 1; y++) {
      for (uint8_t x = 0; x < Width; x++) {
        leds[XY(x, y)] = ColorFromPalette( Pal, heat[XY(x, y)]);
      }
    }

    // Done. Bring it on!
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }

}



CRGBPalette16 currentPalette2 = CRGBPalette16(CRGB::Black, CRGB::Red, CRGB::Red, CRGB::Red, CRGB::Red, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, CRGB::DarkOrange, 
                                   CRGB::Orange, CRGB::Orange, CRGB::Orange, CRGB::Gold, CRGB::Gold);
TBlendType currentBlending = LINEARBLEND;

void FillLEDsFromPaletteColors(uint8_t colorIndex)
{
    uint8_t brightness = 255;
    
    for( int i = 0; i < NUM_LEDS; ++i) {
        leds[i] = ColorFromPalette(currentPalette2, colorIndex, brightness, currentBlending);
        colorIndex += 3;
    }
}

void addGlitter(fract8 chanceOfGlitter) {
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;}
}

void firePaletteWithGlitter()
{
  const int SEQUENCE_ID = 404;
  const int NO_STEPS = NUM_LEDS;
  const int STEP_INTERVAL_MS = 2;

  unsigned long currentMillis = millis();

  startProgramIfNotRunning(SEQUENCE_ID);

  if (currentMillis - getPreviousMillis() > STEP_INTERVAL_MS) {
    FillLEDsFromPaletteColors(getNextStep() - 1);
    addGlitter(180);
    advanceStepOrRestartSequenceIfCompleted(NO_STEPS);
    setPreviousMillis(currentMillis);
    FastLED.show();
  }
}


