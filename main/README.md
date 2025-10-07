# _Automatic Coil Winding Machine_

> Based on **Hyperspace Pirate’s [Automatic Coil Winding Machine](https://youtu.be/GJcQfJ6JTZg?si=VR7BC0yHdudxdHs-)**.
> The goal is to modernize the control, integrate a real-time front-end on a **2.8" TFT screen**, and explore potential for **energy regeneration** during deceleration phases.

---

## 🧩 Overview

This repository contains firmware and hardware resources for an **automatic coil winding machine** that automates the process of winding wire coils for motors, transformers, or other electromagnetic components.  
Unlike manual winding, this project focuses on **precision, repeatability, and efficiency** — with control over the number of turns, wire tension, and winding speed.

The project builds on the open-source design by *Hyperspace Pirate*, replacing and extending the user interface using **TFT_eSPI** for a compact but rich display.

---

## 🚀 Features

- 🧠 **ESP32** implementation (Arduino dependency)
- 📺 **2.8" TFT screen** with custom UI using [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI)
- ⚡ **Real-time control** of spindle motor and wire guide (stepper)
- 🎛️ Adjustable parameters via on-screen menu:
  - Target turns
  - Motor RPM
  - Wire guide limits (X-axis)
  - Acceleration / deceleration curves
- 🔋 *Future goal:* regenerative braking system for energy recovery
- 📡 *Optional expansion:* LoRa or WiFi-based monitoring and data logging

---

## 🛠️ Hardware Setup

| Component | Description |
|------------|-------------|
| **ESP32** | Main MCU running ESP-IDF firmware |
| **TFT 2.8" SPI Display** | User interface using TFT_eSPI |
| **Stepper Motor (NEMA 17)** | Controls wire guide (X-axis) |
| **DC Motor (12V, 3000 RPM)** | Main spindle motor |
| **H-Bridge Driver (BTS7960)** | Drives the spindle motor with potential for regenerative feedback |
| **Power Supply (12V–24V)** | Shared bus for motors and control |
| **Optional sensors** | Encoder for turns counting, load cell for wire tension |

📎 *Refer to the `/hardware` folder for wiring diagrams and schematics.*

---

## 📦 Software Overview

This project is structured as a standard **ESP32 with Arduino component-based project**.

## ⚙️ Setup Instructions

1. **Install ESP-IDF**
   - Follow official [ESP-IDF setup guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html).

2. **Clone this repo**
   ```
   git clone https://github.com/yourusername/Automatic-Coil-Winder-ESP32.git
   cd Automatic-Coil-Winder-ESP32
   ```
3. **Configure the project**
    ```
    idf.py menuconfig
    ```
4. **Build and Flash**
    ```
    idf.py build flash monitor
    ```
