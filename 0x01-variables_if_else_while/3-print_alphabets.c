#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Entry
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char a[] = "abcdefghijklmnopqrstuvwxyz", A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(A[i]);
	}
	putchar('\n');
return (0);
}
