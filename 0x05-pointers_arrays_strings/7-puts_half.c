#include "main.h"
/**
 * puts_half - A function that print the last half of a string
 * @str: A variable of type char
 */
void puts_half(char *str)
{
	int l, i;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	for (i = (l + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
