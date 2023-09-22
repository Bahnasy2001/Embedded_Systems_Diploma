/*
 * DC.h
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"
//Define States
enum{
	DC_idle,
	DC_busy
}DC_state_id;

//State pointer to Function
extern void (*DC_state)();
//declare states functions CA
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init();


#endif /* DC_H_ */
