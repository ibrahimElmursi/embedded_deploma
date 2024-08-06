/**
 * @name   : main.c
 * @date   : Aug 3, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_4 assignment programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

int main()
{
	/*sum_two_matrixes(); 	/*this is HW3_ex1*/
	/*find_avg();			/*this is HW3_ex2*/
	/*find_transpose();		/*this is HW3_ex3*/
	/*insert_array();		/*this is HW3_ex4*/
	/*search_array();		/*this is HW3_ex5*/
	/*search_char_freq();	/*this is HW3_ex6*/
	/*get_len();			/*this is HW3_ex7*/
	reverse_string();		/*this is HW3_ex8*/




	return 0;
}

/******************************** HW3_ex1 *******************************/
/**
 * @brief   : This function to find the sum of two matrixes  2*2.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  sum_two_matrixes();
 * @endcode
 */
int sum_two_matrixes(void)
{
	int i,j;
	float m1[2][2];
	printf("enter the elements of the first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&m1[i][j]);
		}
	}
	printf("enter the elements of the second matrix:\n");
	float temp;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&temp);
			m1[i][j]+=temp;
		}
	}
	printf("sum of matrixes is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t",m1[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/******************************** End HW3_ex1 ****************************/

/******************************** HW3_ex2 *******************************/
/**
 * @brief   : This function to find the avg of a specific n numbers .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  sum_two_matrixes();
 * @endcode
 */
int find_avg(void)
{
	int i,count;
	float m1[10],avg=0;
	renter_count:
	printf("enter the count of the data (note!! from 1:10 only):\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&count);
	if(!(count>=1 || count <=10))
	{
		printf("you entered invalid count!! \n");
		goto renter_count;
	}
	for(i=0;i<count;i++)
	{
		printf("enter number :");
		fflush(stdin); fflush(stdout);
		scanf("%f",&m1[i]);
		avg+=m1[i];
	}
	avg/=count;
	printf("the average is : %.2f",avg);
	return 0;
}

/******************************** End HW3_ex2 ****************************/

/******************************** HW3_ex3 *******************************/
/**
 * @brief   : This function used to find the transpose of 2*2 matrix
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  find_transpose();
 * @endcode
 */
int find_transpose(void)
{
	float matrix [2][2] ;
	float t_matrix [2][2];
	int i;
	int j;
	/* reading the matrix */
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the matrix element(%d,%d) :",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix[i][j]);
		}
	}
	/* printing the matrix */
	printf("the matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t",matrix[i][j]);
		}
		printf("\n");
	}
	/* transpose the matrix */
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			t_matrix[j][i]= matrix[i][j];
		}

	}
	/* printing the transposed matrix */
	printf("the  transposed matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t",t_matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/******************************** End HW3_ex3 ****************************/

/******************************** HW3_ex4 *******************************/
/**
 * @brief   : This function to insert an element to an array .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  insert_array();
 * @endcode
 */
int insert_array(void)
{
	int i,number,element,location,m1[10];
	renter_count:
	printf("enter the number of elements(between 1:9):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	if(!(number>=1 || number <=9))
	{
		printf("you entered invalid number!! \n");
		goto renter_count;
	}

	for(i=0;i<number;i++)
	{
		m1[i]=i+1;
		printf("%d ",m1[i]);
	}

	printf("\n enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	printf("enter the location (between 1:9) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	for(i=number;i>=0;i--)
	{
		if(i==location)
		{
			m1[i]=element;
			break;
		}
		m1[i]=m1[i-1];
	}
	for(i=0;i<number+1;i++)
	{
		printf("%d ",m1[i]);
	}

	return 0;
}

/******************************** End HW3_ex4 ****************************/

/******************************** HW3_ex5 *******************************/
/**
 * @brief   : This function to search an element in an array .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  search_array();
 * @endcode
 */
int search_array(void)
{
	int i,number,element,m1[10];
	renter_count:
	printf("enter the number of elements(between 1:9):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	if(!(number>=1 || number <=9))
	{
		printf("you entered invalid number!! \n");
		goto renter_count;
	}

	for(i=0;i<number;i++)
	{
		m1[i]=i+1;
		printf("%d ",m1[i]);
	}

	printf("\n enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	for(i=0;i<number;i++)
	{
		if(element==m1[i])
		{
			printf("the element to be searched exist at location :%d",i);
			break;
		}
		else if(i==number-1)
			printf("the element to be searched not exist");
	}

	return 0;
}

/******************************** End HW3_ex5 ****************************/


/******************************** HW3_ex6 *******************************/
/**
 * @brief   : This function to search the frequency of character in sentence .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  search_char_freq();
 * @endcode
 */
int search_char_freq(void)
{
	int i=0,count=0;
	char arr[100],ch;
	printf("enter the sentence(between 1:100 character):");
	fflush(stdin); fflush(stdout);
	gets(arr);

	printf("\n enter the character to fine the frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	while(i<sizeof(arr) && arr[i]!='\0')
	{
		if(arr[i]==ch)
			count++;
		i++;
	}

	printf("the frequency of %c is :%d",ch,count);


	return 0;
}

/******************************** End HW3_ex6 ****************************/

/******************************** HW3_ex7 *******************************/
/**
 * @brief   : This function to get the length of string .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  get_len();
 * @endcode
 */
int get_len(void)
{
	int i=0;
	char arr[100];
	printf("enter the sentence(between 1:100 character):");
	fflush(stdin); fflush(stdout);
	gets(arr);

	while(i<sizeof(arr) && arr[i]!='\0')
	{
		i++;
	}

	printf("the length of the string %s is :%d",arr,i);


	return 0;
}

/******************************** End HW3_ex7 ****************************/

/******************************** HW3_ex8 *******************************/
/**
 * @brief   : This function to reverse string .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  reeverse_string();
 * @endcode
 */
int reverse_string(void)
{
	int i=0;
	char arr[100],temp;
	printf("enter the sentence(between 1:100 character):");
	fflush(stdin); fflush(stdout);
	gets(arr);

	for(i=0;i<(int)strlen(arr)/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[strlen(arr)-1-i];
		arr[strlen(arr)-1-i]=temp;
	}

	printf("the reversed string is: %s",arr);


	return 0;
}

/******************************** End HW3_ex8 ****************************/
