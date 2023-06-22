#include "main.h"
/**
 * _isdigit - A function that checks if c a digit
 * @c: A variable to be checked
 *
 * Return: 1 (c=digit) 0 (otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
