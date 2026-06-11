/*
 * blink.c
 *
 * Created: 6/8/2026 11:28:02 AM
 * Author : vrag
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB=0b00100000;    /*7654321=5th pin selected   [ ddr data direction register of B*/
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0b00100000;  /* 5th pin on [ pin of the B]*/
		_delay_ms(1000);
		PORTB=0b00000000;  /*5th pin off*/
		_delay_ms(1000);
    }
}

