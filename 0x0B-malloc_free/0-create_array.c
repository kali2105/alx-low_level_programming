#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that create an array of chars
 * @size: the size of the array to allocate
 * @c: the char variable that will contain the values
 *
 * Return: NULL (if size=0 or it fail to allocate) or pointer (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p =  malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
		return (p);
	}
}
