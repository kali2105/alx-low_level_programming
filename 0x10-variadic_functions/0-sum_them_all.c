#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sum integer numbers
 * @n: The number of numbers to sum
 *
 * Return: return the result or NULL if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		s += va_arg(arguments, int);

	va_end(arguments);

	return (s);
}
