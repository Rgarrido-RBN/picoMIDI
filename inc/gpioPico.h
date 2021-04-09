#include <stdio.h>
#include "pico/stdlib.h"

class gpioPico {

    public:
        gpioPico(int pin, int mode);
        ~gpioPico();

};