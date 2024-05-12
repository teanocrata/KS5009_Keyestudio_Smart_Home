# Project 12.2 Control Smart Home

## Description

In this project, we will learn how to realize different functions of the smart home through accessing different strings under the address. There is a LCD screen that can print out the IP address, which is much more convenient.

You need to create a new file at [include/credentials.h](include/credentials.h) with your home ssid and password like:

```cpp
// include/credentials.h
#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_password"
```

## Test code

[src/pj12_2_wifi_led](src/pj12_2_wifi_led.cpp ':include :type=code')

## Test result

If the smart home is successfully connected to WiFi, the LCD screen will display the assigned address.  

<figure>
    <img src="/project12/pj12_2_wifi_led/images/IP.png" alt="IP"  width="20%" height="20%">
    <figcaption>IP.</figcaption>
</figure>

Accessing address must add / led/on when using the browser, such as my address is 192.168.0.129/ led/on. Then the smart home LED lights will be turned on, if accessing 192.168.0.129/ led /off, then the LED lights will be off.

<figure>
    <img src="/project12/pj12_2_wifi_led/images/Led%20on.png" alt="Led on"  width="80%" height="80%">
    <figcaption>Led on.</figcaption>
</figure>
<figure>
    <img src="/project12/pj12_2_wifi_led/images/Led%20off.png" alt="Led off"  width="80%" height="80%">
    <figcaption>Led off.</figcaption>
</figure>

When the browser accesses 192.168.0.129/fan/ on, the fan of the smart home will be turned on and at 192.168.0.129/fan/ off will be turned off.


<figure>
    <img src="/project12/pj12_2_wifi_led/images/Fan%20on.png" alt="Fan on"  width="80%" height="80%">
    <figcaption>Fan on.</figcaption>
</figure>
<figure>
    <img src="/project12/pj12_2_wifi_led/images/Fan%20off.png" alt="Fan off"  width="80%" height="80%">
    <figcaption>Fan off.</figcaption>
</figure>