/*
 * spi.c
 *
 * Created: 5/16/2021 4:08:16 PM
 *  Author: ASAH2
 */ 

#include "spi.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
/*********** 
*Name : 
        spi master init 
*input :
         null 
*description :
        initialize  spi as master 
***************/
void spiMasterInit()
{
	DDRB|=(1<<4)|(1<<5)|(1<<7);
	SPCR|=(1<<MSTR)|(1<<SPE);
}

/*********** 
*Name : 
        spi slave init 
*input :
         null 
*description :
        initialize  spi as slave 
***************/
void spiSlaveInit()
{
	DDRB|=(1<<6);
	SPCR|=(1<<SPE);
}


/*********** 
*Name : 
        spi transmit 
*input :
         data 
*description :
        spi transmitter  
***************/
void spiTransmit(unsigned char data)
{
	SPDR = data;
	PORTB&=~(1<<4);
	while(!(SPSR&(1<<SPIF)));
	PORTB|=(1<<4);
}

/*********** 
*Name : 
        spi reciever
*input :
         null 
*description :
        spi reciever
***************/
unsigned char spiRcieve()
{
	while(!(SPSR&(1<<SPIF)));
	return SPDR;
}
