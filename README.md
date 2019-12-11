= Shelly RGBW template for Tasmota =
https://shelly.cloud/wifi-smart-shelly-rgbw-2/

PwmFrequency 875Hz

==== Flash firmware ====
To be able to flash the Tasmota firmware you need to get into flash mode. Therefore connect a wire from GPIO0 to ground. 

===== device pinout =====

| GPIO0	| GND | RxD | TxD | 3.3V |


====Template====
| GPIO	| Component | Function |
| 4	| GPIO_PWM4 |  RGBW LED White |
| 5	| GPIO_KEY1 |  Button |  
| 12	| GPIO_PWM1 |  RGBW LED Red | 
| 14	| GPIO_PWM3 |  RGBW LED Blue |
| 15	| GPIO_PWM2 |  RGBW LED Green |

====mtqq commands tested====
* cmnd/tasmota/channel1
* cmnd/tasmota/channel2
* cmnd/tasmota/channel3
* cmnd/tasmota/channel4
