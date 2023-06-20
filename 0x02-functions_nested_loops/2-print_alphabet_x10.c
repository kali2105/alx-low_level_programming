#include "main.h"
/**
 * print_alphabet_x10 - A function that prints alphabet 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
