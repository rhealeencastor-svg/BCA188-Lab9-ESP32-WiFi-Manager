# Laboratory Activity 9: ESP32 Wi-Fi Manager

**Rhea Leen P. Castor**

**Assigned number: 2802**

BCA188 - Programming For Internet of Things

This is my Wi-Fi Manager project for the ESP32. It uses a phone setup page to enter Wi-Fi details instead of putting the network name and password in the code.

## Materials

- ESP32 WROOM-32 board and USB data cable
- Computer with Arduino IDE, ESP32 board support, and WiFiManager by tzapu
- Phone
- Two 2.4 GHz Wi-Fi networks, such as a home router and a phone hotspot

## My setup

My code is in [wifi_manager.ino](wifi_manager/wifi_manager.ino). I set the setup network name to **BCA188-ESP32-2802** and the Serial Monitor baud rate to **115200**.

When saved Wi-Fi is unavailable, the ESP32 opens its setup network. The setup page is at **http://192.168.4.1**, where I can choose a Wi-Fi network and enter its password using my phone.

The portal timeout is **180 seconds**. The code restarts the ESP32 if setup is not completed before the timeout. The built-in BOOT button on GPIO0 clears saved Wi-Fi after a 3-second hold and restarts the board when released, so I can set up another network without reprogramming.

The project only needs the ESP32 connected through USB. No extra wiring is used. Serial Monitor shows the connected network's SSID, IP address, and RSSI.

## Results

My test observations have not been recorded yet.

| Test | Expected | Observed |
|---|---|---|
| Wrong password | Connection fails; the portal stays available until the timeout, then the board restarts. | Not yet recorded |
| Reset settings | A 3-second BOOT hold and release clears credentials and reopens setup. | Not yet recorded |
| Change the name | The updated setup name appears after changing AP_SSID, uploading, and clearing saved Wi-Fi. | Not yet recorded |
| Different network | The ESP32 connects to another network through the portal and shows its SSID and assigned IP. | Not yet recorded |

## Documentation
<img width="1624" height="1061" alt="image" src="https://github.com/user-attachments/assets/27ea59db-34e4-42a0-ad02-035b543e2297" />

<img width="1624" height="1061" alt="image" src="https://github.com/user-attachments/assets/03f491ed-f5d8-4700-b098-48ae15bbac1a" />

<img width="1624" height="1061" alt="image" src="https://github.com/user-attachments/assets/23073e3c-edb7-43d7-870e-2d53b6c5ae4c" />

<img width="1624" height="1061" alt="image" src="https://github.com/user-attachments/assets/068f738b-08c4-48ff-ae6c-ab3bffe848c8" />

My screenshots, photos, and test videos will be in [documentation](documentation/).

| Evidence | Status |
|---|---|
| Setup page on my phone | Pending upload |
| Serial Monitor showing SSID, IP, and RSSI | Pending upload |
| Wrong-password test | Pending upload |
| BOOT reset test | Pending upload |
| Changed setup network name | Pending upload |
| Connection to another network or hotspot | Pending upload |

## Explanation

WiFiManager saves Wi-Fi credentials in the ESP32's flash memory. This lets me switch networks through the phone setup page without changing the network details in my code.

Reference activity: [Lab 9 example](https://github.com/mccdz1/BCA188-Lab9-ESP32-WiFi-Manager). Library: [WiFiManager](https://github.com/tzapu/WiFiManager).

## PROOF OF MOLE UNABLE TO OPEN:
<img width="1512" height="982" alt="Screenshot 2026-10-23 at 11 56 19 PM" src="https://github.com/user-attachments/assets/e2c17099-0a75-48e0-a96e-b1c76d24ac44" />

<img width="922" height="2049" alt="image" src="https://github.com/user-attachments/assets/efad051e-1daa-4a93-a1eb-f65a58cd6476" />
