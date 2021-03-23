#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: listint_t structure.
 * @n: paramether to add
 *
 * Return: new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *node;

	if (head != NULL)
	{

		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}

		node = *head;
		while (node->next != NULL)
			node = node->next;

		node->next = new_node;
	}
	return (*head);
}
