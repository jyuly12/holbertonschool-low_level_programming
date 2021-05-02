#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: listint_t linked list.
 * @idx: index of the list.
 * @n: node position.
 *
 * Return: new_node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp, *node;

	tmp = *h;
	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		new_node->next->prev = NULL;
		return (new_node);
	}

	if (idx == 0)
	{
		tmp->prev = new_node;
		new_node->prev = NULL;
		new_node->next = tmp;
		*h = new_node;
		return (new_node);
	}
	for (; tmp; i++)
	{
		if (i == idx - 1)
		{
			node = tmp->next;
			tmp->next = new_node;
			new_node->next = node;

			if (!node)
				node->prev = new_node;

			new_node->prev = tmp;
			return (new_node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
