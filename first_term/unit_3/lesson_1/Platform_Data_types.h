/**
 * @name   	: Platform_Data_types.h
 * @date   	: Aug 28, 2024
 * @author	: Eng.Ibrahim El-mursi
 * @brief  	: [SWS_Platform_00002] All platform specific abstracted AUTOSAR data types and
 *			 	symbols shall be defined in the Platform_Types.h header file. It is not allowed to
 *			 	add any extension to this file. Any extension invalidates the AUTOSAR conformity.c
 * @note	: this file implemented depending on Specification of Platform Types for Classic Platform
 * 				AUTOSAR CP R23-11
 *
 */

#ifndef _Platform_Data_types_H
#define _Platform_Data_types_H 

/*
[SWS_Platform_00045] According to the register width of the CPU used, CPU_TYPE
shall be assigned to one of the symbols CPU_TYPE_8, CPU_TYPE_16, CPU_TYPE_32
or CPU_TYPE_64.
*/

typedef enum {CPU_TYPE_8, CPU_TYPE_16 ,CPU_TYPE_32 ,CPU_TYPE_64} CPU_TYPE;

/*
Bit Ordering (Register)

[SWS_Platform_00048] In case of Big Endian bit ordering CPU_BIT_ORDER shall be
assigned to MSB_FIRST in the platform types header file.c()

[SWS_Platform_00049] In case of Little Endian bit ordering CPU_BIT_ORDER shall
be assigned to LSB_FIRST in the platform types header file.
*/
typedef enum {LSB_FIRST, MSB_FIRST} CPU_BIT_ORDER;

/*
Byte Ordering (Memory)

[SWS_Platform_00050] dIn case of Big Endian byte ordering CPU_BYTE_ORDER shall
be assigned to HIGH_BYTE_FIRST in the platform types header file.

[SWS_Platform_00051] dIn case of Little Endian byte ordering CPU_BYTE_ORDER
shall be assigned to LOW_BYTE_FIRST in the platform types header file
*/
typedef enum {LOW_BYTE_FIRST,HIGH_BYTE_FIRST} CPU_BYTE_ORDER;

/*
Type definitions

[SWS_Platform_00061] Concerning the signed integer types, AUTOSAR supports
for compiler and target implementation only 2 complement arithmetic. This directly
impacts the chosen ranges for these types.
*/

typedef enum {FALSE, TRUE} 	boolean;

typedef unsigned char 			uint8;
typedef unsigned short 			uint16;
typedef unsigned long 			uint32;
typedef unsigned long long 		uint64;
typedef char 					sint8;
typedef short 					sint16;
typedef long 					sint32;
typedef long long 				sint64;

typedef float 					float32;
typedef double 					float64;

typedef void* VoidPtr;
typedef const void* ConstVoidPtr;

#ifndef TRUE
#define TRUE TRUE_VAL
#endif
#ifndef FALSE
#define FALSE FALSE_VAL
#endif


/*Datatypes Ranges*/


#define UINT8_MIN		0
#define UINT8_MAX		255
#define UINT16_MIN		0
#define UINT16_MAX		65535
#define UINT32_MIN		0
#define UINT32_MAX		4294967295
#define UINT64_MIN		0
#define UINT64_MAX		18446744073709551615

#define SINT8_MIN		-128
#define SINT8_MAX		 127
#define SINT16_MIN		-32768
#define SINT16_MAX		 32767
#define SINT32_MIN		-2147483648
#define SINT32_MAX		 2147483647
#define SINT64_MIN		-9223372036854775808
#define SINT64_MAX		 9223372036854775807

#define FLOAT32_MIN 	 1.17549435e-38
#define FLOAT32_MAX 	 3.40282347e+38 
#define FLOAT32_EPSILON  1.19209290e-07
#define FLOAT64_MIN 	 2.2250738585072014e-308 
#define FLOAT64_MAX 	 1.7976931348623157e+308 
#define FLOAT64_EPSILON  2.2204460492503131e-16



#endif