#include "gpioPico.h"
#include "gpioDeclaration.h"

gpioPico::gpioPico(uint pinID, uint function, uint pullMode)
{
    gpioInitialization(pinID, function, pullMode); 
}

bool gpioPico::gpioEnableInterrupt(uint pinID, uint32_t event, bool enableFlag)
{
    gpio_set_irq_enabled_with_callback(pinID, event, enableFlag, &gpio_callback);
    return true;
}