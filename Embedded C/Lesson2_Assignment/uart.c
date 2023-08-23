#include "uart.h"

//uart registers

#define UART0DR *((volatile unsigned int*const)((unsigned int *)0x101F1000))

void Uart_Send_String(unsigned char* P_tx_string)
{
	while(*P_tx_string != '\0')
	{
		/* Loop until end of string */
		UART0DR = (unsigned int)(*P_tx_string); /* Transmit char */
		P_tx_string++;
	}
}