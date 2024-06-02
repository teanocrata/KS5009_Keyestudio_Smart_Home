# Project 1.2 Breathing LED

## Description

A "breathing LED" is a phenomenoon where an LED's brightness smoothly changes from dark to bright and back to dark, continuing to do so and giving the illusion of an LED "brething". However, how to control LED's brightness?
It makes sense to take advantage of PWM. Output the number of high level in unit time, the more time the high level occupies, the larger the PWM value, the brighter the LED.

<figure>
    <img src="project01/pj1_2_breath_led/images/Pulse%20with%20modulation.png"
         alt="Pulse with modulation"  width="80%" height="80%">
    <figcaption>Pulse with modulation.</figcaption>
</figure>

We need to use the library [ESP32_AnalogWrite](https://github.com/ERROPiX/ESP32_AnalogWrite) witch provides an analogWrite polyfill for ESP32 using the LEDC functions, therefore solely a simple sttatement `analogWrite();` can control the PWM output.

## Test Code

[src/pj1_2_breath_led.cpp](src/pj1_2_breath_led.cpp ':include :type=code')

## Test result

The LED gradually gets dimmer then brighter, cyclically, like human breathe.