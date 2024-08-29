#include "Libprint.h"

int print_firstName(char arr[])
{
	print_text(arr);
	return 0;
}
static int print_text(char arr[])
{	
	printf("%s\n", arr);
	return 0;
}