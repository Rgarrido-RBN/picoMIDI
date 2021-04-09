#include <stdio.h>
#include "pico/stdlib.h"

bool gpioInitialization(int pinNumber, int mode);

typedef enum 
{
    PRESET_BUTTON_1 = 1,
    PRESET_BUTTON_2 = 2,
    PRESET_BUTTON_3 = 3,
    PRESET_BUTTON_4 = 4,
    PRESET_BUTTON_5 = 5,
    PRESET_BUTTON_6 = 6,
    PRESET_BUTTON_7 = 7
}gpioPins;

typedef enum 
{
    GPIO_BINARY = 1,
    GPIO_ANALOG = 2,
}gpioModes;