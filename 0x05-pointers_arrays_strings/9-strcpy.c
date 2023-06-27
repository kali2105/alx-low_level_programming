#include "main.h"

/**
 * *_strcpy - A function that copie the string pointed to by src
 * with \0 included
 * @dest: A variable of type char (pointer)
 * @src: A variable of type char (pointer) to be copied
 * Return: The dest
 */
char *_strcpy(char *dest, char *src)
{

	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
