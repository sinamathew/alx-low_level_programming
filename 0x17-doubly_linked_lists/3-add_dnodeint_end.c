#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly-linked list
 * @head: head of the list
 * @n: value of the node
 *
 * By: Sina Mathew
 * Return: the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *nnode = malloc(sizeof(dlistint_t) * 1);

	if (head == NULL || nnode == NULL)
		return (free(nnode), NULL);
	nnode->n = n, nnode->prev = NULL, nnode->next = NULL;
	if (*head == NULL)
		return (*head = nnode);
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = nnode, nnode->prev = current;
	return (nnode);
}
