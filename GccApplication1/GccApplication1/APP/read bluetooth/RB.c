/*
 * SH.c
 *
 * Created: 5/16/2021 2:03:26 PM
 *  Author: ASAH2
 */ 
#include "RB.h"
/***************
*name :
       read bluetooth 
*input :
       null
*output : 
       data from bluetooth module 
*description :
       function to read from bluetooth module 
******************/

unsigned int  read_Bluetooth ()
{
	uint8_t  data;
	/*should read from UART*/
	UART_Init(9600);   /*enter baude rate*/
	data = UART_recieve_byte();   
	
	/*DIO_INIT(DIO_DDRD,INPUT,0);
	DIO_Read_Bin(DIO_PIND,0,data);*/
    
	return data;

}