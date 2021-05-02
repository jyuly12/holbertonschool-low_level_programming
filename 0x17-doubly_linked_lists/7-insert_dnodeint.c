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
	dlistint_t *new_node, *tmp;

	tmp = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);

		i++;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
