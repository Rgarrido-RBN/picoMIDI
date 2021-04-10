#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

bool gpioInitialization(uint pinNumber, uint mode, uint pullMode);
void gpio_callback(uint gpio, uint32_t events);

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
    GPIO_ANALOG = 2
}gpioModes;

typedef enum 
{
    GPIO_PULLUP = 1,
    GPIO_PULLDOWN = 2,
    GPIO_NOPULL = 3
}gpioModes;

typedef enum 
{
    ENABLE_FLAG = true,
    DISABLE_FLAG = false,
}gpioInterruptFlagMode;

typedef enum 
{
    GPIO_INTERRUPT_LOW_LEVEL = 0x1u,
    GPIO_INTERRUPT_HIGH_LEVEL = 0x2u,
    GPIO_INTERRUPT_EDGE_FALL = 0x4u,
    GPIO_INTERRUPT_EDGE_RISE = 0x8u
}gpioInterruptEventMode;