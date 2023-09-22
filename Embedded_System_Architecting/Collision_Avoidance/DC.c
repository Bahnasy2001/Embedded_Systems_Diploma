/*
 * DC.c
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#include "DC.h"
//Variables
int DC_speed = 0;



void DC_init()
{
	//init PWM
	printf("DC_init \n");
}

void DC_motor(int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("CA --------- speed = %d ------>DC \n",DC_speed);

}
//State pointer to Function
void (*DC_state)();

STATE_define(DC_idle)
{
	//State Name
	DC_state_id = DC_idle;

}
STATE_define(DC_busy)
{
	//State Name
	DC_state_id = DC_busy;
	//State_Action
	//Call PWM to make Speed = DC_speed

	DC_state = STATE(DC_idle);

	printf("DC_busy State : Speed  =%d\n",DC_speed);
}


