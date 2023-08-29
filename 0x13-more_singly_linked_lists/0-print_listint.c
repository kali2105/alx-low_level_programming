#include "lists.h"

/**
 * print_listint - A function that print all the elements of the list
 * @h: A pointer to listed link from type listlink
 * Return: Return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
