/*
 * Ex7.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ADMIN
 */


#include <Ex8.h>
#include "main.h"

void setNumberOnClock(int num) {
	if (num >= 1 && num <= 12) HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 << (num - 1), GPIO_PIN_SET);
	else return;
}



