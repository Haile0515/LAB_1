/*
 * Ex4.c
 *
 *  Created on: Sep 12, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include "Ex4.h"

//SEG_0 = a, SEG_1 = b, SEG_2 = c, SEG_3 = d, SEG_4 = e, SEG_5 = f, SEG_6 = g
uint8_t segment_patterns[10] = {
    0b01000000,  // 0
    0b01111001,  // 1
    0b00100100,  // 2
    0b00110000,  // 3
    0b00011001,  // 4
    0b00010010,  // 5
    0b00000010,  // 6
    0b01111000,  // 7
    0b00000000,  // 8
    0b00010000   // 9
};

void DisplayDigit(uint8_t pattern) {
    HAL_GPIO_WritePin(GPIOA, SEG_A_PIN, (pattern & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_B_PIN, (pattern & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_C_PIN, (pattern & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_D_PIN, (pattern & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_E_PIN, (pattern & 0x10) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_F_PIN, (pattern & 0x20) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, SEG_G_PIN, (pattern & 0x40) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void Ex4(void) {
    int counter = 0;

    while (1) {
        if (counter >= 10) counter = 0;
        DisplayDigit(segment_patterns[counter]);
        counter++;
        HAL_Delay(1000);
    }
}
