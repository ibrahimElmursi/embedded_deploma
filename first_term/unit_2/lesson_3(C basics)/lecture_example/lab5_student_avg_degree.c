/**
 * @name   : lab3_min_num_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to calculate the avg. degree
 * 			of a number of a student
 *
 */

#include <stdio.h>

int student_avg(void)
{
	int student_num=0 ,degree=0,sum=0;
	printf("enter the number of students:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&student_num);
	for(int i=0;i<student_num;i++)
	{
		printf("enter students%d degree:",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&degree);
		sum+=degree;
	}
	printf("the avg degree of the students is:%i",sum/(student_num>0?student_num:-1));
	return 0;
}
