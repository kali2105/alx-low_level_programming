#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that will add node to list_t
 * @head: A double pointer to list
 * @str: A string to be added to the node
 * Return: The address of elements(Success)or NULL (Fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *New;
	unsigned int len = 0;

	while (str[len])
		len++;

	New = malloc(sizeof(list_t));
	if (!New)
		return (NULL);

	New->str = strdup(str);
	New->len = len;
	New->next = (*head);
	(*head) = New;

	return (*head);
}
