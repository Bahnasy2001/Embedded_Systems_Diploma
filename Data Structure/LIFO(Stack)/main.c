/*
 * main.c
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#include "LIFO.h"
//static allocation in data memory
element_type buffer1[size];

int main(void)
{
	int i,temp=0;
	LIFO_Buf_t uart_lifo;
	LIFO_Init(&uart_lifo,buffer1,size);
	for (i = 0; i < uart_lifo.length; ++i)
	{
		if(LIFO_Add_item(&uart_lifo,i)== LIFO_NO_ERROR)
		{
			DPRINTF("UART LIFO add : %d\n\n",i);
		}
	}
	DPRINTF("==========POP_items===========\n\n");
	for (i = 0; i < uart_lifo.length; ++i)
	{
		if(LIFO_get_item(&uart_lifo,&temp)== LIFO_NO_ERROR)
		{
			DPRINTF("UART LIFO get : %d\n\n",i)
		}
	}
	//Dynamic allocation in heap
	element_type* buffer2= (element_type*)malloc(size * sizeof(element_type));
	LIFO_Buf_t I2C_lifo;
	LIFO_Init(&I2C_lifo,buffer2,size);
	for (i = 0; i < I2C_lifo.length; ++i)
	{
		if(LIFO_Add_item(&I2C_lifo,i)== LIFO_NO_ERROR)
		{
			DPRINTF("I2C LIFO add : %d\n\n",i);
		}
	}
	DPRINTF("==========POP_items===========\n\n");
	for (i = 0; i < I2C_lifo.length; ++i)
	{
		if(LIFO_get_item(&I2C_lifo,&temp)== LIFO_NO_ERROR)
		{
			DPRINTF("I2C LIFO get : %d\n\n",i)
		}
	}

	return 0;

}
