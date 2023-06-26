#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: A variable of type char (the string)
 */
void rev_string(char *s)
{
	char c;
	int i, j, k;

	i = 0;
	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k--] = c;
	}
}
