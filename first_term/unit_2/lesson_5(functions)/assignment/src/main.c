/**
 * @name   : main.c
 * @date   : Aug 6, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_5 assignment programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include  <string.h>
#include "..\header\main.h"

int main()
{	/* start of ex1
	int start, end;
	printf("enter two numbers(intervals):");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&start,&end);
	find_prime_numbers(start,end);
	/* end of ex1 */

	/* start of ex2
	int num;
	printf("enter an positive integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("factorial of %d is: %d",num,find_factorial(num));
	/* end of ex2 */

	/* start of ex3
	char str[100];
	printf("enter the sentence (max. 100 character): ");
	fflush(stdin); fflush(stdout);
	gets(str);
	reverse_sentence(str,strlen(str));
	/* end of ex3*/

	/* start of ex4*/
	int num,pwr;
	printf("enter the base number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("enter power number (positive integer):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pwr);
	printf("%d^%d=%d",num,pwr,find_power(num,pwr));
	/* end of ex4*/

	return 0;
}

/******************************** HW4_ex1 *******************************/
/**
 * @brief   : This function to find and print the prime numbers between two number.
 * @note	: the two numbers are included
 * @param   : this function takes two integer values (start,end) as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  find_prime_numbers(10,30);
 * @endcode
 */

int find_prime_numbers(int start,int end)
{
	int i;
	printf("prime numbers between %d and %d are:",start,end);
	for(;start<=end;start++)
	{
		for(i=start-1;i>1;i--)
		{
			if((start % i)==0)
				break;
			else
				if(i==2)
					printf(" %d",start);
		}
	}
	return 0;
}

/******************************** End HW4_ex1 ****************************/


/******************************** HW4_ex2 *******************************/
/**
 * @brief   : This function to find the factorial of a number using recursion.
 * @param   : this function takes an integer value as parameter.
 * @return  : this returns the factorial of the number.
 * @code
 * 			  find_factorial(10);
 * @endcode
 */

int find_factorial(int num)
{
	int fact;
	if(num>2)
		fact=num*find_factorial(num-1);
	else
		fact=num*1;

	return fact;
}

/******************************** End HW4_ex2 ****************************/

/******************************** HW4_ex3 *******************************/
/**
 * @brief   : This function to reverse a sentence using recursion.
 * @param   : this function takes a reference for array of characters an size
 * 				 as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  reverse_sentence(str,strlen(str));
 * @endcode
 */

int reverse_sentence(char str[],int size)
{
	if(size>0)
	{
		printf("%c",str[size-1]);
		reverse_sentence(str,size-1);
	}

	return 0;
}

/******************************** End HW4_ex3 ****************************/

/******************************** HW4_ex4 *******************************/
/**
 * @brief   : This function to find the power of a number using recursion.
 * @param   : this function takes an two integer value as parameter.
 * @return  : this returns the powered number.
 * @code
 * 			  find_power(3,3);
 * @endcode
 */

int find_power(int num,int pwr)
{
	if(pwr>1)
		num=num*find_power(num,pwr-1);
	else
		num=num*1;

	return num;
}

/******************************** End HW4_ex4 ****************************/

