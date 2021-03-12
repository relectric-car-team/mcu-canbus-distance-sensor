/*
 * File:   distance-sensor.c
 * Author: ratik
 *
 * Created on March 9, 2021, 8:53 PM
 */


#include <xc.h>

#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/tmr0.h"
#include "mcc_generated_files/device_config.h"

uint16_t timerTicks;
uint8_t distanceReady = 0;

void sendTrigger() {
    // Send 10us pulse to TRIG pin
    TRIG_SetHigh();         // Set TRIG pin high
    __delay_us(10);         // Wait for 10us        // FIXME: Change delay function to timer
    TRIG_SetLow();          // Set TRIG pin low
}

void handleEcho() {
    if (ECHO_GetValue() == 1) {         // Rising edge of ECHO pin
        TMR0_StartTimer();              // Start timer
    } else {                            // Falling edge of ECHO pin
        TMR0_StopTimer();               // Stop timer
        timerTicks = TMR0_ReadTimer();  // Read timer into timerTicks
        TMR0_Reload();                  // Reload timer (set back to 0)
        distanceReady = 1;              // Sets distance ready to true
        __delay_us(2500);               // Wait 2.5ms to allow distance sensor to reset
    }
}

uint8_t isDistanceReady() {
    if (distanceReady) {                // Check if distance value has been updated
        distanceReady = 0;              // Reset distanceReady since it will be read
        return 1;                       // Return true
    }
    return 0;                           // Return false
}

double calculateDistance() {
    // clockTicks / clockFrequency(64MHz) * speed of sound(cm/us) / 2(account for twice distance)
    return timerTicks / _XTAL_FREQ * 0.0343 / 2;
}