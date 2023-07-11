#include <stdlib.h>
#include "main.h"
/**
 * str_concat - A function that concatenates two strings to new space in memory
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: NULL (failure)
 * pointer to concatenates (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (k = 0, j = i; s2[k] != '\0'; k++, j++)
	{
		p[j] = s2[k];
	}
	p[j] = '\0';
	return (p);
}
