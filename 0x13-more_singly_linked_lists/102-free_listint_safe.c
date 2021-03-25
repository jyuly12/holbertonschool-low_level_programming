#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head of listint_t list.
 *
 * Return:  size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i;

	if (!h)
		return (NULL);

	if (h != NULL)
	{
		while (*h)
		{
			tmp = (*h)->next;
			free(*h);
			(*h) = tmp;
			i++;
		}
	}
	*h = NULL;
	return (i);
}
