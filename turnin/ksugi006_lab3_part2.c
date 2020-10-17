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
	unsigned char i = 0x00;
    /* Insert your solution below */
    

	tmp = 0x00;
	level = 0x00;

   while (1) {
	if((PINA & 0x01) == 0x01){
		level = level  + 1;
	}
        if((PINA & 0x02) == 0x02){
                level = level  + 2;
	}
	if((PINA & 0x04) == 0x04){
		level = level + 4;
	}
	if((PINA & 0x08) == 0x08) {
		level = level + 8;
	}

	if (level == 0){
		tmp = 0x00;
		tmp = tmp | 0x40;
	}
	if (level == 1 || level == 2){
		tmp = 0x00;
		tmp = tmp | 0x40;
		tmp = tmp | 0x20;	
	}
	if (level == 3 || level == 4){
		tmp = 0x00;
		tmp = tmp | 0x40;
		tmp = tmp | 0x20;
		tmp = tmp | 0x10;
	}
	if ((level == 5) || (level == 6)){
		tmp = 0x00;
		tmp = tmp | 0x20;
		tmp = tmp | 0x10;
		tmp = tmp | 0x08;
	}
	if (level == 7 || level == 8 || level == 9){
		tmp = 0x00;
		tmp = tmp | 0x20;
		tmp = tmp | 0x10;
		tmp = tmp | 0x08;
		tmp = tmp | 0x04;
	}
	if (level == 10 || level == 11 || level == 12){
		tmp = 0x00;
		tmp = tmp | 0x20;
		tmp = tmp | 0x10;
		tmp = tmp | 0x08;
		tmp = tmp | 0x04;	
		tmp = tmp | 0x02;
	}
	if (level == 13 || level == 14 || level == 15) {
		tmp = 0x00;
		tmp = tmp | 0x20;
		tmp = tmp | 0x10;
		tmp = tmp | 0x08;
		tmp = tmp | 0x04;
		tmp = tmp | 0x02;
		tmp = tmp | 0x01;	
	}
		
	PORTC = tmp;

    }
    return 1;
}
