/**
 * @name   : main.c
 * @date   : Aug 17, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_8 assignment programs
 * 				which every problem developed as a separate function
 *
 */

struct Semp{
char name[20];
int id;
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define Debug_E
#define Dprintf(debug_level, ...)                                                        \
    if (debug_level > 1)                                                                 \
    {                                                                                    \
        printf("\n@ file:%s \t ,function:%s \t ,line:%d", __FILE__, __func__, __LINE__); \
        printf("\n\t>>");                                                                \
        printf(__VA_ARGS__);                                                             \
    }



int main()
{
    /*handle_pointers();      /*this for HW6_ex1*/
    /*print_alphabets();      /*this for HW6_ex2*/
    /*string_reverse();       /*this for HW6_ex3*/
    /*element_reverse();      /*this for HW6_ex3*/
    struct Semp e={"alex",1002};
    
    struct Semp *arr[1];
    arr[0]=&e;
    show_array(arr);
    getchar();
    return EXIT_SUCCESS;
}

/******************************** start HW6_ex1 ****************************/

/**
 * @brief   : This function to handle the pointers.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  handle_pointers();
 * @endcode
 */
int handle_pointers(void)
{
    unsigned m = 29;
    printf("address of m: 0x%x\n", &m);
    printf("value of m: %d\n", m);

    printf("Now ab is assigned with the address of m\n");
    unsigned *ab = &m;
    printf("address of ab: 0x%x\n", ab);
    printf("value of ab: %d\n", *ab);
    printf("The value of m assigned to 34 now\n");
    m = 34;
    printf("address of ab: 0x%x\n", ab);
    printf("value of ab: %d\n", *ab);

    printf("The pointer variable ab is assigned with the value 7 now\n");
    *ab = 7;
    printf("address of m: 0x%x\n", &m);
    printf("value of m: %d\n", m);

#ifdef Debug_E
    Dprintf(2, "End HW6_ex1\n");
#endif

    return EXIT_SUCCESS;
}

/******************************** End HW6_ex1 ****************************/

/******************************** start HW6_ex2 ****************************/

/**
 * @brief   : This function to print all the alphabets using a pointer..
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_alphabets();
 * @endcode
 */
int print_alphabets(void)
{

    char a = 'A', i = 0;
    char *ptr = &a;

    for (; i < ('z' - 'a') + 1; i++, a++)
        printf("%c   ", *ptr);

#ifdef Debug_E
    Dprintf(2, "End HW6_ex2\n");
#endif

    return EXIT_SUCCESS;
}

/******************************** End HW6_ex2 ****************************/

/******************************** start HW6_ex3 ****************************/

/**
 * @brief   : This function to print a string in reverse using a pointer.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  string_reverse();
 * @endcode
 */
int string_reverse(void)
{

    char ch[100], i = 0;
    printf("Input a string : ");
    fgets(ch, 100, stdin);
    char *ptr =ch;
    ptr += strlen(ch) - 2;

    for (; i < (char)strlen(ch) - 1; i++, ptr--)
    {
        printf("%c   ", *ptr);
    }
#ifdef Debug_E
    Dprintf(2, "End HW6_ex3");
#endif
    return EXIT_SUCCESS;
}

/******************************** End HW6_ex3 ****************************/

/******************************** start HW6_ex4 ****************************/

/**
 * @brief   : This function to print a element in reverse using a pointer.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  element_reverse();
 * @endcode
 */
int element_reverse(void)
{

    int ch[15], size, i;
    int *ptr = ch;
    printf("Input the number of elements to store in the array (max 15) :");
    scanf("%d", &size);

    printf("Input 5 number of elements in the array :");
    for (i = 0; i < size; i++)
    {
        printf("\nelement - %d :", i + 1);
        scanf("%d", &ch[i]);
    }

    printf("\nThe elements of array in reverse order are :");
    for (i = size - 1; i >= 0; i--)
        printf("\nelement - %d :%d",i+1, *(ptr + i));

#ifdef Debug_E
    Dprintf(1, "%c", *ptr);
#endif

    return EXIT_SUCCESS;
}

/******************************** End HW6_ex4 ****************************/


/******************************** start HW6_ex5 ****************************/

/**
 * @brief   : This function to show a pointer to an array which contents are pointer to structure.
 * @param   : this function take pointer to array of pointers of structure as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  show_array();
 * @endcode
 */
int show_array(struct Semp* (arr[]))
{

    printf("Exmployee Name :%s\n",arr[0]->name);

    printf("Employee ID :%d\n",arr[0]->id);
   

#ifdef Debug_E
    Dprintf(2," ");
#endif

    return EXIT_SUCCESS;
}

/******************************** End HW6_ex5 ****************************/