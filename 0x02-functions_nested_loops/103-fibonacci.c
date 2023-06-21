#include <stdio.h>

/**
 * main - A program that prints the sum of even valued Fibonacci sequence
 * of terms not exceeding 4000000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, fbsum;
	float tot_sum;

	while (1)
	{
		fbsum = fb1 + fb2;
		if (fbsum > 4000000)
			break;

		if ((fbsum % 2) == 0)
			tot_sum = tot_sum + fbsum;
		fb1 = fb2;
		fb2 = fbsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
