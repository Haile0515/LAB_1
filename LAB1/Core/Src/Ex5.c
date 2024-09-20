/*
 * Ex5.c
 *
 *  Created on: Sep 12, 2024
 *      Author: ADMIN
 */

#include "Ex5.h"
#include "main.h"

// SEG_0 = a, SEG_1 = b, SEG_2 = c, SEG_3 = d, SEG_4 = e, SEG_5 = f, SEG_6 = g
void displaySeg7(int digit, int ledSet) {
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

    uint8_t pattern = segment_patterns[digit];

    if (ledSet == 0) {
        // SEG7 UP/DOWN (SEG_0 đến SEG_6)
        HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, (pattern >> 0) & 0x01);
        HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, (pattern >> 1) & 0x01);
        HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, (pattern >> 2) & 0x01);
        HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, (pattern >> 3) & 0x01);
        HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, (pattern >> 4) & 0x01);
        HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, (pattern >> 5) & 0x01);
        HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, (pattern >> 6) & 0x01);
    } else if (ledSet == 1) {
        // SEG7 LEFT/RIGHT (SEG_20 đến SEG_26)
        HAL_GPIO_WritePin(SEG_20_GPIO_Port, SEG_20_Pin, (pattern >> 0) & 0x01);
        HAL_GPIO_WritePin(SEG_21_GPIO_Port, SEG_21_Pin, (pattern >> 1) & 0x01);
        HAL_GPIO_WritePin(SEG_22_GPIO_Port, SEG_22_Pin, (pattern >> 2) & 0x01);
        HAL_GPIO_WritePin(SEG_23_GPIO_Port, SEG_23_Pin, (pattern >> 3) & 0x01);
        HAL_GPIO_WritePin(SEG_24_GPIO_Port, SEG_24_Pin, (pattern >> 4) & 0x01);
        HAL_GPIO_WritePin(SEG_25_GPIO_Port, SEG_25_Pin, (pattern >> 5) & 0x01);
        HAL_GPIO_WritePin(SEG_26_GPIO_Port, SEG_26_Pin, (pattern >> 6) & 0x01);
    }
}

void setTrafficLights(int state) {
    // RESET ALL
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_All, RESET);

    switch (state) {
        case 0:
            HAL_GPIO_WritePin(GPIOB, LED_12_Pin, GPIO_PIN_SET);  // Green Up
            HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_SET);   // Green Down
            HAL_GPIO_WritePin(GPIOB, LED_8_Pin, GPIO_PIN_SET);   // Red Left
            HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_SET);   // Red Right
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_SET);   // Yellow Up
            HAL_GPIO_WritePin(GPIOB, LED_7_Pin, GPIO_PIN_SET);   // Yellow Down
            HAL_GPIO_WritePin(GPIOB, LED_8_Pin, GPIO_PIN_SET);   // Red Left
            HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_SET);   // Red Right
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOB, LED_11_Pin, GPIO_PIN_SET);  // Red Up
            HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_SET);   // Red Down
            HAL_GPIO_WritePin(GPIOB, LED_9_Pin, GPIO_PIN_SET);   // Green Left
            HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_SET);   // Green Right
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOB, LED_11_Pin, GPIO_PIN_SET);  // Red Up
            HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_SET);   // Red Down
            HAL_GPIO_WritePin(GPIOB, LED_10_Pin, GPIO_PIN_SET);  // Yellow Left
            HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_SET);   // Yellow Right
            break;
    }
}

void Ex5() {
    int state = 0;
    int countUpDown, countLeftRight;

    while (1) {
        switch (state) {
            case 0:
            	countUpDown = 3;
            	countLeftRight = 5;
            	setTrafficLights(state);
                while (countUpDown > 0 && countLeftRight > 0) {
                    displaySeg7(countUpDown, 0);
                    displaySeg7(countLeftRight, 1);
                    HAL_Delay(1000);
                    countUpDown--;
                    countLeftRight--;
                }
                break;

            case 1:
            	countUpDown = 2;
            	countLeftRight = countLeftRight > 0 ? countLeftRight : 5;
            	setTrafficLights(state);
                while (countUpDown > 0 && countLeftRight > 0) {
                    displaySeg7(countUpDown, 0);
                    displaySeg7(countLeftRight, 1);
                    HAL_Delay(1000);
                    countUpDown--;
                    countLeftRight--;
                }
                break;

            case 2:
            	countUpDown = 5;
            	countLeftRight = 3;
                setTrafficLights(state);
                while (countUpDown > 0 && countLeftRight > 0) {
                    displaySeg7(countUpDown, 0);
                    displaySeg7(countLeftRight, 1);
                    HAL_Delay(1000);
                    countUpDown--;
                    countLeftRight--;
                }
                break;

            case 3:
            	countUpDown = countUpDown > 0 ? countUpDown : 5;
            	countLeftRight = 2;
            	setTrafficLights(state);
                while (countUpDown > 0 && countLeftRight > 0) {
                    displaySeg7(countUpDown, 0);
                    displaySeg7(countLeftRight, 1);
                    HAL_Delay(1000);
                    countUpDown--;
                    countLeftRight--;
                }
                break;
        }
        state = (state + 1) % 4;
    }
}
