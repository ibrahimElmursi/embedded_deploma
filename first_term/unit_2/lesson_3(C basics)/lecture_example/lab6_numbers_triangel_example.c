/**
 * @name   : lab3_min_num_example.c
 * @date   : Aug 1, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to print the following pattern
 * 			0 1 2 3 4 5 6 7 8 9
 * 			1 2 3 4 5 6 7 8 9
 * 			2 3 4 5 6 7 8 9
 * 			3 4 5 6 7 8 9
 * 			4 5 6 7 8 9
 * 			5 6 7 8 9
 * 			7 8 9
 * 			8 9
 * 			9
 *
 */
#include <stdio.h>

int numbers_triangel(void)
{
	for(int i=0;i<10;i++)
	{
		for(int j=i ;j<10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

