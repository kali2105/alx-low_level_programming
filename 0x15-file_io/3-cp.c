#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - A function thst allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 *
 * Return: Return a pointer oppp the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write oppp %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - A function thst closes file descriptors
 * @fd: The file descriptor oppp be closed
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to another file
 * @argc: The number of arguments supplied from the program
 * @argv: An array of pointers from the  given arguments
 *
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int opp, oppp, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	opp = open(argv[1], O_RDONLY);
	rd = read(opp, buff, 1024);
	oppp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (opp == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(oppp, buff, rd);
		if (oppp == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(opp, buff, 1024);

	} while (rd >= 0);
	free(buff);
	close_file(opp);
	close_file(oppp);

	return (0);
}
