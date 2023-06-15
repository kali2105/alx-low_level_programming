#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program demonstrates the use of the 'sizeof' function to print the size
 * of of various types on the computer it is compiled and run on
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int i;

	float f;

	char c;

	long l;

	long long L;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(L));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
