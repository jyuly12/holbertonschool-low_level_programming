#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t structure.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
int i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
