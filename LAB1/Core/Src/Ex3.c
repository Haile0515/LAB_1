/*
 * Ex3.c
 *
 *  Created on: Sep 12, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include "Ex3.h"

void Ex3(){
	while(1){
		//den do tren duoi sang 3s, den xanh trai phai sang 3s
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		HAL_Delay(3000);

		//den do tren duoi sang 2s, den vang trai phai sang 2s
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		HAL_Delay(2000);

		//den xanh tren duoi sang 3s, den do trai phai sang 2s
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		HAL_Delay(3000);

		//den vang tren duoi sang 2s, den do trai phai sang 2s
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		HAL_Delay(2000);
	}
}

