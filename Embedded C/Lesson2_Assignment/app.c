#include <uart.h>
unsigned char string_buffer[100] = "learn-in-depth:<hassan>";
void main(void)
{
	//VersatilePB physical Board
	Uart_Send_String(string_buffer);
}