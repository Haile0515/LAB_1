/*
 * Ex6.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ADMIN
 */

#include <Ex7.h>
#include "main.h"

void clearAllClock(){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, RESET);
}

