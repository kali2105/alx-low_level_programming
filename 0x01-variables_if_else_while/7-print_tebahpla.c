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
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(a[i]);
	}
	putchar('\n');
return (0);
}
