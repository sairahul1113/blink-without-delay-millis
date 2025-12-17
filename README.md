# blink-without-delay-millis
LED blink using millis() without delay() - beginner embedded project

# Blink LED Without delay() using millis()

## 🔹 Overview
This project demonstrates how to blink an LED without using the `delay()` function.
Instead, `millis()` is used to create non-blocking timing logic.

## 🔹 Why millis()?
- `delay()` blocks the CPU
- No sensor reading during delay
- Not suitable for real-time systems

Using `millis()` allows the program to run continuously.

## 🔹 Key Concepts
- Non-blocking delay
- Toggle LED using digitalRead()
- Time comparison using unsigned long

## 🔹 Code Logic
- Store previous time in `lastTime`
- Compare with current time
- Toggle LED when interval completes

## 🔹 Learning Outcome
- Understanding of real embedded timing
- Better control over program execution

## 🔹 Hardware Used
- ESP32 / Arduino
- LED
- Resistor
