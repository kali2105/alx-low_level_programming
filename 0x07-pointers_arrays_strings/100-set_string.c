#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: pointer to pointer we need to set to a char
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
