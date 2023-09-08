#include <stdint.h>
typedef volatile unsigned int vuint32_t;

//Register Address
#define RCC_BASE    0x40021000
#define PORTA_BASE  0x40010800
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE+0x18)
#define GPIO_CRH    *(volatile uint32_t *)(PORTA_BASE+0x04)
#define GPIO_ODR    *(volatile uint32_t *)(PORTA_BASE+0x0C)

#define RCC_IOPAEN (1<<2)
#define GPIO13     (1UL<<13)

typedef union {
	vuint32_t all_fields;
	struct 
	{
		vuint32_t  reserved:13;
		vuint32_t  pin13:1;
	}pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t* )(PORTA_BASE+0x0C);

int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIO_CRH &= 0xFF0FFFFF;
	GPIO_CRH |= 0x00200000;
	while(1)
	{
		int i;
		R_ODR->pin.pin13 = 1;
		for (i = 0; i < 5000; ++i)
		{
			
		}
		R_ODR->pin.pin13 = 0;
		for (i = 0; i < 5000; ++i)
		{

		}
	}
	return 0;
}