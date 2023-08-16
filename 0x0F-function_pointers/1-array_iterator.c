#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A function that executes a given function and the elements
 * of an array
 * @array: pointer to an array
 * @size: The size of the array
 * @action: A given function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t x;

		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
