#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A function that print from a given
 * number to 98
 * @n: A variable of type int
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
