/*
 * uart.c
 *
 * Created: 5/18/2021 11:48:04 AM
 *  Author: ASAH2
 */ 

#define F_CPU 16000000UL
#include <inttypes.h>
#include <avr/io.h>
#include "uart.h"

void UART_Init(unsigned long  BaudRate)
{
	unsigned long long value;
	unsigned long long Baud_Divider = 16*(unsigned long long)BaudRate ;
	value =  (F_CPU/Baud_Divider) -1;
	UBRRH = (unsigned char)((value)>>8);
	UBRRL = (unsigned char)value;
	UCSRB=(1<<RXEN)|(1<<TXEN);
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	
}

void UART_send_byte( char byte)
{
	while(!(UCSRA &(1<<UDRE))); // while shift register flag != 1 (not empty))
	UDR=byte;

}

void UART_send_string(char *ptr)
{
	int i=0;

	while(ptr[i] != '\0')
	{
		UART_send_byte(ptr[i]);
		i++;
	}
	UART_send_byte(ptr[i]);
}

char  UART_recieve_byte(void)
{
	while((UCSRA & (1<<RXC)) ==0);
	return UDR ;
}
void  UART_recieve_string(char * ptr)
{
	int i=0;
	ptr[i]=UART_recieve_byte();
	while(ptr[i] !='\0')
	{
		i++;
		ptr[i]=UART_recieve_byte();

	}
	ptr[i]='\0';


}
