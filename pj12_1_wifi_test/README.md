[Back to HOME](../README.md)

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

[src/pj12_1_wifi_test.cpp](src/pj12_1_wifi_test.cpp)

## Test result

If the WiFi is connected successfully, the serial monitor will print out the assigned IP address.  

![Connected WiFi](images/Connected%20WiFi.png)

Open a browser to access the IP address, then we will read the contents of the string S sent out by the client.println(s); in the code.

![Server content](images/Server%20content.jpg)
