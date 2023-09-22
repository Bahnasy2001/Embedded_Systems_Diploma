/*
 * state.h
 *
 *  Created on: Sep 18, 2023
 *      Author: Hassan Bahnasy
 */

#ifndef STATE_H_
#define STATE_H_

//Automatic State Function generated

#define STATE_define(_statFUN) void ST_##_statFUN()
#define STATE(_statFUN) ST_##_statFUN

#include <stdio.h>
#include <stdlib.h>

//States Connection
void US_Set_distance(int d);
void DC_motor(int s);
#endif /* STATE_H_ */
