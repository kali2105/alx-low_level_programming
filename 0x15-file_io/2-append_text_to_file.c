#include"main.h"

/**
 *append_text_to_file - A function that appends text at the end of a file
 *@filename: A pointer to the name of the file
 *@text_content: The string to add to the end of the file
 *
 *Return: 1 (SUCCESS)|  -1 (FAIL)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, ln);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
