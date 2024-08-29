/**
 * @name   : Libprint.h
 * @date   : Aug 29, 2024
 * @author : Eng.Ibrahim El-mursi
 * @brief  : this lib contains some of print functions
 *
 */
#ifndef _Libprint_H
#define _Libprint_H

#include <stdio.h>

/**
 * @brief   : This function prints a text.
 * @param   : this function take an array of chars as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_firstName("some text");
 * @endcode
 */
int print_text(char []);

/**
 * @brief   : This function prints first Name.
 * @param   : this function take an array of chars as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_firstName("ibrahim");
 * @endcode
 */
int print_firstName(char []);

/**
 * @brief   : This function prints second Name.
 * @param   : this function take an array of chars as parameter.
 * @return  : this returns 0 if the execution done correctly.
 * @code
 * 			  print_secondName("elmursi");
 * @endcode
 */
int print_secondName(char []);



#endif