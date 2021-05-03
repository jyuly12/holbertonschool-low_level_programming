#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: linked list.
 * @index: index of the node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next_node;

	if (!(*head) || !head)
		return (-1);

	next_node = *head;
	if (index == 0)
	{
		*head = next_node->next;
		if (next_node->next)
		{
			next_node->next->prev = NULL;
		}
		free(next_node);
		return (1);
	}
	while (index-- != 0)
	{
		next_node = next_node->next;
		if (!(next_node->next))
			return (-1);
	}
	next_node->prev->next = next_node->next;
	if (next_node->next)
		next_node->next->prev = next_node->prev;
	free(next_node);
	return (1);
}
