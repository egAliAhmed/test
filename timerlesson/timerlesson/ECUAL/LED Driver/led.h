/*
 * led.h
 *
 * Created: 6/13/2023 9:16:34 PM
 *  Author: LENOVO
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"
//Macros
//typedefs
//functions
void LED_init(uint8_t ledPort , uint8_t ledPin);
void LED_on(uint8_t ledPort,uint8_t ledPin);
void LED_off(uint8_t ledPort,uint8_t ledPin);
void LED_toggle(uint8_t ledPort,uint8_t ledPin);

#endif /* LED_H_ */