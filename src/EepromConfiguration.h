#ifndef EEPROMCONFIGURATION_H_
#define EEPROMCONFIGURATION_H_

#include <EEPROM.h>
#include <ESP8266WiFi.h>
#include "HardwareSerial.h"

struct Configuration
{
    char firmware[21]; // firmware version
    char ssid[33]; // Wifi SSID
    char password[33]; // Wifi password
    char identifier[33]; // Identifier of board
    int sleepInterval; // Deep Sleep interval (Minutes)
    char otaUrl[65]; // Url to download Over-the-Air firmware updates
    char mqttBrokerUrl[65]; // Url to MQTT broker
    char mqttUser[33]; // Username for MQTT broker
    char mqttPassword[33]; // Password fot MQTT broker
};

class EepromConfiguration
{
    private:
        int eeStartAddress;
        int eeSize;

    public:
        EepromConfiguration(int size);

        // Checks if EEPROM is empty or not.
        bool isEepromEmpty();

	    // Erase data in EEPROM
        void eraseEeprom();

        // Creates and returns valid default configuration
        Configuration createDefaultConfiguration();

        // Reads and returns the configuration from EEPROM.
        Configuration readConfigurationFromEeprom();

        // Writes the configuration to EEPROM.
        void writeConfigurationToEeprom(Configuration config);
};

#endif
