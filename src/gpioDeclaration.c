#include "gpioDeclaration.h"

bool gpioInitialization(int pinNumber, int mode)
{
    if(mode == GPIO_BINARY)
    {
        gpio_init(pinNumber);
    }
    else 
    {
        //TODO: Learn how to initialize analog GPIO
    }
    return true;
}