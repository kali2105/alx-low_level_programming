#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n;
	do {
	m = m % 10;
	} while (m > 10);
	if (m > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, m);
	}
return (0);
}
