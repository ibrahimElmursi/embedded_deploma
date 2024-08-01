/**
 * @name   : lab1_circle_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to calculate the area and circumference
 * 			 by enter its radius
 *
 */

#include <stdio.h>
#define pi 3.14
int main()
{
	char choise;
	float radius;
	s1:
	printf("enter the radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&radius);
	printf("enter a for area or c for circumference: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&choise);
	if(choise =='a')
		printf("the area is : %.2f\n",pi*radius*radius);
	else if(choise =='c')
			printf("the circumference is : %2f\n",pi*radius*2);
	else
	{
		printf("invalid choice\n");
		goto s1;
	}
	return 0;
}

