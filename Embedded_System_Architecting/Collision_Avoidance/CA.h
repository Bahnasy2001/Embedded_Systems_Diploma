/*
 * CA.h
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"
//Define States
enum{
	CA_waiting,
	CA_driving
}CA_state_id;

//State pointer to Function
extern void (*CA_state)();
//declare states functions CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

#endif /* CA_H_ */
