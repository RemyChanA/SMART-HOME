/*
 * LED.h
 *
 * Created: 5/16/2021 2:02:35 PM
 *  Author: ASAH2
 */ 


#ifndef LED_H_
#define LED_H_

/********************************Description :
                 file have a macros as a function to on , off and toggle led                                      
*******************************************/




#include "C:\Users\ASAH2\OneDrive\Desktop\AMIT Project\Asmaa Khaled + Toka Ashraf Project\GccApplication1\GccApplication1\MCAL\AVR_DIO_REG.h"
#include "C:\Users\ASAH2\OneDrive\Desktop\AMIT Project\Asmaa Khaled + Toka Ashraf Project\GccApplication1\GccApplication1\MCAL\DIO.h"
#include "C:\Users\ASAH2\OneDrive\Desktop\AMIT Project\Asmaa Khaled + Toka Ashraf Project\GccApplication1\GccApplication1\UTIL\util.h"




//LEDS NUMBER
#define LED0  7
#define LED1  6
#define LED2  5

//STATUES 
#define ON 1
#define OFF 0

//function to turn LED ON
void LED_ON( uint8_t  LED_NUM) ;
/*#define LED_ON(LED_NUM)   do \
                           {  \
						     DIO_INIT(DIO_DDRD,OUTPUT,(LED_NUM)); \
							 DIO_Wirte_Bin(DIO_PORTD,(LED_NUM),ON);\
						   }while(0);\*/


//function to turn LED OFF
#define LED_OFF(LED_NUM)   do \
                            {  \
	                   DIO_INIT(DIO_DDRD,OUTPUT,(LED_NUM)); \
	                  DIO_Wirte_Bin(DIO_PORTD,(LED_NUM),OFF);\
                          }while(0);\


//function to TOGGLE LED
void LED_TOGG(uint8_t LED_NUM) ;
/*#define LED_TOGG(LED_NUM)   do\
                            {\
                         	DIO_INIT(DIO_DDRD,OUTPUT,(LED_NUM)); \
	                        TOGG_BIT(DIO_PORTD,LED_NUM);\
                            }while(0);\*/







#endif /* LED_H_ */