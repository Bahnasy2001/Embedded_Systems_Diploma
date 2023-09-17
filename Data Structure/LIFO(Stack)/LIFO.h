/*
 * LIFO.h
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdint.h>
#define element_type  uint32_t
#define size           5

#define DPRINTF(...) {fflush(stdin);\
					fflush(stdout);\
					printf(__VA_ARGS__);\
					fflush(stdin);\
					fflush(stdout);}
typedef struct
{
	element_type length;
	element_type count;
	element_type* base;
	element_type* head;
}LIFO_Buf_t;

typedef enum
{
	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_NULL
}LIFO_Status;

LIFO_Status LIFO_Init(LIFO_Buf_t* lifo_buf,element_type* buf,element_type length);
LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf,element_type item);//Push item to Stack
LIFO_Status LIFO_get_item(LIFO_Buf_t* lifo_buf,element_type* item); //Pop item from Stack

#endif /* LIFO_H_ */
