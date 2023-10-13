#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an index in a doubly-linked list
 * @head: head of the list
 * @index: index to retrieve
 *
 * By: Sina Mathew
 * Return: the node at the specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (0 < index && head != NULL)
		--index, head = head->next;
	return (head);
}
