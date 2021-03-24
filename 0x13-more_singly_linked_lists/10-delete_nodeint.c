#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: listint_t linked list.
 * @index: is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *next_node;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		next_node = *head;
		*head = next_node->next;
		free(next_node);
		return (1);
	}

	node = *head;

	while (i < (index - 1))
	{
		node = node->next;
		if (!node)
			return (-1);
		i++;
	}

	next_node = node->next;
	node->next = next_node->next;
	free(next_node);

	return (1);
}
