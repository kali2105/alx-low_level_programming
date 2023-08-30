#include "lists.h"

/**
 * reverse_listint - A reversing function (listint_t)
 * @head: A pointer to the first node of the list
 * Return: Return pointer of the first node (listint_t)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
