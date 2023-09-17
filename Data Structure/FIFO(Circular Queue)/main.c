/*
 * main.c
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */
#include "FIFO.h"

element_type uart_buffer[size];

int main()
{
	element_type temp=0, i;
	FIFO_buf_t FIFO_UART;
	if (FIFO_init(&FIFO_UART,uart_buffer,size) == FIFO_NO_ERROR )
	{
		DPRINTF("fifo_init is done\n");

	}

	for(i=0;i<7;i++)
	{
		DPRINTF("FIFO Enqueue (%d) \ n",i);
		if (FIFO_Enqueue(& FIFO_UART,i) == FIFO_NO_ERROR )
		{
			DPRINTF("\t fifo_enqueue.... is done\n");
		}
		else
		{
			DPRINTF("\t fifo_enqueue.... failed\n");
		}
	}

	FIFO_print(&FIFO_UART);//Print FIFO before Dequeue
	if(FIFO_Dequeue(& FIFO_UART,&temp) == FIFO_NO_ERROR )//First time
	{
		DPRINTF("\t fifo_dequeue %d .... is done\n",temp);
	}
	else
	{
		DPRINTF("\t fifo_dequeue.... failed\n");}

	if(FIFO_Dequeue(& FIFO_UART,&temp) == FIFO_NO_ERROR ) // First time
	{
		DPRINTF("\t fifo_dequeue %d .... is done\n",temp);
	}
	else
	{
		DPRINTF("\t fifo_dequeue.... failed\n");
	}
	FIFO_print(&FIFO_UART);//Print FIFO after Dequeue
}
