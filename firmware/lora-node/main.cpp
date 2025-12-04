#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("LoRa Node gestartet");
}

void loop() {
    // später: LoRa Heartbeat, Alarmübermittlung
}
