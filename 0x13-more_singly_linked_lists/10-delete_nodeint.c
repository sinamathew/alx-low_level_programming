#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at listint_t linked list index
 * @head: Pointer to a pointer to the node element
 * @index: node that should be deleted
 * By: Sina Mathew
 *
 * Return: 1 if succeeded and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
