# Project 7: Fan

## Description

In this project, we wiill learn how to make a small fan.

## Component knowledge

The small fan uses a 130 DC motor and safe fan blades. You can use PWM output the fan speed.

<figure>
    <img src="images/Fan.png"
         alt="Fan"  width="20%" height="20%">
    <figcaption>Fan.</figcaption>
</figure>

## Control Method

Two pins are required to control the motor of the fan, one for INA and two for INB. The PWM value range is 0~255. When the PWM output of the two pins is different, the fan can rotate.

| Value | Action |
| - | - |
| INA - INB <= -45 | Rotate clockwise |
| INA - INB >= 45 | Rotate anticlockwise |
| INA == 0, INB == 0 | Stop |

## Control Pins

| Pin | ID |
| - | - |
| INA | 19 |
| INB | 18 |