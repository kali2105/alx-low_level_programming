#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees the elements of the dog.
 * @d: A pointer that points to dogs elemnets.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
