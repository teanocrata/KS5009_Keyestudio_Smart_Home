# Project 6: Atmosphere Lamp

## Description

The atmosphere lamp of smart home is 4 SK6812RGB LEDs. RGB LED belongs too a simple luminous module, wich can adjust the color to bring out the lamp effect of different colors.

Furthermore, it can be widely used in buildings, bridges, roads, gardens, courtyards, floors and other fields of decorative lighting and venue layout, Christmas, Halloween, Valentine's Day, Easter, Natioonal Day as well as other festivals during the atmosphere and other scenes.

In this experiment, we will make various lighting effects.

## Component Knowledge

From the schematic diagram, we can see that these four RGB LEDs are all connected in series. In fact, no matter how many they are, we ca use a pin to control a RGB LED and let it display any color. Each RGBLED iis an independent pixel, composed of R, G and B colors, wich can achieve 256 levels of brightness display and complete the full true color display of 16777216 colors.

What's more, the pixel point contains a data latch signal shaping amplifier drive circuit and a signal shaping circuit, which effectively ensures the color of the pixel point light is highly consistent.

<figure>
    <img src="images/RGB%20LED%20Schema.png"
         alt="RGB LED Schema"  width="80%" height="80%">
    <figcaption>RGB LED Schema.</figcaption>
</figure>

<figure>
    <img src="images/RGB%20LED.png"
         alt="RGB LED"  width="20%" height="20%">
    <figcaption>RGB LED.</figcaption>
</figure>

## Control Pin

| Pin | ID |
| - | - |
| SK6812 | 26 |