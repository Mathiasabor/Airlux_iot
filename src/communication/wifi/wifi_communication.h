//
// Created by Abor on 15/05/2024.
//
#include <iostream>
using namespace std;
#ifndef WIFI_COMMUNICATION_H
#define WIFI_COMMUNICATION_H
struct wifi_config {
    string ssid;
    string password;
};
void activer_wifi();
bool connecter_wifi(string ssid, string password);
string* wifi_disponible(int& wifi_count);

#endif //WIFI_COMMUNICATION_H
