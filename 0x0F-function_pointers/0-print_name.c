#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name -  A function that print a name
 * @name: The name that should be printed
 * @f: The pointer to this print-name function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
