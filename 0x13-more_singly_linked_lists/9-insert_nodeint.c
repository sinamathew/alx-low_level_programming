#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a given position
 * @head: pointer to a pointer to the node element
 * @idx: index of the list where the new node should be added.
 * @n: content of the new node
 * By: Sina Mathew
 *
 * Return: addressof the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curent->next;
	current->next = new_node;

	return (new_node);
}
