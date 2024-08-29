/**
 * @name   : main.c
 * @date   : Aug 26, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to toggel a led on stm32f1103c microcontroller
 * 			lecture_1 assignment 
 *
 */
#include <stdio.h>
#include <stdint.h>
#include "main.h"

volatile R_ODR_t * R_ODR=(volatile R_ODR_t*)(PORTA_BASE+0x0c);
int main(int argc, char const *argv[])
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0xff2fffff;
	int i;
	while(1)
	{
		//GPIOA_ODR ^= 1<<13;
		R_ODR->pin.pin_13=1;
		for(i=0;i<5000;i++);
		R_ODR->pin.pin_13=0;
		for(i=0;i<5000;i++);
	}

	return 0;
}