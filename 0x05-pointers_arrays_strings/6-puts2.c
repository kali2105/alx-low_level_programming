#include "main.h"
/**
 * puts2 - A function that print one character and not the following an so on
 * from a string
 * @str: A variable of type char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
