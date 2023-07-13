#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _digit - A function that checks if a string contains a non digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * length_str - A function that returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int length_str(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * Err - A function that print the error
 */
void Err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - The main function that multiplies two positive numbers
 * @argn: number of arguments
 * @arga: array of arguments
 * Return: 0 (Success)
 */
int main(int argn, char *arga[])
{
	char *s1, *s2;
	int l, L, len, i, b, j, k, *res, a = 0;

	s1 = arga[1], s2 = arga[2];
	if (argn != 3 || !_digit(s1) || !_digit(s2))
		Err();
	l = length_str(s1);
	L = length_str(s2);
	len = l + L + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= l + L; i++)
		res[i] = 0;
	for (l = l - 1; l >= 0; l--)
	{
		j = s1[l] - '0';
		b = 0;
		for (L = length_str(s2) - 1; L >= 0; L--)
		{
			k = s2[L] - '0';
			b += res[l + L + 1] + (j * k);
			res[l + L + 1] = b % 10;
			b /= 10;
		}
		if (b > 0)
			res[l + L + 1] += b;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
