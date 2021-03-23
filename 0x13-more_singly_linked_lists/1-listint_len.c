#include "lists.h"

/**
 * listint_len - count number of elements in a linked listint_t list.
 * @h: pointer to linked list.
 *
 * Return: size of listint_t.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
