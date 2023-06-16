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
	char a[] = "abcdef";

for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
for (i = 0; i < 6; i++)
{
	putchar(a[i]);
}
putchar('\n');
return (0);
}
