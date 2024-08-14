/*
 * main.h
 *
 *  Created on: Aug 13, 2024
 *      Author: Eng.Ibrahim El-mursi
 */

#ifndef MAIN_H_
#define MAIN_H_

struct Scomplex /* this for lab1*/
{
	double re;
	double im;
};

struct Scomplex readComplex(char []);
struct Scomplex add_complex(struct Scomplex ,struct Scomplex);
int print_complex(char[],struct Scomplex );




#endif /* MAIN_H_ */
