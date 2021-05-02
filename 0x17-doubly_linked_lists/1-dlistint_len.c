#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: linked dlistint_t list.
 *
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
