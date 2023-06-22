#include "main.h"

/**
 * print_line - A function that prints lines based on n
 * @n: A variable of type int
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
