/**
 * @name   : main.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all assignments programs which every
 * 				problem developed as a function
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
	swap_two_numbers_no_temp(); //this HW1_ex7
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
