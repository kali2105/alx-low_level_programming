#include "lists.h"

/**
 * find_listint_loop - A function that find the list inside the loop
 * @head: A pointer to the head of the list
 * Return: Return the list (SUCCESS) || NULL (FAIL)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (i);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (NULL);
}
