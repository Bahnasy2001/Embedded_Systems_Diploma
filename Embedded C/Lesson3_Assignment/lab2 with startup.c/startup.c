

//Startup.c
//Eng: Hassan Bahnasy

#include <stdint.h>

#define STACK_Start_SP 0x20001000
extern int main(void);
void Reset_Handler()
{
	main();
}
void NMI_Handler()
{
	Reset_Handler();
}
void H_Fault_Handler()
{
	Reset_Handler();
}
void MM_Fault_Handler()
{
	Reset_Handler();
}
void Bus_Fault()
{
	Reset_Handler();
}
void Usage_Fault_Handler()
{
	Reset_Handler();
}
uint32_t vectors[] __attribute__((section(".vectors")))  ={
	STACK_Start_SP,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_Handler
};