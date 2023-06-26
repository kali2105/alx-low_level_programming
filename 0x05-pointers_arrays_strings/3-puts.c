#include "main.h"
/**
 * _puts - A function that prints the contenu of a strin
 * @str: A variable of type char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
