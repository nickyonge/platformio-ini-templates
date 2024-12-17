#include <main.h>

void setup()
{

#ifdef ENABLE_INPUT
    delay(SETUP_STEP_DELAY);
    setupInput();
#endif // ENABLE_INPUT

#ifdef ENABLE_LEDS
    delay(SETUP_STEP_DELAY);
    setupLEDs();
#endif // ENABLE_LEDS

    delay(SETUP_FINISH_DELAY);
}

void loop()
{

#ifdef ENABLE_INPUT
    loopInput();
#endif
#ifdef ENABLE_LEDS
    loopLEDs();
#endif

    delay(LOOP_DELAY_INTERVAL);
}