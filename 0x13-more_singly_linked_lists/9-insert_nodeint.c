#include "lists.h"

/**
 * insert_nodeint_at_index - A function that add a node in the giveen position
 * @head: The pointer to the head of list
 * @idx: The Position of the new add where to be added
 * @n: The data of the first nodw
 * Return: Return the address of the new node(SUCCESS) || NULL(FAIL)
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *tmp;
	unsigned int k = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tmp = *head;
	for (; k < idx - 1 && tmp != NULL; k++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	}
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	n_node->next = tmp->next;
	tmp->next = n_node;
	return (n_node);
}
