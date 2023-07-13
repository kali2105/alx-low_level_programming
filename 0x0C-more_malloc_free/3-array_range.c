#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of int
 * @min: minimum value stored
 * @max: maximum value stored and number of elements
 * Return: NULL (FAILURE)
 * pointer (Success)
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max ; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
