#include "main.h"

/**
 * clear_bit - A function that set 0 to the value of a bit of an index given
 * @n: A pointer to an uns long integer
 * @index: the index of the bit
 *
 * Return: Return 1(SUCCESS) | -1 (FAIL)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 63)
	{
		return (-1);
	}
	number = 1 << index;

	if (*n & number)
		*n ^= number;
	return (1);
}
