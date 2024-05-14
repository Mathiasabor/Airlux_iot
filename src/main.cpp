#include <Arduino.h>
#include <initialisation/initialisation.h>

void setup() {
    initialisation_globale();
}

void loop() {
// write your code here
    Serial.println("Hello World et moi c\'est Abor!");
    delay(1000);
}