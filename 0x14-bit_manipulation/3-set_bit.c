#include "main.h"

/**
 * set_bit - A function that set the value of a bit to 1 for given index
 * @n: A pointer to the uns long integer
 * @index: idx of the bit
 *
 * Return: 1 (SUCCESS) | -1 (FAIL)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 63)
		return (-1);

	number = 1 << index;
	*n = (*n | number);

	return (1);
}
