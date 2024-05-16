//
// Created by Abor on 15/05/2024.
//
#include <WiFi.h>
#include "wifi_communication.h"

void activer_wifi() {
    WiFi.mode(WIFI_STA);
}

bool connecter_wifi(string ssid, string password) {
    WiFi.begin(ssid.c_str(), password.c_str());
    if(WiFi.waitForConnectResult() != WL_CONNECTED) {
        return false;

    }else{
        return true;
    }

}

string* wifi_disponible(int& wifi_count) {
    string* wifi_list = new string[wifi_count];
    for (int i = 0; i < wifi_count; i++) {
        wifi_list[i] = WiFi.SSID(i).c_str();
    }
    return wifi_list;
}