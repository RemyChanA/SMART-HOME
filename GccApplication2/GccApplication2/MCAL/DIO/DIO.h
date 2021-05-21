/*
 * DIO.h
 *
 * Created: 5/16/2021 4:07:37 PM
 *  Author: ASAH2
 */ 


#ifndef DIO_H_
#define DIO_H_

/*********************Description:
          Prototypes and macros to initialize  input and output Device in 
				 **************************/  





/****
********Includes******
***********************/
#include "C:\Users\ASAH2\OneDrive\Desktop\AMIT Project\Asmaa Khaled + Toka Ashraf Project\GccApplication2\GccApplication2\UTIL\UTIL.h"
#include <inttypes.h>



/*********
******Macros******
***********************/
//clear bit to use it as input 
#define SET_INPUT(ADD , BIN)  CLEAR_BIT(ADD,BIN)

//set bit to use as output
#define SET_OUTPUT(ADD ,BIN)  SET_BIT(ADD,BIN)

//statues :
#define INPUT 1
#define OUTPUT 0

/**********
******Prototypes*****
********************/

/*******************
*Name : initialize DIO direction reg , 
*Parameter : 
			1- address of reg 
			2- state of direction
			3-bin number
*Description :
			can use it do select the direction of bins , can be input or output.
********************/

extern void DIO_INIT(uint8_t  DirAdd , uint8_t Dir, uint8_t Bin);


/******************** 
*Name : DIO write function ,
*parameter :
			1-address of port reg 
			2-number of bin
			3-the value we need to out it 
*Description :
			use it to write a value in dio pins by using port reg.    
*******/
extern void DIO_Wirte_Bin(uint8_t  PortAdd , uint8_t Bin , uint8_t Value);


/*********************
*Name : DIO read function ,
*parameter :
			1-address of pin reg
		    2-number of bin
			3-address of variable who we save value in it
*Description :
			use it to read a value from pins reg.	  

*************/
extern void DIO_Read_Bin(uint8_t  PinAdd , uint8_t Bin ,uint8_t *Value);







#endif /* DIO_H_ */