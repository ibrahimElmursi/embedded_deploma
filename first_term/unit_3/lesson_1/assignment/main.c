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

int main(int argc, char const *argv[])
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &=0xff0fffff;
	GPIOA_CRH |=0xff2fffff;
	
	while(1)
	{
		GPIOA_ODR ^= 1<<13;
		for(int i=0;i<5000;i++);
	}

	return 0;
}