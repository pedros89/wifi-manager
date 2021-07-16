# WiFi Manager Example for ESP32

### Full tutorial: https://www.teachmemicro.com/esp32-wifi-manager-dynamic-ssid-password

### Usage:
* From Laptop or smartphone connect to Access Point with SSID: TEIS_PROVA_AP, Key: 12345678
* Go to 192.168.4.1 on preferred browser, enter router's WiFi SSID and Key
* Click Save and the SSID and Password will be sent to EEPROM
* ESP32 will restart and the same Webserver page will be reloaded
* In HTML.h you can place your customized HTML code very easily.
* To run the program with Arduino IDE go in documents/Arduino/libraries and create a folder, name it WiFiManager and then drag in that folder the WiFiManager.h and HTML.h
* place the file WiFiManager-example.ino in the folder documents/Arduino/ and run from there, it will tell you that Arduino wnats to create a folder, click OK

### Notes: 
* ESP8266/NodeMCU currently (1/6/2021) not supported