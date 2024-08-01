/**
 * @name   : lab1_max_num_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to calculate the largest number between
 * 				three numbers
 *
 */

#include <stdio.h>

int max_num(void)
{
	int num1,num2,num3;
	printf("enter the three numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
		if(num1>num3)
			printf("the largest number is :%d",num1);
		else
			printf("the largest number is :%d",num3);
	else
		if(num2>num3)
			printf("the largest number is :%d",num2);
		else
			printf("the largest number is :%d",num3);
	return 0;
}
