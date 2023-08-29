#include "lists.h"

/**
 * free_listint2 - A function that clear the listint
 * @head: Two pointers for the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
