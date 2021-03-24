#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: listint_t linked list.
 * @idx: index of the list.
 * @n: node position.
 *
 * Return: new_node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp;

	tmp = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
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
