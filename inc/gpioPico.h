#include <stdio.h>
#include "pico/stdlib.h"

class gpioPico {

    public:
        gpioPico(uint pin, uint function, uint pullMode);
        ~gpioPico();
        bool gpioEnableInterrupt(uint pinID, uint32_t event, bool enableFlag);
    private:
        // TODO: I have to think about how can I do this, if I want to call this function
        // from main or from the constructor of this class.
        
        // bool gpioEnableInterrupt(uint pinID, uint32_t event, bool enableFlag);
};