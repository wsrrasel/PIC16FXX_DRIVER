/* 
 * File:   pic16fxx.h
 * Author: wsrra
 *
 * Created on August 8, 2024, 11:26 PM
 */

#ifndef PIC16FXX_H
#define	PIC16FXX_H

#ifdef	__cplusplus
extern "C" {
#endif



// PIC16F72 Configuration Bit Settings

// 'C' source line config statements
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bit (Code protection off)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>



    

#ifdef	__cplusplus
}
#endif

#endif	/* PIC16FXX_H */

