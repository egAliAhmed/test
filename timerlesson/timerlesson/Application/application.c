/*
 * app.c
 *
 * Created: 6/13/2023 10:11:48 PM
 *  Author: LENOVO
 */ 

//global
//function body
#include "application.h"
#define Number_over_flows 782

void app_init()
{
	LED_init(PORT_A,0);
	// set timer normal mode
	TCCR0 = 0x00;
	// timer initial value
	TCNT0 = 0x00;
	// no proscalar
	
}
void app_start()
{
	
	LED_toggle(PORT_A,0);
	TCCR0 |= (1<<0);
	int overflowcounter = 0;
	while(overflowcounter < Number_over_flows)
	{	
	while((TIFR & (1<<0)) == 0 );
	TIFR |= (1<<0);

	overflowcounter++;
	}
	TCCR0 = 0x00;
}
void app_stop()
{

}