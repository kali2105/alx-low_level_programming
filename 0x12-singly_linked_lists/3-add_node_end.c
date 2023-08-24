#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds a node in the end of list
 * @head: A double pointer for list to list_t
 * @str: The string will be added to nodes
 * Return: The address of the nodes (Success) NULL (FAIL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	New = malloc(sizeof(list_t));
	if (!New)
		return (NULL);

	New->str = strdup(str);
	New->len = len;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = New;

	return (New);
}
