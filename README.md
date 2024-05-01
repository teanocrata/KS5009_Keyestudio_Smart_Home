# KS5009_Keyestudio_Smart_Home

## Table of Contents

1. [Project 1: Control led](#project-1-control-led)
    - [Working principle](#working-principle)
    - [Parameters](#parameters)
    - [Control pin](#control-pin)
    - [Project 1.1 LED Flashing](pj1_1_led/README.md)
    - [Project 1.2 Breathing LED](pj1_2_breath_led/README.md)
2. [Project 2: Table Lamp](#project-2-table-lamp)
    - [Description](#description)
    - [Button Principle](#button-principle)
    - [Pins of the Button](#pins-of-the-button)
    - [Project 2.1 Read the Button](pj2_1_button/README.md)
    - [Project 2.2 Table Lamp](pj2_2_button_led/README.md)
3. [Project 3: PIR Motion sensor](#project-3-pir-motion-sensor)
    - [Description](#description-1)
    - [Control Pin](#control-pin-1)
    - [Project 3.1 Read the PIR Motion Sensor](pj3_1_pyroelectric/README.md)
    - [Project 3.2 PIR Motion Sensor](pj3_2_pyroelectric_led/README.md)
4.  [Project 4: Play Music](#project-4-play-music)
    - [Description](#description-2)
    - [Component knowledge](#component-knowledge)
    - [Control Pin](#control-pin-2)
    - [Project 4.1 Play Happy Birthday](pj4_1_buzzer/README.md)
    - [Project 4.2 Music Box](pj4_2_music/README.md)


# Project 1: Control led

We will first learn how to control the LED.

![Yellow LED](images/Yellow%20LED%20Module.png)

## Working Principle

LED is also the light-emitting diode, whiich can be made into an electronic module. It will shine if we control pins to output high level, otherwise it will be off.

## Parameters

| Parameter | Value |
| - | - |
| Working voltage | DC 3~5V |
| Working current | <20A |
| Power | 0.1W |

## Control Pin

| Pin | ID |
| - | - |
| Yellow LED | 12 |

## [Project 1.1 LED Flashing](pj1_1_led/README.md)

## [Project 1.2 Breathing LED](pj1_2_breath_led/README.md)

# Project 2: Table Lamp

## Description

The common table lamp uses LED lights and buttons, which can control the light on and off pressing the button.

## Button Principle

The button module is a digital sensor, which can oonly read 0 os 1. When the module is not pressed, it is in a high level state, that is 1, when pressed, it is a low level 0.

![Button Module](images/Button%20module.png)

## Pins of the Button

| Pin | ID |
| - | - |
| Button 1 | 16 |
| Button 2 | 27 |

## [Project 2.1 Read the Button](pj2_1_button/README.md)

## [Project 2.2 Table Lamp](pj2_2_button_led/README.md)

# Project 3: PIR Motion sensor

## Description

The PIR motion sensor has many application scenarios in daily life, sucho automatic inductioon lamp of stairs, automatic induction faucet of washbasing, etc.
It is also a digiral sensor like buttons, which has two state values 0 or 1. And it will be sended when people are moving.

It is also a digital sensor like buttons, which has two state values 0 or 1. And it will be sensed when people are moving.

![PIR Motion Sensor](images/PIR%20Motion%20Sensor.png)

## Control Pin

| Pin | ID |
| - | - |
| PIR motion sensor | 14 |

## [Project 3.1 Read the PIR Motion Sensor](pj3_1_pyroelectric/README.md)

## [Project 3.2 PIR Motion Sensor](pj3_2_pyroelectric_led/README.md)

# Project 4: Play Music

## Description

There is a audio power amplifier element in the car expansion board, wich is an external amplificatio equiipment to play music.

In thiis project, we will work to play a piece of music by using it.

## Component Knowledge

**Pasive Buzzer:** The audio poower amplifier (like the passive buzzer) does not have internal oscillation. When controling we need to input squere waves of different frequencies to the poositive pole of the component and ground the negative pole to control the power amplifier to chiime sounds of different frequencies.

![Passive Buzzer Module](images/Passive%20Buzzer%20Module.png)

## Control Pin

| Pin | ID |
| - | - |
| Passive Buzzer | 25 |

## [Project 4.1 Play Happy Birthday](pj4_1_buzzer/README.md)

## [Project 4.2 Music Box](pj4_2_music/README.md)