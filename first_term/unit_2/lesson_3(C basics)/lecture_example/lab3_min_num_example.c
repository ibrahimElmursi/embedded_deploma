/**
 * @name   : lab3_min_num_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to calculate the minimum number between
 * 				two numbers
 *
 */

#include <stdio.h>

int min_num(void)
{
	int num1,num2,min_num;
	printf("enter the two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	min_num=num1>num2?num2:num1;
	printf("the minimum number is:%d",min_num);
	return 0;
}
