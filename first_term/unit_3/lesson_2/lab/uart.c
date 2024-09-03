/**
 * @name   : uart.c
 * @date   : sept 3, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is UART driver for versatilePB platform
 */
#include "uart.h"
#define UART0DR *((volatile uint32_t*)(uint32_t)(0x101f1000))

void uart_send_string(uint8_t* str)
{
	while(*str !='\0')
	{
		UART0DR=(uint32_t) (*str);
		str++;
	}
}