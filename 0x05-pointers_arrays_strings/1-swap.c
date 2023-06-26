#include "main.h"
/**
 * swap_int - A function that swap two integers pointer
 * @a: An integer's pointer
 * @b: An integer's pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
