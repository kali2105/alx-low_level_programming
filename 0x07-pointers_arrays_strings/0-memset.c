#include "main.h"
/**
 * _memset - A function that fills a memory with a constant byte
 * @s: A variable of the size of the desired memory
 * @b: A variable that will be filled in the memory
 * @n: A variable of how many memory to be filled with the variable b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
