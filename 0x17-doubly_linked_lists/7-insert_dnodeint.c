#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: dlistint_t linked list.
 * @idx: index of the list.
 * @n: node position.
 *
 * Return: new_node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp = *h;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		new_node->next = *h;
		return (new_node);
	}
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			if (!(tmp->next))
				new_node->next = NULL;
			else
			{
				new_node->next = tmp->next;
				new_node->next->prev = new_node;
			}
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
