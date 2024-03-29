bool ConnectWifi() {
  bool state = true;
  int i = 0;

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("");
  Serial.println("Connecting to WiFi");
  
  // Wait for connection
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (i > 20){
      state = false;
      break;
    }
    i++;
  }
  if (state){
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(WIFI_SSID);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("");
    Serial.println("Retrying.");
  }
  
  return state;
}

void reconnectWifiIfDisconnected()
{
  if ( (WiFi.status() != WL_CONNECTED) )
  {
    Serial.println("WiFi connection lost. Reconnecting.");
    WiFi.disconnect();
    WiFi.end();
    if (ConnectWifi()) {
      artnet.begin();
    }
  }
}