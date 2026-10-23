# Laboratory Activity 9: ESP32 Wi-Fi Manager

**Rhea Leen Castor**

BCA188 - Programming For Internet of Things

Configure ESP32 Wi-Fi using a phone. Hold BOOT for 3 seconds, then release it, to clear saved Wi-Fi and restart setup.

## Setup

1. Install **esp32 by Espressif Systems** in Arduino IDE Boards Manager and **WiFiManager by tzapu** in Library Manager.
2. Open [wifi_manager.ino](wifi_manager/wifi_manager.ino). Select your ESP32 board and USB port.
3. The code uses `BCA188-ESP32-XX` as its setup network. Replace `XX` if your instructor assigned a number.
4. Upload and open Serial Monitor at **115200 baud**. If uploads fail at high speed, set **Tools > Upload Speed > 115200**.
5. Connect your phone to **BCA188-ESP32-XX**. Stay connected even if it says there is no internet.
6. Open **http://192.168.4.1**, choose **Configure WiFi**, select your home network, enter its password, and save.
7. Record the SSID, IP address, and RSSI shown in Serial Monitor.

Use a **2.4 GHz** Wi-Fi network or hotspot. Saved credentials reconnect automatically after restart. To reopen setup, let the board start, hold BOOT for 3 seconds, then release it.

## Materials and pins

- ESP32 WROOM-32 development board, USB data cable, phone, and Wi-Fi network.
- BOOT: built-in button on GPIO0; no extra wire needed.
- Optional pushbutton: GPIO4 to GND when pressed.
- Status LED: GPIO2. If your board has no LED there, use GPIO2 to a 220-ohm resistor to the LED's long leg; connect its short leg to GND. It blinks during setup and stays on when connected.

Unplug USB before wiring. The OLED and UART/SPI jumpers from Lab 8 are not needed. The pin settings target the WROOM-32 board; check the pinout before using another ESP32 model.

## Results

| Test | Expected | Observed |
|---|---|---|
| Wrong password | Connection fails; setup remains available until the 180-second portal timeout, then the board restarts. | To be recorded |
| Reset settings | Holding BOOT for 3 seconds and releasing it clears credentials and reopens setup. | To be recorded |
| Change the name | Change `AP_SSID`, upload, then reset saved Wi-Fi to see the new setup name. | To be recorded |
| Different network | Reset saved Wi-Fi and enter another network or hotspot through the portal; a new IP appears. | To be recorded |

## Documentation

Upload your evidence to [documentation](documentation/). Add the photo or video links below after testing.

| Evidence | Photo or video |
|---|---|
| Setup page on phone | To be uploaded |
| Connected state, SSID, IP, and RSSI | To be uploaded |
| Wrong-password test | To be uploaded |
| BOOT reset test | To be uploaded |
| Changed setup network name | To be uploaded |
| Connection to another network or hotspot | To be uploaded |

## Explanation

WiFiManager saves the network credentials in the ESP32's flash memory after setup. This lets the board connect to a different Wi-Fi network through the phone's setup page without changing the network name or password in the code.

Reference activity: [Lab 9 example](https://github.com/mccdz1/BCA188-Lab9-ESP32-WiFi-Manager). Library: [WiFiManager](https://github.com/tzapu/WiFiManager).
