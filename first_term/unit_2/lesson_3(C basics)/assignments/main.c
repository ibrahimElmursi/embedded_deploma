/**
 * @name   : main.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_3 assignment programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include "main.h"

int main()
{
//	print_sentence(); 			//this HW1_ex1
//	print_integers(); 			//this HW1_ex2
//	add_two_integers(); 		//this HW1_ex3
//	Mul_two_floats(); 			//this HW1_ex4
//	find_char_ascii();			//this HW1_ex5
//	swap_two_numbers(); 		//this HW1_ex6
//	swap_two_numbers_no_temp(); //this HW1_ex7
//	check_even_odd();			//this HW2_ex1
//	check_vowel_consonant();	//this HW2_ex2
//	max_num();					//this HW2_ex3
//	check_positive_negative();	//this HW2_ex4
//	check_is_alphabet();		//this HW2_ex5
//	sum_natural_numbers();		//this HW2_ex6
//	calc_fact();				//this HW2_ex7
	add_sub_div_mul();			//this HW2_ex8


	return 0;
}

/******************************** HW1_ex1 *******************************/
/**
 * @brief   : This function print a sentence in the console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  print_sentence();
 * @endcode
 */
int print_sentence(void)
{
	printf("C Programming");
	return 0;
}

/******************************** End HW1_ex1 ****************************/

/******************************** HW1_ex2 *******************************/
/**
 * @brief   : This function print the integers entered by
 * 			  the user in the console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  print_integers();
 * @endcode
 */
int print_integers(void)
{	int num=0;
printf("Enter a integer:");
fflush(stdin); fflush(stdout);
scanf("%d",&num);
printf("you entered: %d",num);
return 0;
}

/******************************** End HW1_ex2 ****************************/

/******************************** HW1_ex3 *******************************/
/**
 * @brief   : This function Add Two Integers and print the result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  add_two_integers();
 * @endcode
 */
