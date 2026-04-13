#pragma once


#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11

// OLED
#define OLED_DISPLAY_128X32
#define OLED_DRIVER_ENABLE

#define ENCODER_RESOLUTION 4
#define ENCODER_A_PINS {GP26, GP28}
#define ENCODER_B_PINS {GP27, GP29}

// Tapping time term || mod-tap keys (ms)
#define TAPPING_TERM 200