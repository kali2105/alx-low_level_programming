#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any ofset of bytes
 * @s: string to be searching in
 * @accept: Variable of type string that is containing the bytes
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
