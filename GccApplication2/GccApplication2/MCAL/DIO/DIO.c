/*
 * DIO.c
 *
 * Created: 5/16/2021 4:07:28 PM
 *  Author: ASAH2
 */ 

//include dio file . h
#include "DIO.h"

#include <stdint.h>


/******************
* Name : initialize DIO direction reg , 
*Parameter : 
			1- address of reg 
			2- state of direction
			3-bin number
*Description :
			can use it do select the direction of bins , can be input or output.
********************/
extern void DIO_INIT(uint8_t  DirAdd , uint8_t Dir , uint8_t Bin)
{
	
	//if direction is input : 
	if(Dir == INPUT)
	{
		//set as input
		SET_INPUT(DirAdd , Bin);
	}
	//if its output		
    else 
	{
		//set as output
	    SET_OUTPUT(DirAdd , Bin);	
	}	
	
}





/********************
*Name : DIO write function ,
*parameter :
		 1-address of port reg 
		 2-number of bin
		 3-the value we need to out it 
*Description :
			use it to write a value in DIO pins by using port reg.    
*******/
extern void DIO_Wirte_Bin(uint8_t  PortAdd , uint8_t Bin , uint8_t Value)
{
	//if value is = one 
	if (Value == 1)
	{
		//set bit , its mean sit by one
		SET_OUTPUT(PortAdd , Bin);
	}
	//if its zero 
	else
	{
		//clear bit , its mean clear to be zero
		CLEAR_BIT(PortAdd , Bin);
	}
}




/*********************
*Name :         DIO read function 
*parameter :
			1-address of pin reg
			2-number of bin
		    3-address of variable who we save value in it
*Description :
		    use it to read a value from pins reg.	  

*************/
extern void DIO_Read_Bin(uint8_t PinAdd , uint8_t Bin , uint8_t *Value)
{
	 
	 //to read analog data from 0 to ~ 255
	//*Value=(PinAdd&(1<<Bin));
	
	//or
	
	//to read digital data , can be 0 or 1
	*Value = (PinAdd&(1<<Bin))?1:0;
	
}