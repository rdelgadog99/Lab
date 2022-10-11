/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RF0 aliases
#define IO_RF0_TRIS                 TRISFbits.TRISF0
#define IO_RF0_LAT                  LATFbits.LATF0
#define IO_RF0_PORT                 PORTFbits.RF0
#define IO_RF0_WPU                  WPUFbits.WPUF0
#define IO_RF0_OD                   ODCONFbits.ODCF0
#define IO_RF0_ANS                  ANSELFbits.ANSELF0
#define IO_RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define IO_RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define IO_RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define IO_RF0_GetValue()           PORTFbits.RF0
#define IO_RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define IO_RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define IO_RF0_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define IO_RF0_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define IO_RF0_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define IO_RF0_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define IO_RF0_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define IO_RF0_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)
   
// get/set RF1 aliases
#define IO_RF1_TRIS                 TRISFbits.TRISF1
#define IO_RF1_LAT                  LATFbits.LATF1
#define IO_RF1_PORT                 PORTFbits.RF1
#define IO_RF1_WPU                  WPUFbits.WPUF1
#define IO_RF1_OD                   ODCONFbits.ODCF1
#define IO_RF1_ANS                  ANSELFbits.ANSELF1
#define IO_RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define IO_RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define IO_RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define IO_RF1_GetValue()           PORTFbits.RF1
#define IO_RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define IO_RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define IO_RF1_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define IO_RF1_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define IO_RF1_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define IO_RF1_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define IO_RF1_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define IO_RF1_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)
   
// get/set RF2 aliases
#define IO_RF2_TRIS                 TRISFbits.TRISF2
#define IO_RF2_LAT                  LATFbits.LATF2
#define IO_RF2_PORT                 PORTFbits.RF2
#define IO_RF2_WPU                  WPUFbits.WPUF2
#define IO_RF2_OD                   ODCONFbits.ODCF2
#define IO_RF2_ANS                  ANSELFbits.ANSELF2
#define IO_RF2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define IO_RF2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define IO_RF2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define IO_RF2_GetValue()           PORTFbits.RF2
#define IO_RF2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define IO_RF2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define IO_RF2_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define IO_RF2_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define IO_RF2_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define IO_RF2_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define IO_RF2_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define IO_RF2_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)
   
// get/set RF3 aliases
#define IO_RF3_TRIS                 TRISFbits.TRISF3
#define IO_RF3_LAT                  LATFbits.LATF3
#define IO_RF3_PORT                 PORTFbits.RF3
#define IO_RF3_WPU                  WPUFbits.WPUF3
#define IO_RF3_OD                   ODCONFbits.ODCF3
#define IO_RF3_ANS                  ANSELFbits.ANSELF3
#define IO_RF3_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define IO_RF3_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define IO_RF3_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define IO_RF3_GetValue()           PORTFbits.RF3
#define IO_RF3_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define IO_RF3_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define IO_RF3_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define IO_RF3_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define IO_RF3_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define IO_RF3_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define IO_RF3_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define IO_RF3_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)
   
// get/set RF4 aliases
#define IO_RF4_TRIS                 TRISFbits.TRISF4
#define IO_RF4_LAT                  LATFbits.LATF4
#define IO_RF4_PORT                 PORTFbits.RF4
#define IO_RF4_WPU                  WPUFbits.WPUF4
#define IO_RF4_OD                   ODCONFbits.ODCF4
#define IO_RF4_ANS                  ANSELFbits.ANSELF4
#define IO_RF4_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define IO_RF4_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define IO_RF4_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define IO_RF4_GetValue()           PORTFbits.RF4
#define IO_RF4_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define IO_RF4_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define IO_RF4_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define IO_RF4_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define IO_RF4_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define IO_RF4_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define IO_RF4_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define IO_RF4_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)
   
// get/set RF5 aliases
#define IO_RF5_TRIS                 TRISFbits.TRISF5
#define IO_RF5_LAT                  LATFbits.LATF5
#define IO_RF5_PORT                 PORTFbits.RF5
#define IO_RF5_WPU                  WPUFbits.WPUF5
#define IO_RF5_OD                   ODCONFbits.ODCF5
#define IO_RF5_ANS                  ANSELFbits.ANSELF5
#define IO_RF5_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define IO_RF5_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define IO_RF5_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define IO_RF5_GetValue()           PORTFbits.RF5
#define IO_RF5_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define IO_RF5_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define IO_RF5_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define IO_RF5_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define IO_RF5_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define IO_RF5_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define IO_RF5_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define IO_RF5_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)
   
// get/set RF6 aliases
#define IO_RF6_TRIS                 TRISFbits.TRISF6
#define IO_RF6_LAT                  LATFbits.LATF6
#define IO_RF6_PORT                 PORTFbits.RF6
#define IO_RF6_WPU                  WPUFbits.WPUF6
#define IO_RF6_OD                   ODCONFbits.ODCF6
#define IO_RF6_ANS                  ANSELFbits.ANSELF6
#define IO_RF6_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define IO_RF6_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define IO_RF6_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define IO_RF6_GetValue()           PORTFbits.RF6
#define IO_RF6_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define IO_RF6_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define IO_RF6_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define IO_RF6_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define IO_RF6_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define IO_RF6_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define IO_RF6_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define IO_RF6_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)
   
// get/set RF7 aliases
#define IO_RF7_TRIS                 TRISFbits.TRISF7
#define IO_RF7_LAT                  LATFbits.LATF7
#define IO_RF7_PORT                 PORTFbits.RF7
#define IO_RF7_WPU                  WPUFbits.WPUF7
#define IO_RF7_OD                   ODCONFbits.ODCF7
#define IO_RF7_ANS                  ANSELFbits.ANSELF7
#define IO_RF7_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define IO_RF7_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define IO_RF7_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define IO_RF7_GetValue()           PORTFbits.RF7
#define IO_RF7_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define IO_RF7_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define IO_RF7_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define IO_RF7_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define IO_RF7_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define IO_RF7_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define IO_RF7_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define IO_RF7_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/