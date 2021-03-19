#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_t structure.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
			h = h->next;
		}
}

	return (i);
}
