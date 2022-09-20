PROCESSOR   18F45K50
#include    <xc.inc>
#include    "configuration_bits.inc"
#include    "delays.inc"

PSECT udata_acs
COUNT: DS 1
; DECLARE HERE YOUR VARIABLES WITH FORMAT: "VAR_NAME: DS 1"

PSECT	resetVec, class=CODE, reloc=2

PSECT	absdata, abs, ovrld
absdata:
    org	    0x1000

resetVec:
    goto    MAIN

PSECT code
MAIN:
    ; CLOCK CONFIGURATION
    BANKSEL OSCCON	;ACCESS TO OSCCON REGISTER 
    MOVLW   0x5E	   ;4MHZ FREQUENCY OF INTERNAL OSCILLATOR
    MOVWF   OSCCON,1	;LOAD DATA THROUGH BSR

    ; GPIO CONFIGURATION
    CLRF    TRISD,0   ;CONFIGURE PORT B AS OUTPUT
    SETF    LATD,0    ;TURN OFF LEDS CONNECTED TO PORT B

;EJERCICIO 1
;LEDS:
;    CLRF    LATD,0
;    CALL    delay_200ms
;    SETF    LATD,0
;    CALL    delay_200ms
;    GOTO    LEDS

    
;EJERCICIO 2
KNIGHT:
    MOVLW   6
    MOVWF   COUNT,0
    MOVLW   01111111B
    MOVWF   LATD,0
    CALL    delay_50ms
LOOP_1:
    RRNCF   LATD
    CALL    delay_50ms
    DECFSZ  COUNT,1,0
    GOTO    LOOP_1

    MOVLW   6
    MOVWF   COUNT,0
    MOVLW   11111110B
    MOVWF   LATD,0
    CALL    delay_50ms
LOOP_2:
    RLNCF   LATD
    CALL    delay_50ms
    DECFSZ  COUNT,1,0
    GOTO    LOOP_2

GOTO    KNIGHT

    
;EJERCICIO 3
;MUSTANG:
;    MOVLW	11111111B
;    MOVWF	LATD,0
;    CALL	delay_200ms
;    MOVLW	11100111B
;    MOVWF	LATD,0
;    CALL	delay_200ms
;    MOVLW	11000011B
;    MOVWF	LATD,0
;    CALL	delay_200ms
;    MOVLW	10000001B
;    MOVWF	LATD,0
;    CALL	delay_200ms
;    MOVLW	00000000B
;    MOVWF	LATD,0
;    CALL	delay_200ms
;GOTO	MUSTANG
    
END resetVec