#include "main.h"

/**
 * binary_to_uint -A function that converts a binary number
 * to an unsigned int
 * @b: A pointer to a string of zero and one
 *
 * Return: Return converted number | 0 if b NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int k = 0;

	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		k <<= 1;
		if (b[j] == '1')
			k += 1;
	}
	return (k);
}
