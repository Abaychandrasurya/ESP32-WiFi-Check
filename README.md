# 📡 ESP32 Wi-Fi Connection Monitor

This project demonstrates how to connect an **ESP32** to a Wi-Fi network and monitor its connection status using the built-in `WiFi` library. It continuously prints the connection status and the device’s IP address to the Serial Monitor.

---

## 🚀 Features

- Connects to a Wi-Fi network using SSID and password
- Displays:
  - Connection progress using dots (`.`)
  - Local IP address upon successful connection
- Continuously checks and logs Wi-Fi connection status

---

## 🔧 Hardware Required

- ESP32 development board (e.g., DOIT ESP32 DevKit V1, WROOM32)
- USB cable for programming
- Arduino IDE with ESP32 board support installed

---

## 🔌 Circuit Diagram

![wifi check Project](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2019/05/ESP32_OLED.png?w=873&quality=100&strip=all&ssl=1)

## 🔌 Wiring Connections

For this basic Wi-Fi monitoring sketch, no external components are needed.

| ESP32 Pin | Connected To       |
|-----------|--------------------|
| USB       | Computer (via cable)|


| Component     | OLED Pin | ESP32 Pin   |
|---------------|----------|-------------|
| SSD1306 OLED  | VCC      | 3.3V        |
|               | GND      | GND         |
|               | SDA      | GPIO21 (or D21) |
|               | SCL      | GPIO22 (or D22) |

> 📌 **Note:** I2C default pins on ESP32:
> - SDA = GPIO21  
> - SCL = GPIO22  
> You can change these in software if needed.

| ESP32 Pin | Connected To       |
|-----------|--------------------|
| USB       | Computer (via cable)|

> ⚠️ Make sure you're using a **USB data cable** (not just a charging cable) to upload the code and view Serial Monitor output.
> ⚠️Make sure to power the ESP32 through USB when programming and running the sketch.

---

## 🧠 Libraries Used

- ✅ Built-in [`WiFi`](https://github.com/espressif/arduino-esp32/tree/master/libraries/WiFi) library for ESP32

---

## ✅ Usage
- Replace YourSSID and YourPassword with your Wi-Fi credentials in the code.
- Upload the sketch to your ESP32 using Arduino IDE.
- Open the Serial Monitor at 115200 baud to view the logs.
- Watch it connect and report the local IP and status messages.

---

## 📈 Possible Improvements

- Auto-reconnect if Wi-Fi drops
- Add OLED or LED indicators for connection status
- Log uptime or network health to a remote server
- Display connection time or heartbeat ping
  
---

## 🔍 Serial Monitor Output Example

```cpp
Connecting to WiFi............
Connected!
IP Address: 192.168.1.107
WiFi is connected!
WiFi is connected!
