#include "main.h"
/**
 * create_file -A function that creates an array of chars
 * @text_content: A string that is terminated with NULL
 * @filename: The name of the file to be created
 *
 * Return: 1 (SUCCESS) | -1 (FAIL)
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, ln);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
