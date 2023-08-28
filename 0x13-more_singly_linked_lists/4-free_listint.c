#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the node
 * By: Sina Mathew
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
