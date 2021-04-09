

class gpioInit {

    public:

        gpioInit();
        ~gpioInit();
    
    private:

        int mPin;
        void newPinInstance(int pin, int mode);
};