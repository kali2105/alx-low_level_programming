#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (SUCCESS)
*/

int main(int argc, char *argv[])
{
	int nbr_bytes;
	int index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbr_bytes = atoi(argv[1]);

	if (nbr_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nbr_bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == nbr_bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
