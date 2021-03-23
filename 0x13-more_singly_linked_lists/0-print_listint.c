#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list.
 *
 * Return: size list.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
