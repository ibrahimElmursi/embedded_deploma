/**
 * @name   : main.c
 * @date   : Aug 13, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this program is used to run all lecture_6 assignment programs
 * 				which every problem developed as a separate function
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

struct Sstuudent /* this for HW5_ex1 */
{
	char name[50];
	int roll;
	float marks;
};

struct Sdistance /* this for HW5_ex2 */
{
	float feet;
	float inch;
};

struct Scomplex /* this for HW5_ex3 && HW5_ex4 */
{
	double re;
	double im;
};


/******* HW5_ex6 ********/
union job {
	int worker_no;
	float salary;
	char name[32];
} u;

/*#pragma pack(1)*/
struct job1 {
	char name[32];
	float salary;
	int worker_no;
} s;
/******* HW5_ex6 ********/



int main()
{
	/*printf("enter information of student:\n");
	 struct Sstuudent student=store_info();
	 printf("\n\ndisplaying information of student: \n");
	 print_info(student); 					/* this for HW5_ex1 */

	/*add_distance(); 							/* this for HW5_ex2 */
	/*print_complex("C",
			add_complex(readComplex("clx1"),
						readComplex("clx2"))); 	/* this for HW5_ex3 */
	/*store_list_info(); 							/* this for HW5_ex4 */
	/*print_circle_area(); 						/* this for HW5_ex5 */
	print_sizeof_s_u(); 						/* this for HW5_ex6 */

	return EXIT_SUCCESS;
}

/******************************** start HW5_ex1 ****************************/
/**
 * @brief   : This function to store student information using structure.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns struct Sstuudent .
 * @code
 * 			  store_info();
 * @endcode
 */
struct Sstuudent store_info(void)
{
	struct Sstuudent stu={0};

	printf("\nenter name: ");
	fflush(stdout);
	scanf("%s",stu.name);

	printf("enter roll number: ");
	fflush(stdout);
	scanf("%d",&stu.roll);

	printf("enter marks: ");
	fflush(stdout);
	scanf("%f",&stu.marks);

	return stu;
}
/**
 * @brief   : This function to print student information using structure.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_info(student);
 * @endcode
 */
int print_info(struct Sstuudent stu)
{
	printf("name: %s \n",stu.name);
	printf("roll number: %d \n",stu.roll);
	printf("enter marks: %.2f \n",stu.marks);
	return EXIT_SUCCESS;
}

/******************************** End HW5_ex1 ****************************/


/******************************** start HW5_ex2 ****************************/
/**
 * @brief   : This function to sum two distances in (feet' inch").
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  add_distance();
 * @endcode
 */
int add_distance(void)
{
	struct Sdistance d1={0};
	struct Sdistance d2={0};

	printf("enter information of 1st distance:\n");
	printf("enter feet: ");
	fflush(stdout);
	scanf("%f",&d1.feet);
	printf("enter inch: ");
	fflush(stdout);
	scanf("%f",&d1.inch);

	printf("enter information of 2ed distance:\n");
	printf("enter feet: ");
	fflush(stdout);
	scanf("%f",&d2.feet);
	printf("enter inch: ");
	fflush(stdout);
	scanf("%f",&d2.inch);
	float inch=d1.inch+d2.inch;
	float feet=d1.feet+d2.feet+(int)(inch/12);
	inch=((inch/12)-(int)(inch/12)+ feet-(int)feet)*12;

	printf("sum of distance= %d'%.2f\"\n",(int)feet,inch);


	return EXIT_SUCCESS;
}
/******************************** End HW5_ex2 ****************************/

/******************************** start HW5_ex3 ****************************/
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

/******************************** End HW5_ex3 ****************************/

/******************************** start HW5_ex4 ****************************/
/**
 * @brief   : This function to store list of students information using structure.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  store_list_info();
 * @endcode
 */
int store_list_info(void)
{
	struct Sstuudent students[3];
	int i;
	printf("enter information of student:\n");
	for(i=0;i<3;i++)
	{
		students[i]=store_info();
	}
	printf("\n\ndisplaying information of student: \n");
	for(i=0;i<3;i++)
		{
		print_info(students[i]);
		}
	return EXIT_SUCCESS;
}
/******************************** End HW5_ex4 ****************************/

/******************************** start HW5_ex5 ****************************/
/**
 * @brief   : This function to find area of a circle using macro function.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_circle_area(10);
 * @endcode
 */
int print_circle_area(void)
{

	return EXIT_SUCCESS;
}
/******************************** End HW5_ex5 ****************************/

/******************************** start HW5_ex6 ****************************/
/**
 * @brief   : This function to print_sizeof s u.
 * @param   : this function doesn't take any parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_sizeof_s_u();
 * @endcode
 */

int print_sizeof_s_u(void)
{
	printf("Size of union = %d\n",(int) sizeof(u));
	printf("Size of structure = %d",(int) sizeof(s));
	return EXIT_SUCCESS;

}

/******************************** End HW5_ex6 ****************************/
