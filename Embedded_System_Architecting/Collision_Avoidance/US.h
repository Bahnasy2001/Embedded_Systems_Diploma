/*
 * US.h
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef US_H_
#define US_H_
#include "state.h"
//Define States
enum{
	US_busy
}US_state_id;

//State pointer to Function
extern void (*US_state)();
//declare states functions CA
STATE_define(US_busy);

void US_init();

#endif /* US_H_ */
