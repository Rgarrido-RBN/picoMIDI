#include "gpioPico.h"
#include "gpioDeclaration.h"

gpioPico::gpioPico(int pinID, int modeID)
{
    gpioInitialization(pinID, modeID);
}