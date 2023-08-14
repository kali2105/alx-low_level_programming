#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - A function that creats a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new created dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int NL, OL, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (NL = 0; name[NL]; NL++)
		;
	NL++;
	dog->name = malloc(NL * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < NL; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (OL = 0; owner[OL]; OL++)
		;
	OL++;
	dog->owner = malloc(OL * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < OL; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
