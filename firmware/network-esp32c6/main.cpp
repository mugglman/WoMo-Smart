#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);

    Serial.print("Verbinde mit WLAN");
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(400);
    }

    Serial.println("\nWLAN verbunden!");
    Serial.println(WiFi.localIP());
}

void loop() {
    // später MQTT, Sensor-Daten, HA, etc.
}
