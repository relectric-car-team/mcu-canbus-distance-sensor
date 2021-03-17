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
    int window = 10;
    int index = 0;
    float value = 0;
    float sum = 0;
    float readings[window];
    float averaged = 0;

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Set handleEcho as interrupt handler for ECHO pin IOC events
    IOCCF5_SetInterruptHandler(handleEcho);

    while (1)
    {
        __delay_ms(250);
        sendTrigger();
        if (isDistanceReady()) {
            if (hasDistanceErrorOccured()) printf("POSSIBLE TMR0 OVERFLOW: ");
            sum = sum = readings[index];
            value = calculateDistance();
            readings[index] = value;
            sum = sum + value;
            index = (index + 1) % window;
            averaged = sum / window;
            printf("Got Distance Reading: %f, Timer Ticks: %u\n\r", calculateDistance(), getTimerTicks()); // Can I change calculateDistance() to averaged?
        }
    }
}
