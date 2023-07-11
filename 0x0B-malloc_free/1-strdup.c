#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that return a pointer which contain a copy of this str
 * @str: the copy of this string will be returned as a pointer
 *
 * Return: NULL (if failled or str is NULL).
 * pointer (Success)
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
