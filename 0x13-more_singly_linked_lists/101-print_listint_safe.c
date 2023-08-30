#include "lists.h"

size_t cal_number_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * cal_number_nodes - A function thet calc the number of nodes in list
 * @head: A pointer to the head of the list
 * Return: return 0 || the number of nodes
 */
size_t cal_number_nodes(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *t, *h;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	t = head->next;
	h = (head->next)->next;

	while (h != NULL)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}
			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - A function that safely prints linked list
 * @head: A pointer to the head of the listint_t
 * Return: The number of nodes in the listint_t (SUCCESS)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = cal_number_nodes(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
