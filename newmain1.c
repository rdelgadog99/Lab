////+++++++++++++++++++++++++++++++++++++| LIBRARIES / HEADERS |+++++++++++++++++++++++++++++++++++++
//#include "device_config.h"
#include "mcc_generated_files/system/system.h"
#include <stdint.h>
#include <math.h>

//+++++++++++++++++++++++++++++++++++++| DIRECTIVES |+++++++++++++++++++++++++++++++++++++
#define _XTAL_FREQ 8000000
#define SWEEP_STEP 5

//+++++++++++++++++++++++++++++++++++++| DATA TYPES |+++++++++++++++++++++++++++++++++++++
enum por_ACDC {digital, analog};          // digital = 0, analog = 1
uint8_t new_numero;
uint32_t actual = 0x10101010;
////+++++++++++++++++++++++++++++++++++++| ISRs |+++++++++++++++++++++++++++++++++++++
//// ISR for high priority
//void __interrupt ( high_priority ) high_isr( void );
//// ISR for low priority
//void __interrupt ( low_priority ) low_isr( void ); 

//+++++++++++++++++++++++++++++++++++++| FUNCTION DECLARATIONS |+++++++++++++++++++++++++++++++++++++
void portsInit(void);
uint8_t char_to_seg(uint8_t);
void send_to_disp(uint32_t);
void key_scanner(void);

//+++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++
void main(void){
    portsInit();
    while(1){
        while((~PORTB & 0x0F)!= 0){
            key_scanner();
            actual = actual << 8;
            actual = actual + new_numero;
            __delay_ms(500);
        }
        send_to_disp(actual);
    }
}

//+++++++++++++++++++++++++++++++++++++| FUNCTIONS |+++++++++++++++++++++++++++++++++++++
void portsInit(void){
    //Configuración del Key-Pad
    ANSELB = digital;   // Set port B as Digital for 7 segment cathode selection (only 4 pins used)  
    TRISB  = 0x0F;      // For Port B, set pins as outputs for cathode selection
    WPUB = 0x0F;
    INTCON2bits.RBPU = 0;
   
    ANSELA = digital;   // Set port A as Digital for keypad driving
    TRISA  = 0x00; 
    // For Port A, set pins 4 to 7 as outputs (rows), and pins 0 to 3 as inputs (cols)
    
    ANSELD = digital;   // Set port D as Digital for, 7 segment anodes
    TRISD  = 0x00;      // for Port D, set all pins as outputs for 7 segment anodes
    OSCCON = 0b01110100;// Set the internal oscillator to 8MHz and stable
    
    
}

void send_to_disp(uint32_t disp_word){
    for (char i = 0; i < 4; i++){
        int internal_sweep = (int) pow(2, i);
        int sweep = 0x0F & ~internal_sweep;
        LATA = (char) sweep;
        uint8_t num_disp = 0x000000FF & (disp_word >> i*8);
        LATD = char_to_seg(num_disp);
        __delay_ms(SWEEP_STEP);
    }
}

uint8_t char_to_seg(uint8_t num){
    uint8_t segments;
    switch(num){
        case 0:  segments = 0b00111111; break;
        case 1:  segments = 0b00000110; break;
        case 2:  segments = 0b01011011; break;
        case 3:  segments = 0b01001111; break;
        case 4:  segments = 0b01100110; break;
        case 5:  segments = 0b01101101; break;
        case 6:  segments = 0b01111101; break;
        case 7:  segments = 0b00000111; break;
        case 8:  segments = 0b01111111; break;
        case 9:  segments = 0b01100111; break;
        case 10: segments = 0b01110111; break;
        case 11: segments = 0b01111100; break;
        case 12: segments = 0b01011000; break;
        case 13: segments = 0b01011110; break;
        case 14: segments = 0b01111001; break;
        case 15: segments = 0b01110001; break;
        default: segments = 0b00000000; break;
    }
    return segments;
}

void key_scanner (){
    LATB = 0x70;
    switch (PORTB){
        case 0x7E: new_numero = 15; break;
        case 0x7D: new_numero = 0; break;
        case 0x7B: new_numero = 14; break;
        case 0x77: new_numero = 13; break;
    }
    
    LATB = 0xB0;
    switch (PORTB){
        case 0xBE: new_numero = 7; break;
        case 0xBD: new_numero = 8; break;
        case 0xBB: new_numero = 9; break;
        case 0xB7: new_numero = 12; break;
    }
    LATB = 0xD0;
    switch (PORTB){
        case 0xDE: new_numero = 4; break;
        case 0xDD: new_numero = 5; break;
        case 0xDB: new_numero = 6; break;
        case 0xD7: new_numero = 11; break;
    }
    LATB = 0xE0;
    switch (PORTB){
        case 0xEE: new_numero = 1; break;
        case 0xED: new_numero = 2; break;
        case 0xEB: new_numero = 3; break;
        case 0xE7: new_numero = 10; break;
    }
    
    LATB = 0x00;
   
}