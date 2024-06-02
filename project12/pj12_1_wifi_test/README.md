# Project 12.1 Smart Home

## Description

We connect the smart home to a LAN, which is the WiFi in your home or the hot spot of your phone. After the connection is successful, an address will be assigned, which can be used for communication. We will print the assigned address in the serial monitor.

You need to create a new file at [include/credentials.h](include/credentials.h) with yout home ssid and password like:

```cpp
// include/credentials.h
#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_password"
```

## Test code

[src/pj12_1_wifi_test](src/pj12_1_wifi_test.cpp ':include :type=code')

## Test result

If the WiFi is connected successfully, the serial monitor will print out the assigned IP address.  

<figure>
    <img src="project12/pj12_1_wifi_test/images/Connected%20WiFi.png" alt="Connected WiFi"  width="80%" height="80%">
    <figcaption>Connected WiFi.</figcaption>
</figure>

Open a browser to access the IP address, then we will read the contents of the string S sent out by the client.println(s); in the code.

<figure>
    <img src="project12/pj12_1_wifi_test/images/Server%20content.jpg" alt="Access from phone" width="50%" height="50%">
    <figcaption>Access from phone.</figcaption>
</figure>
