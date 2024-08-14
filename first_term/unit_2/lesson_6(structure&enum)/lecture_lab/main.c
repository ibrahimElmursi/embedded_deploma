/**
 * @name   : main.c
 * @date   : Aug 13, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_5 labs programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{

	print_complex("C",add_complex(readComplex("clx1"),readComplex("clx2")));
	return EXIT_SUCCESS;
}

/******************************** start lab1 *******************************/

/**
 * @brief   : This function to read two complex numbers
 * @param   : this function take an array as parameter.
 * @return  : this returns struct Scomplex.
 * @code 	:
 * 			  readComplex("clx");
 * @endcode
 */

struct Scomplex readComplex(char name[])
{
	struct Scomplex x={0};
	printf("enter %s complex number ( re , im ):",name);
	fflush(stdout);
	scanf("%lf, %lf",&x.re,&x.im);
	return x;

}


/**
 * @brief   : This function to adding two complex numbers using struct
 * @param   : this function takes two struct Scomplex variables as parameter.
 * @return  : this returns struct Scomplex.
 * @code 	:
 * 			  add_complex(a,b);
 * @endcode
 */

struct Scomplex add_complex(struct Scomplex a,struct Scomplex b)
{
	struct Scomplex sum={0};
	sum.re=a.re+b.re;
	sum.im=a.im+b.im;
	return sum;
}

/**
 * @brief   : This function to print complex number using struct
 * @param   : this function takes struct Scomplex variable as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code 	:
 * 			  print_complex("c",c);
 * @endcode
 */

int print_complex(char name[],struct Scomplex c)
{
	printf("the sum of %s is :%.2f+i(%.2f)",name,c.re,c.im);
	return EXIT_SUCCESS;
}


/******************************** End lab1 ****************************/



















