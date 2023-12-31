#include <stdio.h>

/**
 * main - A program that prints numbers from 0 to 100
 * replacing 3s with Fizz and 5s with Buzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
