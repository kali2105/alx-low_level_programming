#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initialize the elements of the dog.
 * @d: A pointer refering to the variable of the struct.
 * @name: The name of the dog.
 * @owner: The owner of the dog.
 * @age: The age of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
