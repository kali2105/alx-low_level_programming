#include "main.h"

/**
 *  _memcpy - A function that copies memory from an area and past it to other
 *  area
 *  @src: A variable of memory area copied from
 *  @dest: A variable of memory are past to
 *  @n: number of bytes
 *  Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
