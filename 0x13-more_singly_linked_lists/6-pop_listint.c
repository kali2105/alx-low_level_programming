#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint -  A function that deletes the head node of a linked list
 * @head: A Pointer to the head of the list
 * Return: Return the head node's data
 **/

int pop_listint(listint_t **head)
{
	listint_t *t;
	int ls_value;

	if (*head == NULL)
	{
		return (0);
	}
	t = *head;
	*head = t->next;
	ls_value = t->n;
	free(t);
	return (ls_value);
}
