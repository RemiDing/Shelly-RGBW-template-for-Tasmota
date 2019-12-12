  { "Shelly 1,2",      // SHELLY1 - Shelly1 Open Source (ESP8266 - 2MB) - https://shelly.cloud/shelly1-open-source/    //richibau  relais und Schalteingang auf verschiedenen kanälen
     0,                // GPIO00 - Can be changed to GPIO_USER, only if Shelly is powered with 12V DC
     0,                // GPIO01 Serial RXD - Can be changed to GPIO_USER, only if Shelly is powered with 12V DC
     0,
     0,                // GPIO03 Serial TXD - Can be changed to GPIO_USER, only if Shelly is powered with 12V DC
     GPIO_REL2,        // GPIO04 Relay (0 = Off, 1 = On)
     GPIO_SWT1_NP,     // GPIO05 SW pin
                       // GPIO06 (SD_CLK   Flash)
                       // GPIO07 (SD_DATA0 Flash QIO/DIO/DOUT)
                       // GPIO08 (SD_DATA1 Flash QIO/DIO/DOUT)
     0,                // GPIO09 (SD_DATA2 Flash QIO or ESP8285)
     0,                // GPIO10 (SD_DATA3 Flash QIO or ESP8285)
                       // GPIO11 (SD_CMD   Flash)
     0, 0, 0, 0, 0, 0
  },
  { "Shelly 2.5",        // SHELLY25 - Shelly2 https://shelly.cloud/shelly-25-wifi-smart-relay-roller-shutter-home-automation/
     GPIO_LED1_INV,    // LED1i
     GPIO_USER,        //
     GPIO_KEY1,        // Button1
     GPIO_USER,        // 
     GPIO_REL1,        // Relay1
     GPIO_SWT2_NP,     // Switch2n
     0,                // 
     0,                // 
     GPIO_I2C_SDA,     // I2C SDA
     GPIO_SWT1_NP,     // Switch1n
     GPIO_I2C_SCL,     // I2C SCL
     GPIO_REL2,        // Relay2
     GPIO_ADE7953_IRQ,
     0
  },
  { "Shelly RGBW",     // (ESP8266)
                       // 
                       //  (PwmFrequency ??)
     GPIO_USER,        // GPIO00 
     GPIO_USER,        // GPIO01
     GPIO_USER,        // GPIO02 Serial TXD 
     GPIO_USER,        // GPIO03
     GPIO_PWM4,        // GPIO04 RGBW LED White
     GPIO_KEY1,        // GPIO05 Button
                       // GPIO06 (SD_CLK   Flash)
                       // GPIO07 (SD_DATA0 Flash QIO/DIO/DOUT)
                       // GPIO08 (SD_DATA1 Flash QIO/DIO/DOUT)
     0,                // GPIO09 (SD_DATA2 Flash QIO or ESP8285)
     0,                // GPIO10 (SD_DATA3 Flash QIO or ESP8285)
                       // GPIO11 (SD_CMD   Flash)
     GPIO_PWM1,        // GPIO12 RGBCW LED Red
     GPIO_USER,        // GPIO13 
     GPIO_PWM3,        // GPIO14 RGB LED Blue
     GPIO_PWM2,        // GPIO15 RGB LED Green
     0, 0
  }      
};
