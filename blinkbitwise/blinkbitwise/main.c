/*
 * blinkbitwise.c
 *
 * Created: 6/8/2026 1:49:52 PM
 * Author : vrag
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB|=(1<<PB5);
		PORTB|=(1<<PB4);
		_delay_ms(5000);
		PORTB&=~(1<<PB5); //PORTB=~(1<<PB5) & PORTB;//
		PORTB &=~(1<<PB4);
		_delay_ms(5000);
		PORTB|=(1<<PB5);
		PORTB&=~(1<<PB4);
		_delay_ms(5000);
		PORTB&=~(1<<PB5); //PORTB=~(1<<PB5) & PORTB;//
		PORTB &=~(1<<PB4);
		_delay_ms(5000);
		PORTB|=(1<<PB4);
		PORTB&=~(1<<PB5);
		_delay_ms(5000);
		PORTB&=~(1<<PB5);
		PORTB &=~(1<<PB4);
		_delay_ms(5000);
		
		
    }
}

