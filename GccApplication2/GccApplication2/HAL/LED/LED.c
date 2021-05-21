/*
 * LED.c
 *
 * Created: 5/16/2021 4:08:44 PM
 *  Author: ASAH2
 */ 
#include "LED.h"
#include <util/delay.h>
#define F_CPU 16000000UL
 /******************** 
 *Name : 
       Led Toggle 
 *input : 
         led number 
 *description : 
         function to toggle led 
********************/
void LED_TOGG(uint8_t LED_NUM)
{
	DIO_INIT(DIO_DDRD,OUTPUT,(LED_NUM));
	TOGG_BIT(DIO_PORTD,LED_NUM);
	_delay_ms(1000);
}

 /******************** 
 *Name : 
       Led on
 *input : 
         led number 
 *description : 
         function to turn led on 
********************/
void LED_ON(uint8_t  LED_NUM)
{
	DIO_INIT(DIO_DDRD,OUTPUT,(LED_NUM));
	DIO_Wirte_Bin(DIO_PORTD,(LED_NUM),ON);
}