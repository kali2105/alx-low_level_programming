#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that n element of an array
 * @n: number of elements
 * @a: A variable of type int (pointer)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
