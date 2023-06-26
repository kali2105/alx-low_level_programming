#include "main.h"

/**
 * _strlen -  A function that returns the length of string
 * @s: string to be counted
 * Return: o ( Number of char in a string )
 */
int _strlen(char *s)
{
	int o;

	o = 0;
	while (s[o] != '\0')
	{
		o++;
	}
	return (o);
}
