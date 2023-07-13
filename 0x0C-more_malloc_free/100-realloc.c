#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previoously allocated
 * @old_size: the old size of the allocated memory
 * @new_size: the new size of the new memory block
 * Return: NULL (FAILURE)
 * pointer (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *po;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	po = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = po[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = po[i];
	}

	free(ptr);
	return (p);
}
