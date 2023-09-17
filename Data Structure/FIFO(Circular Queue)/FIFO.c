/*
 * FIFO.c
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#include "FIFO.h"


FIFO_Status FIFO_init(FIFO_buf_t* fifo,element_type* buf,element_type length)
{
	if(!buf)
		return FIFO_NULL;
	fifo->base =buf;
	fifo->head =buf;
	fifo->tail =buf;
	fifo->length = length;
	fifo->count = 0;

	return FIFO_NO_ERROR;
}
FIFO_Status FIFO_Enqueue(FIFO_buf_t* fifo,element_type item)
{
	//Check Queue is exist or not
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;
	//Check Queue is Full
	if(FIFO_is_full(fifo)== FIFO_FULL)
		return FIFO_FULL;

	*(fifo->head) = item;
	fifo->count++;

	//Circular Queue
	if(fifo->head == fifo->base + (fifo->length * sizeof(element_type)))
		fifo->head = fifo->base;
	else
		fifo->head++;

	return FIFO_NO_ERROR;

}
FIFO_Status FIFO_Dequeue(FIFO_buf_t* fifo,element_type* item)
{
	//Check Queue is exist or not
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;
	//Check Queue is empty or not
	if(fifo->count == 0)
		return FIFO_EMPTY;
	*item = *(fifo->tail);
	fifo->count--;
	//Circular fifo
	if(fifo->tail == fifo->base + (fifo->length * sizeof(element_type)))
		fifo->tail = fifo->base;
	else
		fifo->tail++;
	return FIFO_NO_ERROR;
}
FIFO_Status FIFO_is_full(FIFO_buf_t* fifo)
{
	//Check Queue is exist or not
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL;
	if(fifo->count == fifo->length)
		return FIFO_FULL;
	return FIFO_NO_ERROR;
}
void FIFO_print(FIFO_buf_t* fifo)
{
	element_type* temp;
	int i;
	if(fifo->count == 0)
	{
		DPRINTF("FIFO IS EMPTY\n");
	}
	else
	{
		temp = fifo->tail;
		DPRINTF("\n =======FIFO_PRINT====\n");
		for (i = 0; i < fifo->count; ++i)
		{
		DPRINTF("\t %d \n",*temp);
		temp++;
		}
	}
}
