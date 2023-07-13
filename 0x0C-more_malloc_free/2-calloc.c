#include "main.h"
#include <stdlib.h>

/**
 * *_mct - A function that fills memory with a constant byte
 * @A: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer (A)
 */
char *_mct(char *A, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		A[i] = b;
	}
	return (A);
}

/**
 * *_calloc - A function that allocate for an array using malloc
 * @nmemb: number of variables in array
 * @size: size of variable in bytes
 * Return: NULL (FAILURE)
 * pointer (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_mct(p, 0, nmemb * size);

	return (p);
}
