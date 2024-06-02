# Project 13.1 Test APP

## Description

We will use APP to control the smart home LED lights and fan switches.

You need to create a new file at [include/credentials.h](include/credentials.h) with your home ssid and password like:

```cpp
// include/credentials.h
#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_password"
```

## Test code

[src/pj13_1_app_test](src/pj13_1_app_test.cpp ':include :type=code')

## Test result

1. Open the APP and select WIFI

<figure>
    <img src="project13/pj13_1_app_test/images/Select%20WIFI.png" alt="Select WiFi"  width="40%" height="40%">
    <figcaption>Select WiFi.</figcaption>
</figure>

2. APP controls LED and the fan

The mobile phone and the smart home must share the same WiFi, or the smart home connects to the hotspot of the mobile phone.  
APP input IP address (LCD1602 displays the assigned IP address), then click connect, the connection is successful if ESP32 IP: 192.168...... is displayed.  
Next, you can click the LED, then the smart home LED will be turned on. Click the fan button and the fan will be turned on, as shown below: 

<figure>
    <img src="project13/pj13_1_app_test/images/App%20config.png" alt="App config"  width="50%" height=50%">
    <figcaption>App config.</figcaption>
</figure>