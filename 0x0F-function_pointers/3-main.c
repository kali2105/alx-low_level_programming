#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A calculator program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 (SUCCESS) 100/99/89 (ERROR)
 */

int main(int argc, char *argv[])
{
	int nbr1, nbr2, results;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && nbr2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	results = operation(nbr1, nbr2);
	printf("%d\n", results);

	return (0);
}
