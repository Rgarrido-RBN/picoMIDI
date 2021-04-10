#include "gpioDeclaration.h"

bool gpioInitialization(uint pinNumber, uint mode, uint pullMode)
{
    if( mode == GPIO_BINARY )
    {
        gpio_init(pinNumber);
    }
    else 
    {
        //TODO: Learn how to initialize analog GPIO
    }
    if( pullMode =! GPIO_NOPULL )
    {
        if(pullMode == GPIO_PULLUP)
        {
        gpio_set_pulls(pinNumber, true, false);    
        }
        else if(pullMode == GPIO_PULLDOWN)
        {
        gpio_set_pulls(pinNumber, false, true);    
        }
    }
    return true;
}

void gpio_callback(uint gpio, uint32_t events) 
{
 // TODO: Turn on the led which enable this interrupt
 // and print the preset name on the LCD screen 
}
