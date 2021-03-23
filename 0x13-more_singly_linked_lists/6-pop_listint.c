#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: listint_t linked list.
 *
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	int i = 0;

	if (!head || !(*head))
		return (0);
	i = (*head)->n;
	*head = (*head)->next;
	free(head);

	return (i);
}
