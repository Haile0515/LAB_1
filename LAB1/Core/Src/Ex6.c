/*
 * Ex6.c
 *
 *  Created on: Sep 18, 2024
 *      Author: ADMIN
 */

#include "Ex6.h"
#include "main.h"

void Ex6() {
    uint16_t segment[12] = {LED_1_Pin, LED_2_Pin, LED_3_Pin, LED_4_Pin, LED_5_Pin, LED_6_Pin, LED_7_Pin, LED_8_Pin, LED_9_Pin, LED_10_Pin, LED_11_Pin, LED_12_Pin};

    for (int i = 0; i < 12; i++) {
        HAL_GPIO_WritePin(GPIOB, segment[i], GPIO_PIN_SET);

        HAL_Delay(1000);

        HAL_GPIO_WritePin(GPIOB, segment[i], GPIO_PIN_RESET);
    }
}
