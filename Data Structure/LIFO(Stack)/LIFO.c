/*
 * LIFO.c
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#include "LIFO.h"

LIFO_Status LIFO_Init(LIFO_Buf_t* lifo_buf,element_type* buf,element_type length)
{
	if(buf == NULL)
		return LIFO_NULL;
	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;

	return LIFO_NO_ERROR;
}
/*ADD item to top of stack*/

LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf,element_type item)
{
	//Check lifo is exist or not
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_NULL;
	//Check lifo is full
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_FULL;

	//add item
	*(lifo_buf->head) = item;
	(lifo_buf->head)++;
	(lifo_buf->count)++;

	return LIFO_NO_ERROR;
}

LIFO_Status LIFO_get_item(LIFO_Buf_t* lifo_buf,element_type* item)
{
	//Check lifo is exist or not
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_NULL;
	//Check lifo is empty
	if(lifo_buf->count == 0)
		return LIFO_EMPTY;

	(lifo_buf->head)--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;

	return LIFO_NO_ERROR;
}
