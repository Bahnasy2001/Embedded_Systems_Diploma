/*
 * FIFO.h
 *
 *  Created on: Sep 16, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef FIFO_H_
#define FIFO_H_
#include <stdio.h>
#include <stdint.h>
#define element_type  uint32_t
#define size           5

#define DPRINTF(...) {fflush(stdin);\
					fflush(stdout);\
					printf(__VA_ARGS__);\
					fflush(stdin);\
					fflush(stdout);}

typedef struct{
	element_type* base;
	element_type* head;
	element_type* tail;
	element_type length;
	element_type count;
}FIFO_buf_t;

typedef enum{
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_EMPTY,
	FIFO_NULL
}FIFO_Status;

FIFO_Status FIFO_init(FIFO_buf_t* fifo,element_type* buf,element_type length);
FIFO_Status FIFO_Enqueue(FIFO_buf_t* fifo,element_type item);
FIFO_Status FIFO_Dequeue(FIFO_buf_t* fifo,element_type* item);
FIFO_Status FIFO_is_full(FIFO_buf_t* fifo);
void FIFO_print(FIFO_buf_t* fifo);

#endif /* FIFO_H_ */
