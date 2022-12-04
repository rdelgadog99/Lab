#include "config_bits.h"
#include <stdint.h>
#include <stdio.h>
#include <pic18f57q43.h>
#include <string.h>
#define _XTAL_FREQ 1000000

void __interrupt(irq(AD)) ADC_ISR(void){
    U1FIFObits.TXBE = 1;
    uint8_t var = ADRESH;
    float str = var*0.0129;
    char arr[8];
    sprintf(arr, "  %f", str);
    for(int i=0; i<8; i++){
        U1CON0bits.TXEN = 1;
        U1TXB = arr[i];
        __delay_ms(50);
        U1CON0bits.TXEN = 0;
    }
    ADIF = 0;
}

void main(){
//----------------------------------------------------------------------------//
// I/O PORTS CONFIGURATION
//----------------------------------------------------------------------------//
// ADC INPUT FROM ANALOG TEMPERATURE SENSOR
    TRISAbits.TRISA0 = 1;
    ANSELAbits.ANSELA0 = 1;

// OUTPUT OF ADC 751

// UART TX AND TX PORTS
    
//----------------------------------------------------------------------------//
// ADC CONFIGURATION
//----------------------------------------------------------------------------//
// CHANNEL SELECTION
    ADPCH = 000000;

// ADC VOLTAGE REFERENCE SELECTION
    ADREFbits.NREF = 0;
    ADREFbits.PREF = 00;

// ADC CONVERSION CLOCK SOURCE
    ADCON0bits.CS = 0;

// INTERRUPT CONTROL
    PIE1bits.ADIE = 1;

// RESULT FORMATING 721
    ADCON0bits.FM = 0;

// CONVERSION TRIGGER SELECTION
    ADCON0bits.CONT = 1;

// TURN ON ADC MODULE
    ADCON0bits.ON = 1;

// START ADC CONVERSION
    ADCON0bits.GO = 1;

//----------------------------------------------------------------------------//
// UART CONFIGURATION
//----------------------------------------------------------------------------//
// PIN MAPPING
    TRISFbits.TRISF0 = 0;
    ANSELFbits.ANSELF0 = 0;
    RF0PPS = 0x20;

// TRANSMITTER ENABLING
    U1CON0bits.MODE = 0000;
    U1CON1bits.ON = 1;
    U1CON0bits.U1BRGS = 1;
    U1BRG = 25;

//----------------------------------------------------------------------------//
// INTERRUPTS CONFIGURATION
//----------------------------------------------------------------------------//
// GLOBAL INTERRUPTS CONFIGURATION
    INTCON0bits.GIEH = 1;
    INTCON0bits.GIEL = 1;
    INTCON0bits.IPEN = 1;
    

while(1){

}

}