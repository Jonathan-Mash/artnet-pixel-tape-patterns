#ifndef FASTLED_RMT_MAX_TICKS_FOR_GTX_SEM  
#define FASTLED_RMT_MAX_TICKS_FOR_GTX_SEM (portMAX_DELAY)
#endif

#include <ArtnetWifi.h>
#include <Arduino.h>
#include <FastLED.h>
#include "ErrorStatus.h"

// Pixel Tape settings
#define NUM_LEDS 300
#define DATA_PIN 2
#define MAX_VOLTS 5
#define MAX_AMPS 25000
const int NUM_ADDRESSES = 2;

// Artnet address settings
const int ART_CONTROL_UNIVERSE = 3;
const int ART_CONTROL_BRIGHTNESS_ADDR = 501;
const int ART_CONTROL_PROGRAMME_ADDR = 502;
const int START_UNIVERSE = 1;

//Wifi settings
const char* WIFI_SSID = "ARTNET";
const char* WIFI_PASSWORD = "********";

ArtnetWifi artnet;
CRGB leds[NUM_LEDS];
void (*currentSequence)(void) = &testProgram1;


void setup() {
  Serial.begin(115200);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(MAX_VOLTS, MAX_AMPS);

  if (ConnectWifi()) {
    artnet.begin();
    initTest();
    artnet.setArtDmxCallback(onDmxFrame);
  } else {
    flashErrorStatus(NETWORK_FAILURE);
  }
}

void loop() {
  reconnectWifiIfDisconnected();
  artnet.read();
  currentSequence();
}
