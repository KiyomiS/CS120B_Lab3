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
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char level = 0x00;
	unsigned char tmp = 0x00;
	unsigned char tmp2 = 0x00;
    /* Insert your solution below */
    

	tmp = 0x00;
	level = 0;
	tmp2 = 0x00;

   while (1) {

	tmp2 = PINA & 0x0F;

	level = tmp2;

	if (level == 0){
		tmp = 0x00;
		tmp = tmp | 0x40;
	}
	
	else if (level <= 2){
		tmp = 0x00;
		tmp = tmp | 0x40;
		tmp = tmp | 0x20;	
	}
	
	else if (level <= 4){
		tmp = 0x00;
		tmp = tmp | 0x70;
	}

	else if(level <= 6){
		tmp = 0x00;
		tmp = tmp | 0x38;
	}
	
	else if (level <= 9){
		tmp = 0x00;
		tmp = tmp | 0x3C;
	}

	else if (level <= 12){
		tmp = 0x00;
		tmp = tmp | 0x3E;
	}
	else {
		tmp = 0x00;
		tmp = tmp | 0x3F;	
	}
	
	tmp2 = PINA & 0xF0;
	if (tmp2 == 0x30){
		tmp = tmp | 0x80;
	}
		
	PORTC = tmp;

    }
    return 0;

}
