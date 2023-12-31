#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index in doubly-linked list
 * @head: head of the list
 * @index: index of node to delete
 *
 * By: Sina Mathew
 * Return: 1 if the node was deleted, else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL,
		*current = head == NULL ? NULL : *head,
		*next = current == NULL ? NULL : current->next;

	for (; current != NULL && index; --index)
		prev = current, current = next, next = next == NULL ? NULL : next->next;
	if (current == NULL || index)
		return (-1);
	if (prev == NULL)
	{
		if (next != NULL)
			next->prev = NULL;
		return (free(current), *head = next, 1);
	}
	free(current), prev->next = next;
	if (next != NULL)
		next->prev = prev;
	return (1);
}
