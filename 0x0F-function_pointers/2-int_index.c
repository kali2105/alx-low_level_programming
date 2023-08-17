#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer
 * @array: Variable of type array
 * @size: The number of elements in the array array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0
 * return -1 If no element matches or  size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
