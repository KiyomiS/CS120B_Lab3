/*	Author: ksugi006
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 3  Exercise 2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmp = 0x00;
	unsigned char tmp2 = 0x00;
    /* Insert your solution below */
    

   while (1) {
    	tmp = PINA & 0x0F;
	tmp = tmp << 4;
	PORTC = PORTC | tmp;

	tmp2 = PINA & 0xF0;
	tmp2  = tmp2 >> 4;
	PORTB = PORTB | tmp2;
   }
    return 1;
}
