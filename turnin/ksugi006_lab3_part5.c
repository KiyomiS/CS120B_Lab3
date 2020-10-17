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
	DDRD = 0x00; PORTD = 0xFF;
	DDRA = 0xFE; PORTA = 0x00;

	unsigned char weight = 0x00;
    /* Insert your solution below */
    

   while (1) {
    	weight = PIND;
	weight = weight << 1;

	if((PINA & 0x01) == 0x01) {
		weight = weight + 1;
	}
	
   if(weight > 5){
	if (weight >= 70){
		PORTA = PORTA | 0x02;
	}
	else{
		PORTA = PORTA | 0x04;
	}
   }
   }
    return 1;
}
