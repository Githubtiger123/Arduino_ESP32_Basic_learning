#include <WiFi.h>
const char *wifi_ssid = "ESP32";
const char *wifi_password = "admin123";

void setup() {
  Serial.begin(115200);
  WiFi.softAP(wifi_ssid,wifi_password);
  //WiFi.softAPconfig("192.168.2.1","192.168.2.1","255.255.255.0");
}

void loop() {
  // put your main code here, to run repeatedly:

}
