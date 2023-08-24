#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
 * struct list_slinked - A function of the general singly linked list
 * @str: string
 * @len: length of the string
 * @next: Pointer to the next node
 *
 * Description: The structure of the singly linked list
 */
typedef struct list_slinked
{
	char *str;
	unsigned int len;
	struct list_slinked *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
