

#include <stdint.h>
typedef volatile unsigned int vuint32_t;
#include <stdlib.h>
//register address
#define RCC_BASE    0x40021000
#define GPIOA_BASE  0x40010800

#define RCC_APB2ENR *(volatile uint32_t*)(RCC_BASE + 0x18)
#define GPIOA_CHR   *(volatile uint32_t*)(GPIOA_BASE + 0x04)
#define GPIOA_ODR   *(volatile uint32_t*)(GPIOA_BASE + 0x0C)

//bit field
#define RCC_IOPAEN  (1<<2)
#define GPIOA13     (1UL<<13)

typedef union {
		vuint32_t all_fields;
		struct 
		{
			vuint32_t  reserved:13;
			vuint32_t  P_13:1;
		} pin;
}R_ODR_t;

void* _sbrk(int increment){
	extern unsigned int _E_bss;
	static unsigned char heap_ptr;
	unsigned char prev_heap_ptr;
	extern unsigned int _heap_end;
	
	if(heap_ptr ==(void*) NULL){
		heap_ptr = (unsigned char*)&_E_bss; 
	}
	prev_heap_ptr = heap_ptr;
	if(heap_ptr + increment > (unsigned char*)&_heap_end){
		return (void*) NULL;
	}
	heap_ptr+=increment;
	return (void*)prev_heap_ptr;
} 

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);
void main(void)
{
	int* ptr;
	ptr= (int*)calloc(4,4);

	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CHR &= 0xFF0FFFFF;
	GPIOA_CHR |= 0x00200000;
	
	while(1)
	{
		int i;
		R_ODR->pin.P_13 = 1;
		for ( i = 0;  i < 5000; ++i)
		{

		}
		R_ODR->pin.P_13 = 0;
		for ( i = 0;  i < 5000; ++i)
		{
			
		}
	}
	free(ptr);
}
