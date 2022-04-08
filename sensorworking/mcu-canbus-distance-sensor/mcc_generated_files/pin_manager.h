/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F27Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set TRIG2 aliases
#define TRIG2_TRIS                 TRISCbits.TRISC0
#define TRIG2_LAT                  LATCbits.LATC0
#define TRIG2_PORT                 PORTCbits.RC0
#define TRIG2_WPU                  WPUCbits.WPUC0
#define TRIG2_OD                   ODCONCbits.ODCC0
#define TRIG2_ANS                  ANSELCbits.ANSELC0
#define TRIG2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define TRIG2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define TRIG2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define TRIG2_GetValue()           PORTCbits.RC0
#define TRIG2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define TRIG2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define TRIG2_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define TRIG2_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define TRIG2_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define TRIG2_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define TRIG2_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define TRIG2_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set ECHO2 aliases
#define ECHO2_TRIS                 TRISCbits.TRISC1
#define ECHO2_LAT                  LATCbits.LATC1
#define ECHO2_PORT                 PORTCbits.RC1
#define ECHO2_WPU                  WPUCbits.WPUC1
#define ECHO2_OD                   ODCONCbits.ODCC1
#define ECHO2_ANS                  ANSELCbits.ANSELC1
#define ECHO2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ECHO2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ECHO2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ECHO2_GetValue()           PORTCbits.RC1
#define ECHO2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ECHO2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ECHO2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define ECHO2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define ECHO2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define ECHO2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define ECHO2_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define ECHO2_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set TRIG aliases
#define TRIG_TRIS                 TRISCbits.TRISC4
#define TRIG_LAT                  LATCbits.LATC4
#define TRIG_PORT                 PORTCbits.RC4
#define TRIG_WPU                  WPUCbits.WPUC4
#define TRIG_OD                   ODCONCbits.ODCC4
#define TRIG_ANS                  ANSELCbits.ANSELC4
#define TRIG_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define TRIG_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define TRIG_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define TRIG_GetValue()           PORTCbits.RC4
#define TRIG_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define TRIG_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define TRIG_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define TRIG_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define TRIG_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define TRIG_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define TRIG_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define TRIG_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set ECHO aliases
#define ECHO_TRIS                 TRISCbits.TRISC5
#define ECHO_LAT                  LATCbits.LATC5
#define ECHO_PORT                 PORTCbits.RC5
#define ECHO_WPU                  WPUCbits.WPUC5
#define ECHO_OD                   ODCONCbits.ODCC5
#define ECHO_ANS                  ANSELCbits.ANSELC5
#define ECHO_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define ECHO_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define ECHO_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define ECHO_GetValue()           PORTCbits.RC5
#define ECHO_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define ECHO_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define ECHO_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define ECHO_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define ECHO_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define ECHO_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define ECHO_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define ECHO_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF5 pin functionality
 * @Example
    IOCCF5_ISR();
 */
void IOCCF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF5_SetInterruptHandler() method.
    This handler is called every time the IOCCF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(IOCCF5_InterruptHandler);

*/
extern void (*IOCCF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF5_SetInterruptHandler() method.
    This handler is called every time the IOCCF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF5_SetInterruptHandler(IOCCF5_DefaultInterruptHandler);

*/
void IOCCF5_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/