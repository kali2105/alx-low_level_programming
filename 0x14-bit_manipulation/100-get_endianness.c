#include "main.h"
/**
 * get_endianness - A function that checks for the endianness
 *
 * Return: 0 (big endian) | 1 (little endian)
 */
int get_endianness(void)
{
	char *e;
	int i;


	i = 1;
	e = (char *)&i;

	return (*e);
}
