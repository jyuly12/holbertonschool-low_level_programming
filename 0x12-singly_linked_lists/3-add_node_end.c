#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t structure.
 * @str: string.
 *
 * Return: size of list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node;
	int i = 0;

	if (head != NULL)
	{

		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);

		for (; str[i]; i++)
			;

		new_node->len = i;
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
