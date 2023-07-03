#include "main.h"
#include <stdio.h>

/**
 *  _strchr - A function that locates a character in a string
 *  @s: string to check
 *  @c: character to locate
 *  Return: a pointer to the first occurrence of the character c
 *  in s or NULL if the character isnt found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{

		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
