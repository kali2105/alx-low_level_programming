#include "lists.h"

/**
 * delete_nodeint_at_index - supprimi node mn list
 * @head: A pointer of the first node of the list
 * @index: The index of the node that should be deleted
 * Return: Return 1 (SUCCESS) || 0 (FAIL)
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *live, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	live = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (live->next == NULL)
			return (-1);
		live = live->next;
	}
	next = live->next;
	live->next = next->next;
	free(next);
	return (1);
}
