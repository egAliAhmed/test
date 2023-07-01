/*
 * button.c
 *
 * Created: 6/13/2023 10:34:46 PM
 *  Author: LENOVO
 */ 


#include "button.h"

void button_init(uint8_t portNumber,uint8_t pinNumber)
{
	DIO_init(portNumber,pinNumber,IN);
}
void button_read(uint8_t portNumber,uint8_t pinNumber, uint8_t* value)
{
	DIO_read(portNumber,pinNumber,value);
}