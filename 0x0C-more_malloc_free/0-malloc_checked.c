#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function that check for malloc opperation
 * @b: a variable of type int to be checked after ass with malloc
 * Return: 98 (FAILURE)
 * pointer (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
