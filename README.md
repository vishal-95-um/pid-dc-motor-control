# PID DC Motor Control

## Overview

This project aims to develop a real-time closed-loop DC motor control system by combining classical control techniques, embedded systems, and machine learning.

The motor is controlled using a PID controller designed and tuned in MATLAB/Simulink. The controller will be deployed on an ESP32 running FreeRTOS, with encoder feedback enabling accurate speed regulation. The project also explores Hardware-in-the-Loop (HIL) testing using Simulink and machine learning-based motor fault classification.

## Objectives

- Design and tune a PID controller in MATLAB/Simulink.
- Implement real-time speed control on an ESP32.
- Develop multitasking firmware using FreeRTOS.
- Interface the physical motor with Simulink for HIL testing.
- Collect motor sensor data for analysis.
- Train a machine learning model for motor fault detection.

## Planned Technologies

- ESP32
- FreeRTOS
- MATLAB
- Simulink
- PlatformIO
- C++
- Python
- Scikit-learn

---

This repository is currently under active development.