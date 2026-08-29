# Traffic-light-PIC16F877A
Traffic Light System using PIC16F877A, Proteus and MikroC
# Traffic Light Controller Using PIC16F877A

## 📌 Project Overview

This project is a Traffic Light Controller system designed using the
PIC16F877A microcontroller.

The system controls two streets:

- West Street
- South Street

The project was designed and simulated using Proteus, and the PIC
microcontroller was programmed using MikroC.

---
## 📷 Project Preview

![Traffic Light Simulation](traffic_light.Png)
## 🎯 Project Objectives

The main objectives of this project are:

- Control traffic lights for two streets.
- Implement Automatic and Manual operating modes.
- Display the remaining time using 7-segment displays.
- Use the 7447 BCD-to-7-segment decoder to control the displays.
- Practice interfacing the PIC16F877A with LEDs, switches, transistors,
  and 7-segment displays.
  [Flow chart](Flowchart.png)
---

## 🛠️ Components Used

### Hardware Components

- PIC16F877A Microcontroller
- 7447 BCD-to-7-Segment Decoder
- Common Anode 7-Segment Displays
- Traffic Light LEDs
- PNP Transistors
- Switches
- 8 MHz Crystal Oscillator
- Resistors
- Power Supply

### Software Tools

- Proteus
- MikroC PRO for PIC

---

## ⚙️ System Modes

The system has two operating modes:

### 1. Automatic Mode

In Automatic Mode, the traffic lights operate continuously according
to the predefined timing sequence.

#### West Street

- Red: 15 seconds
- Yellow: 3 seconds
- Green: 20 seconds

#### South Street

- Red: 23 seconds
- Yellow: 3 seconds
- Green: 12 seconds

The 7-segment displays show the remaining time for each street.

---

### 2. Manual Mode

In Manual Mode, the user can select the street using a switch.

The selected street receives the Green light, while the other street
remains Red.

A 3-second Yellow transition is also applied when required.

---

## 🔢 7-Segment Display

The remaining time is displayed using 7-segment displays.

The 7447 IC is used as a BCD-to-7-segment decoder.

The countdown value is divided into:

- Tens digit
- Ones digit

The PIC16F877A sends the BCD values to the 7447 decoders to display
the required digits.

---

## 🔄 Automatic Mode Sequence

The automatic sequence can be summarized as follows:

```text
West Green  → South Red
     ↓
West Yellow → South Red
     ↓
West Red    → South Green
     ↓
West Red    → South Yellow
     ↓
Repeat
