 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"
 //#include "mcc_generated_files/mcc.h"
#include <stdint.h>
#include <math.h>

#define SWEEP_FREQ 1000

uint8_t char_to_seg(uint8_t);
void    send_to_disp(uint32_t);

/*
    Main application
*/
      void main(void) {
    // Initialize the device
    SYSTEM_Initialize();
   
    while (1){
        uint32_t num = 0x0A0B0C0D;
        send_to_disp(num);
       // uint8_t num_disp = 0x000000FF & (disp_word >> i*8);
    }
}
void send_to_disp(uint32_t disp_word){
    for (char i = 0; i < 4; i++){
        int internal_sweep = (int) pow(2, i);
        int sweep = 0x0F & ~internal_sweep;
        LATC = (char) sweep;
        uint8_t num_disp = 0x000000FF & (disp_word >> i*8);
        LATB = char_to_seg(num_disp);
        __delay_ms(SWEEP_FREQ);
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
        default: segments = 0b01110001; break;
    }
    return segments;
    
}

void key_scanner(){
    uint8_t scanOutput;
    
    while(1)
	//Row 1 Scan
	{
	RF0 = 0;
	if(RF4 == 0){
	scanOutput = 0x00;
	delay();}
	if(RF5 == 0){
	scanOutput = 0x01;
	delay();}
	if(RF6 == 0){
	scanOutput = 0x02;
	delay();}
	if(RF7 == 0){
	scanOutput= 0x03;
	delay();}
    }
	//Row 2 Scan
	{
	RF1 = 0;
	if(RF4 == 0){
	scanOutput = 0x04;
	delay();}
	if(RF5 == 0){
	scanOutput = 0x05;
	delay();}
	if(RF6 == 0){
	scanOutput = 0x06;
	delay();}
	if(RF7 == 0){
	scanOutput = 0x07;
	delay();}
    }
	//Row 3 Scan
	{
	RF3 = 0;
	if(RF4 == 0){
	scanOutput = 0x08;
	delay();}
	if(RF5 == 0){
	scanOutput = 0x09;
	delay();}
	if(RF6 == 0){
	scanOutput = 0x0A;
	delay();}
	if(RF7 == 0){
	scanOutput = 0x0B;
	delay();}
    }
    
	//Row 4 Scan
	{
	RF4 = 0;
	if(RF4 == 0){
	scanOutput = 0x0C;
	delay();}
	if(RF5 == 0){
	scanOutput = 0x0D;
	delay();}
	if(RF6 == 0){
	scanOutput = 0x0E;
	delay();}
	if(RF7 == 0){
	scanOutput = 0x0F;
	delay();}
	

	}
    
    return scanOutput;
}