/*
 * File:   main.c
 * Author: ratik
 *
 * Created on January 8, 2021, 5:25 PM
 */

#include "mcc_generated_files/mcc.h"
#include "distance-sensor.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Set handleEcho as interrupt handler for ECHO pin IOC events
    IOCCF5_SetInterruptHandler(handleEcho);

    while (1)
    {
        //delay is set to 62.5ms so the sensor can accurately update distance every second i.e. 1000/16 <-- 256/16
        __delay_ms(62.5);
        sendTrigger();
        if (isDistanceReady()) {
            if (hasDistanceErrorOccured()) printf("POSSIBLE TMR0 OVERFLOW: ");
            printf("Got Distance Reading: %f, Timer Ticks: %u\n\r", calculateDistance(), getTimerTicks());
        }
    }
}
