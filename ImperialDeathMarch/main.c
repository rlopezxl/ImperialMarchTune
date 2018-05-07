/*
 * ImperialDeathMarch.c
 *
 * Created: 6/15/2017 9:29:12 PM
 * Author : Ruben Lopez
 * https://www.rlopezxl.com
 */ 

#define F_CPU 1200000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "SoundLib.h"

#define	BUZZER_PIN	PB0


int main(void)
{
	/* setup */
	DDRB |= _BV(BUZZER_PIN);
	init_sound();


	/* loop */
	while (1) {
		tone(4, 4); // E
		_delay_ms(QUARTER);
		stop_sound();
		tone(4, 4); // E
		_delay_ms(QUARTER);
		stop_sound();
		tone(4, 4); // E
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(QUARTER);
		
		stop_sound();
		_delay_ms(QUARTER + EIGHTH);
		
		tone(4, 11); // B
		_delay_ms(QUARTER);
		stop_sound();
		tone(4, 11); // B
		_delay_ms(QUARTER);
		stop_sound();
		tone(4, 11); // B
		_delay_ms(QUARTER);
		stop_sound();
		tone(5, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 3); // D#
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(QUARTER);
		
		stop_sound();
		_delay_ms(QUARTER + EIGHTH);
		
		tone(5, 4); // E
		_delay_ms(QUARTER);
		tone(4, 4); // E
		_delay_ms(SIXTEENTH + EIGHTH);
		stop_sound();
		tone(4, 4); // E
		_delay_ms(SIXTEENTH);
		tone(5, 4); // E
		_delay_ms(QUARTER);
		tone(5, 3); // D#
		_delay_ms(EIGHTH);
		tone(5, 2); // D
		_delay_ms(EIGHTH);
		tone(5, 0); // C
		_delay_ms(SIXTEENTH);
		tone(5, 11); // B
		_delay_ms(SIXTEENTH);
		tone(5, 0); // C
		_delay_ms(EIGHTH);
		stop_sound();
		_delay_ms(EIGHTH);
		tone(4, 4); // E
		_delay_ms(EIGHTH);
		tone(4, 9); // A
		_delay_ms(QUARTER);
		tone(4, 8); // G#
		_delay_ms(EIGHTH);
		tone(4, 7); // G
		_delay_ms(EIGHTH);
		tone(4, 5); // F
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(SIXTEENTH);
		tone(4, 5); // F
		_delay_ms(EIGHTH);
		stop_sound();
		_delay_ms(EIGHTH);
		tone(4, 0); // C
		_delay_ms(EIGHTH);
		tone(4, 3); // D#
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 11); // B
		_delay_ms(QUARTER);
		
		stop_sound();
		_delay_ms(QUARTER + EIGHTH);
		
		tone(5, 4); // E
		_delay_ms(QUARTER);
		tone(4, 4); // E
		_delay_ms(SIXTEENTH + EIGHTH);
		stop_sound();
		tone(4, 4); // E
		_delay_ms(SIXTEENTH);
		tone(5, 4); // E
		_delay_ms(QUARTER);
		tone(5, 3); // D#
		_delay_ms(EIGHTH);
		tone(5, 2); // D
		_delay_ms(EIGHTH);
		tone(5, 0); // C
		_delay_ms(SIXTEENTH);
		tone(5, 11); // B
		_delay_ms(SIXTEENTH);
		tone(5, 0); // C
		_delay_ms(EIGHTH);
		stop_sound();
		_delay_ms(EIGHTH);
		tone(4, 4); // E
		_delay_ms(EIGHTH);
		tone(4, 9); // A
		_delay_ms(QUARTER);
		tone(4, 8); // G#
		_delay_ms(EIGHTH);
		tone(4, 7); // G
		_delay_ms(EIGHTH);
		tone(4, 5); // F
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(SIXTEENTH);
		tone(4, 5); // F
		_delay_ms(EIGHTH);
		stop_sound();
		_delay_ms(EIGHTH);
		tone(4, 0); // C
		_delay_ms(EIGHTH);
		tone(4, 3); // D#
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E
		_delay_ms(QUARTER);
		tone(4, 0); // C
		_delay_ms(SIXTEENTH + EIGHTH);
		tone(4, 7); // G
		_delay_ms(SIXTEENTH);
		tone(4, 4); // E 
		_delay_ms(QUARTER);
		
		stop_sound();
		_delay_ms(WHOLE);
		
	}

}

