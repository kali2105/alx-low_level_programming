#include "main.h"

/**
 * print_triangle - A function that prints a triangle using #
 * @size: A variable of type int
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size - j; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < j; i++)
				_putchar('#');

			if (j == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
