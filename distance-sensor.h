/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

/**
  @Summary
    Sends a 10us pulse to the TRIG pin

  @Description
    This function sends a 10us pulse to the TRIG pin for the purposes of distance measurement.

  @Preconditions
    Initialize the TMR0 before calling this function.

  @Param
    None.

  @Returns
    None.
*/
void sendTrigger();

/**
  @Summary
    Handles ECHO IOC events

  @Description
    This function handles IOC interrupts when the ECHO pin changes to high or low. Furthermore,
    this function will stop and start the timers accordingly

  @Preconditions
    Initialize the TMR0 before calling this function and that sendTrigger has
    been invoked.

  @Param
    None.

  @Returns
    None.
*/
void handleEcho();

/**
  @Summary
    Updates distance[256] array with timerTicks and calculates their average 
    value. Calculates the distance from the stored average variable for the 
    AJ-SR04M distance sensor.

  @Description
    This function will store timerTicks within distance[256] array and use 
    stored timerTicks to calculate their average. Every call to 
    calculateDistance will update distance[] 16 times and calculate distance 
    given the updated average value, clock frequency, and speed of sound
    the speed of sound.

  @Preconditions
    sendTrigger and handleEcho have already timed a ECHO pulse.

  @Param
    None.

  @Returns
    Double representing the distance in cm
*/
float calculateDistance();

/**
  @Summary
    Checks if distance reading is ready

  @Description
    Checks if distance reading has been calculated through IOC.

  @Preconditions
    None.

  @Param
    None.

  @Returns
    Boolean representing if distance measurement is ready
*/
uint8_t isDistanceReady();

/**
 * @Summary
 *  Checks if the error flag on the timer has been set
 * 
 * @Description
 *  Checks if the TMR0 timer has overflowed, resulting in possible bad data
 * 
 * @Preconditions
 *  None.
 * 
 * @Param
 *  None.
 * 
 * @Returns
 *  Boolean representing if error has occurred
 */
uint8_t hasDistanceErrorOccured();

/**
 * @Summary
 *  Gets total timer ticks of TMR0
 * 
 * @Description
 *  Gets stored value for total number of timer ticks
 * 
 * @Preconditions
 *  None.
 * 
 * @Param
 *  None.
 * 
 * @Returns
 *  16-bit wide integer representing total timer ticks
 */
uint16_t getTimerTicks();

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

