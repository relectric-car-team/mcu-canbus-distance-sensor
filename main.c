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
        __delay_ms(1000);
        sendTrigger();
        if (isDistanceReady()) {
            printf("Got Distance Reading: %d", calculateDistance());
        }
    }
}