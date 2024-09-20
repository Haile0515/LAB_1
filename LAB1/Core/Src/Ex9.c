/*
 * Ex9.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ADMIN
 */


#include "main.h"
#include "Ex9.h"

void clearNumberOnClock(int num){
	if (num >= 1 && num <= 12) HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 << (num - 1), GPIO_PIN_RESET);
	else return;
}
