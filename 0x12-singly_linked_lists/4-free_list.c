#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - A function that frees the list list_t
 * @head: the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
