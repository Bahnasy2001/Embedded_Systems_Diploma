/*
 * main.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#include "CA.h"
#include "US.h"
#include "DC.h"
void setup()
{
	//init all the drivers
	//init IRQ -----------
	//init HAL US_Driver DC_Driver
	//init BLOCK
	US_init();
	DC_init();
	//Set Pointer For Each Block
	CA_state = STATE(CA_driving);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);

}

void main()
{
	volatile int d;
	setup();
	while(1)
	{
		//Call Pointer For Each Block
		US_state();
		CA_state();
		DC_state();
		for (d = 0; d < 1000; ++d) {

		}
	}
}
