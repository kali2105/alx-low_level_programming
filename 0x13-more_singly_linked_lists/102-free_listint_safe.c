#include "lists.h"

/**
 * ralct_arr_nodes - A function reallocate memory for pointers to nodes of list
 * @list: the old list to append
 * @size: size of the new list
 * @new: A new node to add to the list
 * Return: Return a pointer to the new list
 */
listint_t **ralct_arr_nodes(listint_t **list, size_t size, listint_t *new)
{
	listint_t **nl;
	size_t i;

	nl = malloc(size * sizeof(listint_t *));
	if (nl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		nl[i] = list[i];
	nl[i] = new;
	free(list);
	return (nl);
}
/**
 * free_listint_safe - A function that frees a linked list
 * @head: A pointer to the head of the list
 * Return: the number of nodes in the list that was freed (SUCCESS)
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = ralct_arr_nodes(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
