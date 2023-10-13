#include "lists.h"

/**
 * add_dnodeint - adds a node to the head of a doubly-linked list
 * @head: head of the list
 * @n: value to add
 *
 * Return: the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t) * 1);

	if (head == NULL || new_node == NULL)
		return (free(new_node), NULL);
	new_node->n = n, new_node->prev = NULL, new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	return (*head = new_node);
}
