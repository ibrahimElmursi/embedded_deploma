/*
 * main.h
 *
 *  Created on: Aug 13, 2024
 *      Author: Eng.Ibrahim El-mursi
 */

#ifndef MAIN_H_
#define MAIN_H_

struct Sstuudent store_info(void);
int print_info(struct Sstuudent);
int add_distance(void);
struct Scomplex readComplex(char []);
struct Scomplex add_complex(struct Scomplex, struct Scomplex);
int print_complex(char [], struct Scomplex);
int store_list_info(void);
int print_circle_area(void);
int print_sizeof_s_u(void);

#endif /* MAIN_H_ */
