# Lab 9 Documentation

These are my screenshots, ESP32 setup photo, and recordings for Lab 9.

| File | What it shows |
|---|---|
| [ESP32 setup](esp32-usb-setup.jpg) | USB-powered ESP32; no external module connected. |
| [Phone Wi-Fi list](phone-setup-network.jpg) | BCA188-ESP32-2802 available in my phone settings. |
| [Phone portal home](phone-portal-home.jpg) | WiFiManager home page for BCA188-ESP32-2802. |
| [Phone second-network form](phone-second-network.jpg) | PLDTHOMEFIBRThR6w selected with the password masked. |
| [First connection recording, 13 seconds](first-network-demo.mp4) | Successful Hidden_Network connection and IP 192.168.1.80. |
| [Settings reset recording, 22 seconds](reset-settings-demo.mp4) | Saved settings erased, ESP32 restarted, and setup portal reopened. |
| [Library search](library-search.png) | WiFiManager by tzapu before installation. |
| [Library installed](library-installed.png) | WiFiManager 2.0.17 installed successfully. |
| [Portal startup](portal-startup.png) | BCA188-ESP32-2802 at 192.168.4.1. Older SPI output is visible above the reset. |
| [First network](network-hidden.png) | Hidden_Network; IP 192.168.1.80; RSSI -69 dBm. |
| [Settings reset](settings-reset.png) | SETTINGS ERASED, software reset, and setup portal reopening. |
| [Second network](network-pldt.png) | PLDTHOMEFIBRThR6w; IP 192.168.1.80; RSSI -64 dBm. |
| [MOLE desktop error](mole-signin-error.png) | Safari sign-in connection error on October 23 at 11:56 PM. |
| [MOLE mobile loading](mole-mobile-loading.png) | Dashboard loading indicators at 23:58. |

The phone form shows the selected network; the Serial Monitor screenshots show the successful connections. The 180-second timeout is configured in my sketch.
