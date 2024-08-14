/**
 * @name   : main.c
 * @date   : Aug 3, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all midterm_exam_1 programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include "mid_term_functions.h"

int main()
{
    // sum_num_digits();
    // find_sqr();
    // int start, end;
    // printf("enter two numbers(intervals):");
    // fflush(stdin);
    // fflush(stdout);
    // scanf("%d %d", &start, &end);
    // find_prime_numbers(start, end);
    // reverse_num_digits();
    // count_ones();
    // int a[7] = {4, 2, 5, 2, 5, 7, 4};
    // find_Unique_number(a, 7);
    // int b[3] = {4, 2, 4};
    // find_Unique_number(b, 3);
    // printf("the sum is :%d",sum_1_to_n(100));
    // reverse_array();
    // reverse_string();
    max_Ones_Between_Zeros(14);
    max_Ones_Between_Zeros(110);

    return 0;
}

/******************************** start mid1_exam_proplem_1 *******************************/
/**
 * @brief   : This function to find the sum of all digits in a nmuber.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  sum_num_digits();
 * @endcode
 */
int sum_num_digits(void)
{
    float num;
    printf("enter the number:");
    fflush(stdout);
    scanf("%f", &num);
    int i = num;
    int digit_num = 0;
    int sum = 0;
    while (i != 0)
    {
        i = i / 10;
        digit_num++;
    }
    for (i = 0; i < digit_num; i++)
    {
        num = num / 10;
        sum += (num - (int)num) * 10;
    }
    printf("the sum is :%d", sum);
    return 0;
}
/******************************** End exam_proplem_1  ****************************/

/******************************** start mid1_exam_proplem_2 *******************************/
/**
 * @brief   : This function to find the square root of a nmuber.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  find_sqr();
 * @endcode
 */
int find_sqr(void)
{
    double num, res;
    printf("enter the number:");
    fflush(stdout);
    scanf("%lf", &num);
    res = sqrt(num);
    printf("the sqr is :%lf", res);
    return 0;
}
/******************************** End exam_proplem_2  ****************************/

/******************************** start mid1_exam_proplem_3 *******************************/
/**
 * @brief   : This function to find and print the prime numbers between two number.
 * @note	: the two numbers are included
 * @param   : this function takes two integer values (start,end) as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  find_prime_numbers(10,30);
 * @endcode
 */

int find_prime_numbers(int start, int end)
{
    int i;
    printf("prime numbers between %d and %d are:", start, end);
    for (; start <= end; start++)
    {
        if (start != 1 && start != 2)
            for (i = 2; i < start; i++)
            {
                if ((start % i) == 0)
                    break;
                else if (i == start - 1)
                    printf(" %d", start);
            }
        else
            printf(" %d", start);
    }
    return 0;
}

/******************************** End start mid1_exam_proplem_3 ****************************/

/******************************** start mid1_exam_proplem_4 *******************************/
/**
 * @brief   : This function to reverse digits in a nmuber.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  reverse_num_digits();
 * @endcode
 */
int reverse_num_digits(void)
{
    int num;
    printf("enter the number:");
    fflush(stdout);
    scanf("%d", &num);
    int i;
    int new_num = 0;
    while (num != 0)
    {
        for (i = 0; i <= 9; i++)
        {
            if ((num - i) % 10 == 0)
            {
                new_num = new_num * 10 + i;
                num /= 10;
                break;
            }
        }
    }
    printf("the reverse is :%d", new_num);
    return 0;
}
/******************************** End exam_proplem_4  ****************************/

/******************************** start mid1_exam_proplem_5 *******************************/
/**
 * @brief   : This function to count number of ones in binary number.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  count_ones();
 * @endcode
 */

int count_ones(void)
{
    int num, i, count = 0;
    printf("enter the number:");
    fflush(stdout);
    scanf("%d", &num);

    for (i = 0; i < sizeof(int) * 8; i++)
    {
        if (num & (1 << i))
            count++;
    }
    printf("the count of ones in the number are:%d", count);
    return 0;
}

/******************************** End start mid1_exam_proplem_5 ****************************/

/******************************** start mid1_exam_proplem_6 *******************************/
/**
 * @brief   : This function to find the unique number in array.
 * @param   : this function take an array and its size as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  find_Unique_number(arr,size);
 * @endcode
 */

int find_Unique_number(int arr[], int n)
{
    int unique = 0;

    for (int i = 0; i < n; i++)
    {
        unique ^= arr[i];
    }
    printf("The unique number is: %d\n", unique);
    return 0;
}

/******************************** End start mid1_exam_proplem_6 ****************************/

/******************************** start mid1_exam_proplem_7 *******************************/
/**
 * @brief   : This function to find the sum from 1 to n.
 * @param   : this function take a integer number as parameter.
 * @return  : this returns sum of n of numbers.
 * @code
 * 			  sum_1_to_n(10);
 * @endcode
 */

int sum_1_to_n(int num)
{
    int sum = 0;
    if (num > 1)
    {
        sum = num + sum_1_to_n(num - 1);
    }
    else
        sum = 1;
    return sum;
}

/******************************** End mid1_exam_proplem_7 ****************************/

/********************************  start mid1_exam_proplem_8 *******************************/
/**
 * @brief   : This function to reverse array elements .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  reverse_array();
 * @endcode
 */
int reverse_array(void)
{
    int i = 0, size, temp;
    int arr[5] = {1, 2, 3, 4, 5};
    size = sizeof(arr) / sizeof(int);

    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("the reversed array is:");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

/******************************** End mid1_exam_proplem_8 ****************************/

/******************************** start mid1_exam_proplem_9 *******************************/
/**
 * @brief   : This function to reverse string .
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  reverse_string();
 * @endcode
 */
void reverse_string(void)
{
    int start = 0, end = 0, size;
    char arr[100], temp;
    printf("enter the sentence(between 1:100 character):");
    fflush(stdin);
    fflush(stdout);
    gets(arr);
    size = strlen(arr);

    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    while (end <= size)
    {
        if (arr[end] == ' ' || arr[end] == '\0')
        {
            for (int i = 0; i < (end - start) / 2; i++)
            {
                temp = arr[start + i];
                arr[start + i] = arr[end - i - 1];
                arr[end - i - 1] = temp;
            }
            start = end + 1;
        }
        end++;
    }

    printf("The reversed string is: %s\n", arr);
}

/******************************** End mid1_exam_proplem_9 ****************************/

/******************************** start mid1_exam_proplem_10 *******************************/
/**
 * @brief   : This function to count the max number of ones between two zeros .
 * @param   : this function take an integer number as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  max_Ones_Between_Zeros();
 * @endcode
 */
void max_Ones_Between_Zeros(int n)
{
    int max_count = 0;
    int current_count = 0;
    int counting = 0;
    int i, j;
    for (i = 0; i < sizeof(int) * 8; i++)
    {
        if (!(n & (1 << i)))
        {
            for (j = i + 1; j < sizeof(int) * 8; j++)
            {
                if (n & (1 << j))
                {
                    current_count++;
                }
                else
                {
                    i=j;
                    max_count=current_count>max_count?current_count:max_count;
                    break;
                }
            }
        }
    }

    printf("binary in %d is : %d\n", n,max_count);
}

/******************************** End mid1_exam_proplem_9 ****************************/
