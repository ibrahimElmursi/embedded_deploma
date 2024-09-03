/**
 * @name   : main.h
 * @date   : Aug 26, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to toggel a led on stm32f1103c microcontroller
 * 			lecture_1 assignment 
 *
 */
#include <stdint.h>
#ifndef MAIN_H_
#define MAIN_H_

#define RCC_BASE 		0x40021000
#define PORTA_BASE 		0x40010800
#define RCC_APB2ENR 	*(volatile int*)(RCC_BASE+0x18)
#define GPIOA_CRH 		*(volatile int*)(PORTA_BASE+0x04)
#define GPIOA_ODR 		*(volatile int*)(PORTA_BASE+0x0c)
/*typedef union {
	vuint32_t all_fields;
	struct
	{
		vuint32_t reserved :13;
		vuint32_t pin_13:1;
	}pin;

}R_ODR_t;*/

#endif