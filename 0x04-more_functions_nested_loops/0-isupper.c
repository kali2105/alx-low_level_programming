#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks if the number is an uppercase
 * @c: A variable of type int
 *
 * Return: 1 (Uppercase) 0 (otherwise)
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
