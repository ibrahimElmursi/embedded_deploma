
 /**
 * @name   : main.c
 * @date   : Aug 3, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_4 labs programs
 * 				which every lab developed as a separate function
 *
 */


#include <stdio.h>
#include "main.h"

int main()
{
/*	store_students_degrees(); 	// this is lab1  */
	find_transpose();			/* this is lab2 */
	return 0;
}

/******************************** lab1 *******************************/
/**
 * @brief   : This function used to store 10 student degrees in array then print them
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  store_students_degrees();
 * @endcode
 */
int store_students_degrees(void)
{
	float student_degrees [10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter the student %d degree :",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&student_degrees[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("student %d degree is :%.2f\n",i,student_degrees[i]);
	}
	return 0;
}

/******************************** End lab1 ****************************/

/******************************** lab2 *******************************/
/**
 * @brief   : This function used to find the transpose of 3*3 matrix
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  find_transpose();
 * @endcode
 */
int find_transpose(void)
{
	float matrix [3][3] ;
	float t_matrix [3][3];
	int i;
	int j;
	/* reading the matrix */
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the matrix element(%d,%d) :",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&matrix[i][j]);
		}
	}
	/* printing the matrix */
	printf("the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%f\t",matrix[i][j]);
		}
		printf("\n");
	}
	/* transpose the matrix */
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t_matrix[j][i]= matrix[i][j];
		}

	}
	/* printing the transposed matrix */
		printf("the  transposed matrix is:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%f\t",t_matrix[i][j]);
			}
			printf("\n");
		}
	return 0;
}

/******************************** End lab2 ****************************/
