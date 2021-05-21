/*
 * stmcu.c
 *
 * Created: 5/16/2021 3:33:34 PM
 *  Author: ASAH2
 */ 

#include "stmcu.h"


/***********
*name : 
       send order 
*input :
       null
*description:
       function to send data using spi
***********************/

void send_order()
{
	uint8_t order = read_Bluetooth ();
	spiMasterInit();
	spiTransmit(order);
}
