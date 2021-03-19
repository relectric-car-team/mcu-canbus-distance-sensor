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
uint8_t distanceError = 0;
float average;
float distance[256];
int counter = 0;
int toggle = 1;
        
void sendTrigger() {
    // Send 10us pulse to TRIG pin
    TRIG_SetHigh();         // Set TRIG pin high
    __delay_us(10);         // Wait for 10us        // FIXME: Change delay function to timer
    TRIG_SetLow();          // Set TRIG pin low
}

void handleEcho() {
    if (ECHO_GetValue() == 1) {                     // Rising edge of ECHO pin
        TMR0_StartTimer();                          // Start timer
    } else {                                        // Falling edge of ECHO pin
        TMR0_StopTimer();                           // Stop timer
        timerTicks = TMR0_ReadTimer();              // Read timer into timerTicks
        distanceError = TMR0_HasOverflowOccured();  // Check if overflow has occured and store in flag
        TMR0_Reload();                              // Reload timer (set back to 0)
        distanceReady = 1;                          // Sets distance ready to true
        __delay_ms(5);                              // Wait 5ms to allow distance sensor to reset
    }
}

uint8_t isDistanceReady() {
    if (distanceReady) {                            // Check if distance value has been updated
        distanceReady = 0;                          // Reset distanceReady since it will be read
        return 1;                                   // Return true
    }
    return 0;                                       // Return false
}

uint8_t hasDistanceErrorOccured() {
    if (distanceError) {                            // Check if error flag has been set
        distanceError = 0;                          // Reset distanceError since it will be read
        return 1;                                   // Return true
    }
    return 0;                                       // Return false
}

uint16_t getTimerTicks() {
    return timerTicks;                              // Returns current timer ticks
}

float calculateDistance() {
    if (counter == 256) {                           // Sets counter to zero when distance[] overflows]
        counter = 0;
        toggle = 0;                                 // Ensures average is divided by 256 with array is full
    }
    for (int i = 0; i < 16; i++) {                  // Will update distance[] 16 times before average is returned
        average -= distance[counter];               // Delete current timerTick from average
        distance[counter] = timerTicks;             // Update distance[]
        average += distance[counter];               // Add current timerTick to average
        counter++;                                  // Increment counter
    }

    // clockTicks / number of slots filled in distance[] / 2(account for twice distance) * speed of sound(m/s) / clockFrequency(500kHz)
    if (toggle) {
        return average / counter / 2.0 * 343 / 500000;
    } else {
        return average / 256 / 2.0 * 343 / 500000;
    }
}