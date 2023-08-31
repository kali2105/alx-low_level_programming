#include "main.h"

/**
 * flip_bits - A function thta return the number of bits to be fliped
 * @n: The first number
 * @m: Second one
 *
 * Return: Return the number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_flp;

	for (bits_flp = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_flp++;
	}

	return (bits_flp);
}
