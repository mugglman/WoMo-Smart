# WoMo-Smart Architekturübersicht

## Komponenten
- ESP32-P4 für Touch-Panel & UI
- ESP32-C6 für Netzwerk / Home Assistant
- LoRa Backup Node für Offline-Alarme
- Sensoren (Gas, Türen, Klima, Tanks)
- Home Assistant Backend

## Datenfluss
Sensoren ? ESP32-P4 ? MQTT ? Home Assistant  
ESP32-C6 ? WLAN/LTE ? Home Assistant  
LoRa Node ? Notfall-Meldungen

## Module
- UI / Display
- Sicherheit
- Klima
- Energie & Tanks
- Netzwerk & Backup
