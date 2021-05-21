/*
 * act.c
 *
 * Created: 5/16/2021 4:09:59 PM
 *  Author: ASAH2
 */ 
#include "act.h"
/************
*Name :
       recieve act 
*input :
        null
*description :
        function to recieve order from mcu 1 
***********************/
void recieve_act ()
{
	int data ; 
	spiSlaveInit();
	data = spiRcieve();
	do_act(data);
}

/************
*Name :
       do act 
*input :
        null
*description :
        function to do action from mcu 1 
***********************/
void do_act (int data)
{
	if(data==1)
	LED_ON(3);
	
	else if (data ==2)
	LED_ON(2);	
}