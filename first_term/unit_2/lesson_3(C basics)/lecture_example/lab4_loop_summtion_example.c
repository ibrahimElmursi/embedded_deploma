/**
 * @name   : lab3_min_num_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to calculate the summation of
 * 				the numbers from 1:99
 *
 */
#include <stdio.h>

int sum_1_99(void)
{
	int sum=0;
	for(char i=1;i<=99;i++)
		sum+=i;
	printf("the summation  of values (1:99) is : %d",sum);
	return 0;
}
