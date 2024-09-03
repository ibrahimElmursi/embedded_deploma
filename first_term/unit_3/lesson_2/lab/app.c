/**
 * @name   : app.c
 * @date   : sept 3, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to Print string 
 * 			“learn-in-depth:ibrahim” on versatilePB platform
 * 			using UART protocal 
 */
#include "uart.h"
uint8_t str[] ="learn-in-depth:ibrahim";
const uint8_t str1[] ="learn-in-depth:ibrahim";
void main(void)
{
	uart_send_string(str);
}