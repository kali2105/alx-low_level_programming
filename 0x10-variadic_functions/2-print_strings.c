#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings separated by a separator
 * @separator: The string to be printed between strings
 * @n: The number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arguments, char *);
		if (!string)
		{
			string = "(nil)";
		}
		if (!separator)
		{
			printf("%s", string);
		}
		else if (separator && i == 0)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s%s", separator, string);
		}
	}
	printf("\n");
	va_end(arguments);
}