int add_two_integers(void)
{
	int num1=0,num2=0;
	printf("Enter two integers:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("sum =%d",num1+num2);
	return 0;
}

/******************************** End HW1_ex3 ****************************/

/******************************** HW1_ex4 *******************************/
/**
 * @brief   : This function Multiply two Floating Point Numbers result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  Mul_two_floats();
 * @endcode
 */
int Mul_two_floats(void)
{
	float num1=0,num2=0;
	printf("Enter two floats:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	printf("product= %f",num1*num2);
	return 0;
}

/******************************** End HW1_ex4 ****************************/

/******************************** HW1_ex5 *******************************/
/**
 * @brief   : This function Find ASCII Value of a Character result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  find_char_ascii();
 * @endcode
 */
int find_char_ascii(void)
{
	char ch=0;
	printf("Enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c is %d",ch,ch);
	return 0;
}

/******************************** End HW1_ex5 ****************************/

/******************************** HW1_ex6 *******************************/
/**
 * @brief   : This function Swap Two Numbers result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  swap_two_numbers();
 * @endcode
 */
int swap_two_numbers(void)
{
	int num1=0,num2=0,temp=0;
	printf("Enter the first number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	printf("Enter the second number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("the first number is %d\n",num1);
	printf("the second number is %d",num2);
	return 0;
}


/******************************** End HW1_ex6 ****************************/

/******************************** HW1_ex7 *******************************/
/**
 * @brief   : This function Swap Two Numbers without temp result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @note    : in this function we use bitwise operators to swap bits
 * @code 	:
 * 			  swap_two_numbers_no_temp();
 * @endcode
 *
 */
int swap_two_numbers_no_temp(void)
{
	int num1=0,num2=0;
	printf("Enter the first number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	printf("Enter the second number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num2);

	unsigned char len=sizeof(num1)*8;
	for(char i=0;i<len;i++)
	{
		// here we check if the Corresponding bits are
		// not equals the toggle them
		if((num1 & (1<<i)) != (num2 & (1<<i)))
		{
			num1 ^= 1<<i;
			num2 ^= 1<<i;
		}
	}

	printf("the first number is %d\n",num1);
	printf("the second number is %d",num2);
	return 0;
}


/******************************** End HW1_ex7 ****************************/

/*************************************************************************/

/******************************** HW2_ex1 *******************************/
/**
 * @brief   : This function check the number is even or odd result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  check_even_odd();
 * @endcode
 *
 */
int check_even_odd(void)
{
	int num1=0;
	printf("Enter the number you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	if(num1%2==0)
		printf("the number %d is even\n",num1);
	else
		printf("the number %d is odd\n",num1);
	return 0;
}


/******************************** End HW2_ex1 ****************************/

/******************************** HW2_ex2 *******************************/
/**
 * @brief   : This function check the character is vowel or consonant result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  check_vowel_consonant();
 * @endcode
 *
 */
int check_vowel_consonant(void)
{
	char ch;
	printf("Enter the character you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("the character %c is vowel\n",ch);
	else
		printf("the character %c is consonant\n",ch);
	return 0;
}


/******************************** End HW2_ex2 ****************************/

/******************************** HW2_ex3 *******************************/
/**
 * @brief   : This function to calculate the largest number between
 * 				three numbers
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  max_num();
 * @endcode
 *
 */
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


/******************************** End HW2_ex3 ****************************/

/******************************** HW2_ex4 *******************************/
/**
 * @brief   : This function check the the number is +ve or -ve or zero result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  check_positive_negative();
 * @endcode
 *
 */
int check_positive_negative(void)
{
	int num;
	printf("Enter the number you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num==0)
		printf("the number is zero\n");
	else if(num>0)
		printf("the number %d is positive\n",num);
	else
		printf("the number %d is negative\n",num);
	return 0;
}


/******************************** End HW2_ex4 ****************************/

/******************************** HW2_ex5 *******************************/
/**
 * @brief   : This function check the character is alphabet or not result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  check_is_alphabet();
 * @endcode
 *
 */
int check_is_alphabet(void)
{
	char ch;
	printf("Enter the character you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='A'))
		printf("the character %c is alphabet\n",ch);
	else
		printf("the character %c is not alphabet\n",ch);
	return 0;
}


/******************************** End HW2_ex5 ****************************/


/******************************** HW2_ex6 *******************************/
/**
 * @brief   : This function sums the natural numbers to user entered number result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  sum_natural_numbers();
 * @endcode
 *
 */
int sum_natural_numbers(void)
{
	int num1=0,sum=0;
	printf("Enter the number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	for(int i=1;i<=num1;i++)
		sum+=i;
	printf("the sum of natural number to %d is %d",num1,sum);
	return 0;
}


/******************************** End HW2_ex6 ****************************/

/******************************** HW2_ex7 *******************************/
/**
 * @brief   : This function calculates the factorial of user entered number result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  calc_fact();
 * @endcode
 *
 */
int calc_fact(void)
{
	int num1=0,fact=1;
	printf("Enter the number :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	if(num1>0)
	{
		for(int i=1;i<=num1;i++)
			fact*=i;
		printf("the factorial of the number %d is %d",num1,fact);
	}
	else if(num1==0)
		printf("the factorial of the number %d is %d",num1,1);
	else
		printf("there is no factorial for the negative number!!");
	return 0;
}


/******************************** End HW2_ex7 ****************************/

/******************************** HW2_ex8 *******************************/
/**
 * @brief   : This function execute four mathematics operations on two operands result in console.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  add_sub_div_mul();
 * @endcode
 *
 */
int add_sub_div_mul(void)
{
	float num1=0,num2=0;
	char operation=0;
	printf("Enter the first number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	renter_num2:
	printf("Enter the second number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	renter_operation:
	printf("Enter '+' for addition  \n'-' for subtraction \n'/' for division \n'*' for multiplication:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operation);
	switch(operation)
	{
	case '+':
	{
		printf("the summation of %f + %f = %f",num1,num2,num1+num2);
	}
	break;
	case '-':
	{
		printf("the subtraction of %f - %f = %f",num1,num2,num1-num2);
	}
	break;
	case '/':
	{
		if(num2!=0)
			printf("the division of %f / %f = %f",num1,num2,num1/num2);
		else
		{
			printf("the division by zero is undefined!!\n");
			goto renter_num2;
		}

	}
	break;
	case '*':
	{
		printf("the product of %f * %f = %f",num1,num2,num1*num2);
	}
	break;
	default:
	{
		printf("you enter invalid operation\n");
		goto renter_operation;
	}
	}
	return 0;
}


/******************************** End HW2_ex8 ****************************/
