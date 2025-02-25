#include <Arduino.h>
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic

void setup() {
  Serial.begin(115200);
  WiFiManager wifiManager;
  wifiManager.resetSettings();
  //first parameter is name of access point, second is the password
  wifiManager.autoConnect("ESP32_Prueba", "Itch1234");
  Serial.println("Ya estas conectado");
}

void loop() {
  // put your main code here, to run repeatedly:

}

