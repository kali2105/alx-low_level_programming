#include "main.h"

/**
 * _islower - Checks if c is lower
 * @c: is a variable of type char
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
