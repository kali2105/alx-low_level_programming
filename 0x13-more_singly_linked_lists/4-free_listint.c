#include "lists.h"

/**
 * free_listint - A function that empty the list
 * @head: the list to be cleaned
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
