# LED Blinking Project with Tinkercad



This repository contains the files and instructions to create a simple LED blinking circuit using Tinkercad and Arduino.

## Project Overview

This project demonstrates how to create a basic circuit in Tinkercad to blink an LED using an Arduino. The LED will blink on and off every second.

## Circuit Diagram

<br>
<img src="Images/LED Blink Circuit.png" title="LED Blink Circuit" alt="LED Blink Circuit" width="190" height="170"/>
<be>

## Components Required

- 1 x Arduino Uno
- 1 x LED (Red)
- 1 x 220 Ohm Resistor
- Jumper wires

## Tinkercad Block Code

<br>
<img src="Images/LED Blink Block Code.png" title="LED Blink Block Code" alt="LED Blink Block Code" width="190" height="170"/>
<be>

```plaintext
This program blinks pin 13 of the Arduino (the built-in LED)

forever
  - turn the LED on (HIGH is the voltage level)
    - wait 1 second
  - turn the LED off by making the voltage LOW
    - wait 1 second


