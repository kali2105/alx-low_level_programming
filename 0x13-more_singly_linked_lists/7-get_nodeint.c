#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked ist
 * @head: A pointer to the head of the list
 * @index: The index of the node (starting at 0)
 * Return: Return a pointer the nth node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	for (num = 0; num < index; num++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
