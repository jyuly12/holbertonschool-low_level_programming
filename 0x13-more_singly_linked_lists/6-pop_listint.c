#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: listint_t linked list.
 *
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int i = 0;

	if (head == NULL || *head == NULL)
		return (0);

	list = *head;
	*head = list->next;
	i = list->n;

	free(list);

	return (i);
}
