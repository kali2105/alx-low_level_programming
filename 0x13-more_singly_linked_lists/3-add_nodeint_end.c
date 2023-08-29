#include "lists.h"

/**
 * add_nodeint_end - A function that add a node in the end of list
 * @head: A pointer to the head of the list
 * @n: data of the node
 * Return: A pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = fresh;
	return (fresh);
}
