# Project 11.1 Morse Code Open the Door

## Description

We use <img src="/project11/pj11_1_mosDoor/images/K.png" alt="Morse symbol K" height="16"> as the correct password. What’s more, there is a button library file OneButton, which is very simple to click, double click, long press and other functions. For Morse password, click is“.”, long press and release is “-”.

## Test code

[src/pj11_1_mosDoor.cpp](src/pj11_1_mosDoor.cpp ':include :type=code')

## Test result

At first, the LCD1602 displays "Enter password", then click or long press button 1 to tap the password. If we input the correct password "-.-", then click button 2, the door will open, and the LCD1602 will display "open". 
If other incorrect passwords are entered, the door will not move, the LCD1602 will display “error” and then “enter again” 2s later.

Furthermore, long press button 2 can close the door.  
