#include "lists.h"

/**
 * sum_listint - A function the calc the sum of the data of list
 * @head: A pointer to the head of the list
 * Return: Return the the sum_list in integer
 **/

int sum_listint(listint_t *head)
{
	int the_sum = 0;

	while (head != NULL)
	{
		the_sum += head->n;
		head = head->next;
	}
	return (the_sum);
}
