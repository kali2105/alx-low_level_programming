#include "lists.h"

/**
 * add_nodeint - A function that add a node at the beggining of the list
 * @head: A pointer to the head of the linked list
 * @n: data of the node
 * Return: Return a pointer to the new node (SUCCESS) NULL (FAIL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;
	return (fresh);
}
