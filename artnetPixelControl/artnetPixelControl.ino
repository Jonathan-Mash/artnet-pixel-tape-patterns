#include <ArtnetWifi.h>
#include <Arduino.h>
#include <FastLED.h>
#include "ErrorStatus.h"

// Pixel Tape settings
#define NUM_LEDS 40
#define DATA_PIN 2
const int NUM_ADDRESSES = 2;

// Artnet address settings
const int ART_CONTROL_UNIVERSE = 1;
const int ART_CONTROL_BRIGHTNESS_ADDR = 201;
const int ART_CONTROL_PROGRAMME_ADDR = 202;
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
  
  if (ConnectWifi(0)) {
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