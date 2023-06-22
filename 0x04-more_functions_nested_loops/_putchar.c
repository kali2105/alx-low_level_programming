#include <unistd.h>
/**
 * _putchar - Writes the c character
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
