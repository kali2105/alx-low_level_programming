#include <stdlib.h>
#include "main.h"

/**
 * counting - A helper funation to aount the nuaber of l in string
 * @s: string
 *
 * Return: nuaber of l
 */
int counting(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - A function that splits a string into l
 * @str: string variable
 *
 * Return: NULL (failure, error)
 * pointer (Success)
 */
char **strtow(char *str)
{
	char **mx, *tp;
	int i, k = 0, l = 0, words, j = 0, st, ed;

	while (*(str + l))
		l++;
	words = counting(str);
	if (words == 0)
		return (NULL);

	mx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mx == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				ed = i;
				tp = (char *) malloc(sizeof(char) * (j + 1));
				if (tp == NULL)
					return (NULL);
				while (st < ed)
					*tp++ = str[st++];
				*tp = '\0';
				mx[k] = tp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			st = i;
	}

	mx[k] = NULL;

	return (mx);
}
