/*
 * AVR_DIO_REG.h
 *
 * Created: 5/16/2021 2:21:19 PM
 *  Author: ASAH2
 */ 


#ifndef AVR_DIO_REG_H_
#define AVR_DIO_REG_H_

/*************Description:Add of AVR Registers*****************/





/*******PORT A REG:*********/
//DIRECTION
#define DIO_DDRA  (*((volatile unsigned char *)(0X3A)))

//DATA OUTPUT
#define DIO_PORTA (*((volatile unsigned char *)(0X3B)))

//DATA INPUT
#define DIO_PINA (*((volatile unsigned char *)(0X39)))

/*******PORT B REG:********/
//DIRECTION
#define DIO_DDRB  (*((volatile unsigned char *)(0X37)))

//DATA OUTPUT
#define DIO_PORTB  (*((volatile unsigned char *)(0X38)))

//DATA INOUT
#define DIO_PINB  (*((volatile unsigned char *)(0X36)))

/*******PORT C REG:*********/
//DIRECTION
#define DIO_DDRC  (*((volatile unsigned char *)(0X34)))

//DATA OUTPUT
#define DIO_PORTC (*((volatile unsigned char *)(0X35)))

//DATA INOUT
#define DIO_PINC  (*((volatile unsigned char *)(0X33)))

/*****PORT D REG********/
//DIRECTION
#define DIO_DDRD   (*((volatile unsigned char *)(0X31)))

//DATA OUTPUT
#define DIO_PORTD (*((volatile unsigned char *)(0X32)))

//DATA INPUT
#define DIO_PIND  (*((volatile unsigned char *)(0X30)))






#endif /* AVR_DIO_REG_H_ */