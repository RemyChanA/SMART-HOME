/*
 * uart.h
 *
 * Created: 5/18/2021 11:48:20 AM
 *  Author: ASAH2
 */ 


#ifndef UART_H_
#define UART_H_
#include <inttypes.h>
#include <avr/io.h>

void UART_Init(unsigned long BaudRate);
void UART_send_byte(char byte);
void UART_send_string( char *ptr);
char  UART_recieve_byte(void);
void  UART_recieve_string(char * ptr);




#endif /* UART_H_ */