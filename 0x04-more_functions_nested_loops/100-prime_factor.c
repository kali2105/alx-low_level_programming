#include <stdio.h>

/**
 * main - A program that prints the largest prime factors
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long p = 612852475143, div;

	while (div < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for (div = 3; div < (p / 2); div += 2)
		{
			if ((p % div) == 0)
				p /= div;
		}
	}
	printf("%ld\n", p);

	return (0);
}
