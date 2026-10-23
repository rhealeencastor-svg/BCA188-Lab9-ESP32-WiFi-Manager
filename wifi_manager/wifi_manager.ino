#include <WiFi.h>
#include <WiFiManager.h>

const char* AP_SSID = "BCA188-ESP32-XX";
const int RESET_BUTTON_PIN = 0;

WiFiManager wm;
unsigned long pressStarted = 0;
bool holding = false;
bool connected = false;

bool buttonPressed() {
  return digitalRead(RESET_BUTTON_PIN) == LOW;
}

void portalStarted(WiFiManager* manager) {
  Serial.print("Connect your phone to: ");
  Serial.println(AP_SSID);
  Serial.print("Open http://");
  Serial.println(WiFi.softAPIP());
}

void portalTimedOut() {
  Serial.println("Setup portal timed out. Restarting...");
  delay(500);
  ESP.restart();
}

void setup() {
  Serial.begin(115200);
  pinMode(RESET_BUTTON_PIN, INPUT_PULLUP);
  delay(1000);

  WiFi.mode(WIFI_STA);
  wm.setConfigPortalBlocking(false);
  wm.setConfigPortalTimeout(180);
  wm.setWebPortalClientCheck(false);
  wm.setConnectTimeout(15);
  wm.setSaveConnectTimeout(15);
  wm.setBreakAfterConfig(false);
  wm.setAPCallback(portalStarted);
  wm.setConfigPortalTimeoutCallback(portalTimedOut);
  wm.autoConnect(AP_SSID);
}

void loop() {
  if (buttonPressed()) {
    if (!holding) {
      holding = true;
      pressStarted = millis();
    }

    if (millis() - pressStarted >= 3000) {
      Serial.println("Clearing saved Wi-Fi. Release the button.");
      wm.resetSettings();
      while (buttonPressed()) {
        delay(10);
      }
      delay(300);
      ESP.restart();
    }
  } else {
    holding = false;
  }

  wm.process();
  bool online = WiFi.status() == WL_CONNECTED;

  if (online && !connected) {
    Serial.println("Connected to Wi-Fi");
    Serial.print("SSID: ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    Serial.print("RSSI: ");
    Serial.print(WiFi.RSSI());
    Serial.println(" dBm");
  }

  connected = online;
  delay(10);
}
