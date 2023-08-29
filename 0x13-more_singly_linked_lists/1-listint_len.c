#include "lists.h"

/**
 * listint_len - A function that return the element linkintf
 * @h: A pointer for the type listint_t
 * Return: Return the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t MK_number = 0;

	while (h != NULL)
	{
		MK_number++;
		h = h->next;
	}
	return (MK_number);
}
