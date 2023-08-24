#include "lists.h"
#include <stdio.h>

/**
 * list_len - A function that would return the numbera of element in the list
 * list_t
 * @h: A pointer to the list
 * Return: The elments returning in SS
 */
size_t list_len(const list_t *h)
{
	size_t SS = 0;

	while (h)
	{
		SS++;
		h = h->next;
	}
	return (SS);
}
