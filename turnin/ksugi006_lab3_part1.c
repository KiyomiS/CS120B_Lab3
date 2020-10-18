/*	Author: ksugi006
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
	DDRB = 0x00; PORTB = 0XFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char count = 0x00;
	unsigned char tmp = 0x00;
	while (1) {
		tmp = PINA & 0x01;
		if (tmp == 0x01){
			count = count + 1;
		}
		tmp = PINA & 0x02;
		if (tmp == 0x02){
			count = count + 1;
		}
		tmp = PINA & 0x04;		
                if (tmp == 0x04){
                        count = count + 1;
                }
		tmp = PINA & 0x08;
                if (tmp == 0x08){
                        count = count + 1;
                }
		tmp = PINA & 0x10;
                if (tmp == 0x10){
                        count = count + 1;
                }
		tmp = PINA & 0x20;
                if (tmp== 0x20){
                        count = count + 1;
                }
		tmp = PINA & 0x40;
                if (tmp == 0x40){
                        count = count + 1;
                }
		tmp = PINA & 0x80;
                if (tmp == 0x80){
                        count = count + 1;
                }
                if ((PINB & 0x01) == 0x01){
                        count = count + 1;
                }
                if ((PINB & 0x02) == 0x02){
                        count = count + 1;
                }
                if ((PINB & 0x04) == 0x04){
                        count = count + 1;
                }
                if ((PINB & 0x08) == 0x08){                                                                                                                                                                                                                          count = count + 1;                                                                                                                                                                                                                   }
                if ((PINB & 0x10) == 0x10){
                        count = count + 1;
                }
                if ((PINB & 0x20) == 0x20){                                                                                                                                                                                                                          count = count + 1;                                                                                                                                                                                                                   }
                if ((PINB & 0x40) == 0x40){
                        count = count + 1;
                }
                if ((PINB & 0x80) == 0x80){                                                                                                                                                                                                                          count = count + 1;                                                                                                                                                                                                                   }
                   
	PORTC = count;

	}
    /* Insert your solution below */

    return 1;
}
