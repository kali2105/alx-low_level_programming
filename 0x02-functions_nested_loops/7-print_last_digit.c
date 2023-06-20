#include "main.h"
/**
 * print_last_digit - a function that print the last digit of given numb
 * @n: a variable of type int
 *
 * Return: last digit (Success)
 */
int print_last_digit(int n)
{
int r = n % 10;

if (r < 0)
{
	r = r * (-1);
	_putchar(r + '0');
}
else
{
	_putchar(r + '0');
}
return (r);
}
