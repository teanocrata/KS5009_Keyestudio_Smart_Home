# Project 13.2 IoT Smart Home

## Description

The IOT smart home connects to the family WiFi through WiFi, and the mobile phone used for operation should also be connected to the same WiFi. 
What’s more, the smart home also can connect to the hotspot of the mobile phone. If the connection is successful, the LCD1602 will display the IP address. Using the phone APP to input the corresponding IP for communication is enable to realize the APP control of various functions of the smart home.

You need to create a new file at [include/credentials.h](include/credentials.h) with your home ssid and password like:

```cpp
// include/credentials.h
#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_password"
```

## Test code

[src/pj13_2_IoT_smart_home](src/pj13_2_IoT_smart_home.cpp ':include :type=code')

## Test result

<figure>
    <img src="/project13/pj13_2_IoT_smart_home/images/App.png" alt="App"  width="60%" height="60%">
    <figcaption>App.</figcaption>
</figure>