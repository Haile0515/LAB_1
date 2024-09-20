/*
 * Ex10.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include "Ex10.h"

void setNumberOnClock(int num) {
	if (num >= 1 && num <= 12) HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 << (num - 1), GPIO_PIN_SET);
	else return;
}

void clearAllClock(){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, RESET);
}

//void clearAllClock();
void displayClock(int hour, int minute, int second) {
    clearAllClock();

    setNumberOnClock((hour % 12 == 0) ? 12 : hour % 12);

    setNumberOnClock((minute % 60 == 0) ? 12 : minute / 5);

    setNumberOnClock((second % 60 == 0) ? 12 : second / 5);
}

void updateTime(int *hour, int *minute, int *second) {
    HAL_Delay(1000);
    (*second) += 1;

    if (*second >= 60) {
        *second = 0;
        (*minute) += 1;
    }

    if (*minute >= 60) {
        *minute = 0;
        (*hour)++;
    }

    if (*hour >= 12) {
        *hour = 0;
    }
}

