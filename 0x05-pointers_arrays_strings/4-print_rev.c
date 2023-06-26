#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: A variable of type char
 */
void print_rev(char *s)
{
	int i, j, o;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	o = i;

	for (j = o - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
