/*
 * button.h
 *
 * Created: 6/13/2023 10:35:08 PM
 *  Author: LENOVO
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/dio.h"

void button_init(uint8_t portNumber,uint8_t pinNumber);
void button_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value);



#endif /* BUTTON_H_ */