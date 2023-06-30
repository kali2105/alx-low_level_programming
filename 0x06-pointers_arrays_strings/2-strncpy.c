#include "main.h"

/**
 * _strncpy - A function that copies at most an inputted number
 * of bytes from string src into dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_l = 0;

	while (src[i++])
		src_l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
