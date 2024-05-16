#include <Arduino.h>
#include <initialisation/initialisation.h>
#include <wifi/wifi_communication.h>
#include <WiFi.h>
void setup() {
    initialisation_globale();
    initialisation_communication();
}

void loop() {
    int wifi_count = WiFi.scanNetworks();
// write your code here
    Serial.println("Hello World et moi c\'est Abor!");
    delay(1000);

    for (int i = 0; i < wifi_count; i++) {
        Serial.println(wifi_disponible(wifi_count)[i].c_str());
    }
}